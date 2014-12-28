/*
 * Copyright (c) 2014, NVIDIA CORPORATION.  All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/kernel.h>
#include <linux/err.h>
#include <linux/io.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/of_device.h>
#include <linux/of_address.h>
#include <linux/tegra-soc.h>

#define MISCREG_HIDREV		0x4
#define MISCREG_EMU_REVID	0x120

static struct of_device_id tegra_chipid_of_match[] = {
	{ .compatible = "nvidia,tegra186-chipid" },
	{}
};

void tegra_get_tegraid_from_hw(void)
{
	struct device_node *np;
	u32 cid;
	u32 nlist;
	char *priv = NULL;
	struct resource r;
	void __iomem *chipid_base;
	u32 offset = MISCREG_HIDREV;

	np = of_find_matching_node(NULL, tegra_chipid_of_match);
	BUG_ON(!np);

	if (of_address_to_resource(np, 0, &r))
		BUG_ON("tegra-id: failed to resolve base address\n");

	chipid_base = of_iomap(np, 0);
	BUG_ON(!chipid_base);

	of_property_read_u32(np, "offset", &offset);
	if (r.start + offset > r.end)
		BUG_ON("tegra-id: invalid chipid offset\n");

	cid = readl(chipid_base + offset);
	nlist = readl(chipid_base + MISCREG_EMU_REVID);

	pr_info("tegra-id: chipid=%x, netlist=%d.\n", cid, nlist);

	tegra_set_tegraid((cid >> 8) & 0xff,
					  (cid >> 4) & 0xf,
					  (cid >> 16) & 0xf,
					  (nlist >> 0) & 0xffff,
					  (nlist >> 16) & 0xffff,
					  priv);
}
