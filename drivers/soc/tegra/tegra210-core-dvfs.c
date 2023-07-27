/*
 * Copyright (c) 2014-2021, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

static const int core_voltages_mv[MAX_DVFS_FREQS] = {
	800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1062, 1075, 1100, 1125
};

static struct dvfs core_dvfs_table[] = {
/* ID 1 Tables */
	/* SOC Speedo 1, Process Any. Core voltages(mV):    800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050,    1062,    1075,    1100,    1125 */
	CORE_DVFS("emc",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000),

	CORE_DVFS("vic03",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  601600,  601600),
	CORE_DVFS("nvjpg",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  601600,  601600),
	CORE_DVFS("se",			1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  601600,  601600),
	CORE_DVFS("tsecb",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  601600,  601600),
	CORE_DVFS("c2bus",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  601600,  601600),

	CORE_DVFS("msenc",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  652800,  652800),
	CORE_DVFS("nvdec",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  652800,  652800),
	CORE_DVFS("c3bus",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  652800,  652800),

	CORE_DVFS("vi",			1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  716800,  716800),
	CORE_DVFS("isp",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  716800,  716800),
	CORE_DVFS("cbus",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  716800,  716800),

	CORE_DVFS("adsp_bus",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  806400,  806400),
	CORE_DVFS("ape",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  550400,  550400),

	CORE_DVFS("sbus",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  408000,  408000),
	CORE_DVFS("sclk",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  408000,  408000),
	CORE_DVFS("host1x",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  408000,  408000),
	CORE_DVFS("tsec",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  408000,  408000),
	CORE_DVFS("mselect",		1, -1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  408000,  408000),

	CORE_DVFS("disp1",		1, -1, 0, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  614400,  614400),
	CORE_DVFS("disp2",		1, -1, 0, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,       1,  614400,  614400),


/* ID 0 Tables */
	/* SOC Speedo 0, Process 0. Core voltages(mV):	    800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050,    1062,    1075,    1100,    1125 */
	CORE_DVFS("emc",		0, 0, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000),

	CORE_DVFS("vic03",		0, 0, 1, KHZ,	 140800,  140800,  268800,  332800,  371200,  409600,  435200,  473600,  499200,  537600,  563200,  563200,  588800,  601600,  627200),
	CORE_DVFS("nvjpg",		0, 0, 1, KHZ,	 140800,  140800,  268800,  332800,  371200,  409600,  435200,  473600,  499200,  537600,  563200,  563200,  588800,  601600,  627200),
	CORE_DVFS("se",			0, 0, 1, KHZ,	 140800,  140800,  268800,  332800,  371200,  409600,  435200,  473600,  499200,  537600,  563200,  563200,  588800,  601600,  627200),
	CORE_DVFS("tsecb",		0, 0, 1, KHZ,	 140800,  140800,  268800,  332800,  371200,  409600,  435200,  473600,  499200,  537600,  563200,  563200,  588800,  601600,  627200),
	CORE_DVFS("c2bus",		0, 0, 1, KHZ,	 140800,  140800,  268800,  332800,  371200,  409600,  435200,  473600,  499200,  537600,  563200,  563200,  588800,  601600,  627200),

	CORE_DVFS("nvenc",		0, 0, 1, KHZ,	 192000,  192000,  345600,  396800,  435200,  473600,  512000,  563200,  601600,  627200,  652800,  652800,  678400,  691200,  716800),
	CORE_DVFS("nvdec",		0, 0, 1, KHZ,	 192000,  192000,  345600,  396800,  435200,  473600,  512000,  563200,  601600,  627200,  652800,  652800,  678400,  691200,  716800),
	CORE_DVFS("c3bus",		0, 0, 1, KHZ,	 192000,  192000,  345600,  396800,  435200,  473600,  512000,  563200,  601600,  627200,  652800,  652800,  678400,  691200,  716800),

	CORE_DVFS("vi",			0, 0, 1, KHZ,	 217600,  217600,  307200,  307200,  371200,  435200,  499200,  550400,  614400,  678400,  742400,  742400,  793600,  793600,  793600),
	CORE_DVFS("isp",		0, 0, 1, KHZ,	 217600,  217600,  307200,  307200,  371200,  435200,  499200,  550400,  614400,  678400,  742400,  742400,  793600,  793600,  793600),
	CORE_DVFS("cbus",		0, 0, 1, KHZ,	 217600,  217600,  307200,  307200,  371200,  435200,  499200,  550400,  614400,  678400,  742400,  742400,  793600,  793600,  793600),

	CORE_DVFS("abus",		0, 0, 1, KHZ,	 153600,  153600,  332800,  371200,  422400,  486400,  563200,  614400,  691200,  742400,  780800,  780800,  819200,  844800,  844800),
	CORE_DVFS("aclk",		0, 0, 1, KHZ,	 153600,  153600,  332800,  371200,  422400,  486400,  563200,  614400,  691200,  742400,  780800,  780800,  819200,  844800,  844800),
	CORE_DVFS("ape",		0, 0, 1, KHZ,	 140800,  140800,  230400,  268800,  307200,  345600,  384000,  448000,  486400,  499200,  499200,  499200,  499200,  499200,  499200),

	CORE_DVFS("sbus",		0, 0, 1, KHZ,	 115200,  115200,  179200,  217600,  243200,  268800,  294400,  320000,  345600,  358400,  371200,  371200,  384000,  408000,  408000),
	CORE_DVFS("sclk",		0, 0, 1, KHZ,	 115200,  115200,  179200,  217600,  243200,  268800,  294400,  320000,  345600,  358400,  371200,  371200,  384000,  408000,  408000),
	CORE_DVFS("host1x",		0, 0, 1, KHZ,	  81600,   81600,  140800,  153600,  166400,  192000,  230400,  281600,  320000,  345600,  371200,  371200,  384000,  408000,  408000),
	CORE_DVFS("tsec",		0, 0, 1, KHZ,	 217600,  217600,  384000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("mselect",		0, 0, 1, KHZ,	 204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("disp1",		0, 0, 0, KHZ,	 153600,  153600,  332800,  371200,  409600,  422400,  460800,  499200,  537600,  576000,  601600,  601600,  640000,  665600,  665600),
	CORE_DVFS("disp2",		0, 0, 0, KHZ,	 153600,  153600,  332800,  371200,  409600,  422400,  460800,  499200,  537600,  576000,  601600,  601600,  640000,  665600,  665600),


	/* SOC Speedo 0, Process 1. Core voltages(mV):	    800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050,    1062,    1075,    1100,    1125 */
	CORE_DVFS("emc",		0, 1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000),

	CORE_DVFS("vic03",		0, 1, 1, KHZ,	 192000,  192000,  307200,  345600,  409600,  486400,  524800,  550400,  576000,  588800,  614400,  614400,  627200,  627200,  627200),
	CORE_DVFS("nvjpg",		0, 1, 1, KHZ,	 192000,  192000,  307200,  345600,  409600,  486400,  524800,  550400,  576000,  588800,  614400,  614400,  627200,  627200,  627200),
	CORE_DVFS("se",			0, 1, 1, KHZ,	 192000,  192000,  307200,  345600,  409600,  486400,  524800,  550400,  576000,  588800,  614400,  614400,  627200,  627200,  627200),
	CORE_DVFS("tsecb",		0, 1, 1, KHZ,	 192000,  192000,  307200,  345600,  409600,  486400,  524800,  550400,  576000,  588800,  614400,  614400,  627200,  627200,  627200),
	CORE_DVFS("c2bus",		0, 1, 1, KHZ,	 192000,  192000,  307200,  345600,  409600,  486400,  524800,  550400,  576000,  588800,  614400,  614400,  627200,  627200,  627200),

	CORE_DVFS("nvenc",		0, 1, 1, KHZ,	 268800,  268800,  384000,  448000,  486400,  550400,  576000,  614400,  652800,  678400,  691200,  691200,  716800,  716800,  716800),
	CORE_DVFS("nvdec",		0, 1, 1, KHZ,	 268800,  268800,  384000,  448000,  486400,  550400,  576000,  614400,  652800,  678400,  691200,  691200,  716800,  716800,  716800),
	CORE_DVFS("c3bus",		0, 1, 1, KHZ,	 268800,  268800,  384000,  448000,  486400,  550400,  576000,  614400,  652800,  678400,  691200,  691200,  716800,  716800,  716800),

	CORE_DVFS("vi",			0, 1, 1, KHZ,	 268800,  268800,  473600,  473600,  576000,  588800,  678400,  691200,  691200,  691200,  793600,  793600,  793600,  793600,  793600),
	CORE_DVFS("isp",		0, 1, 1, KHZ,	 268800,  268800,  473600,  473600,  576000,  588800,  678400,  691200,  691200,  691200,  793600,  793600,  793600,  793600,  793600),
	CORE_DVFS("cbus",		0, 1, 1, KHZ,	 268800,  268800,  473600,  473600,  576000,  588800,  678400,  691200,  691200,  691200,  793600,  793600,  793600,  793600,  793600),

	CORE_DVFS("abus",		0, 1, 1, KHZ,	 230400,  230400,  422400,  460800,  524800,  601600,  652800,  704000,  755200,  819200,  844800,  844800,  844800,  844800,  844800),
	CORE_DVFS("aclk",		0, 1, 1, KHZ,	 230400,  230400,  422400,  460800,  524800,  601600,  652800,  704000,  755200,  819200,  844800,  844800,  844800,  844800,  844800),
	CORE_DVFS("ape",		0, 1, 1, KHZ,	 179200,  179200,  307200,  345600,  371200,  409600,  422400,  460800,  499200,  499200,  499200,  499200,  499200,  499200,  499200),

	CORE_DVFS("sbus",		0, 1, 1, KHZ,	 140800,  140800,  230400,  256000,  281600,  307200,  332800,  358400,  371200,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("sclk",		0, 1, 1, KHZ,	 140800,  140800,  230400,  256000,  281600,  307200,  332800,  358400,  371200,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("host1x",		0, 1, 1, KHZ,	  81600,   81600,  153600,  179200,  192000,  217600,  345600,  358400,  384000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("tsec",		0, 1, 1, KHZ,	 268800,  268800,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("mselect",		0, 1, 1, KHZ,	 204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("disp1",		0, 1, 0, KHZ,	 243200,  243200,  422400,  460800,  499200,  524800,  563200,  576000,  601600,  640000,  665600,  665600,  665600,  665600,  665600),
	CORE_DVFS("disp2",		0, 1, 0, KHZ,	 243200,  243200,  422400,  460800,  499200,  524800,  563200,  576000,  601600,  640000,  665600,  665600,  665600,  665600,  665600),


	/* SOC Speedo 0, Process 2. Core voltages(mV):	    800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050,    1062,    1075,    1100,    1125 */
	CORE_DVFS("emc",		0, 2, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000, 1200000),

	CORE_DVFS("vic03",		0, 2, 1, KHZ,	 230400,  230400,  371200,  448000,  499200,  563200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200),
	CORE_DVFS("nvjpg",		0, 2, 1, KHZ,	 230400,  230400,  371200,  448000,  499200,  563200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200),
	CORE_DVFS("se",			0, 2, 1, KHZ,	 230400,  230400,  371200,  448000,  499200,  563200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200),
	CORE_DVFS("tsecb",		0, 2, 1, KHZ,	 230400,  230400,  371200,  448000,  499200,  563200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200),
	CORE_DVFS("c2bus",		0, 2, 1, KHZ,	 230400,  230400,  371200,  448000,  499200,  563200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200,  627200),

	CORE_DVFS("nvenc",		0, 2, 1, KHZ,	 307200,  307200,  486400,  563200,  614400,  640000,  652800,  678400,  716800,  716800,  716800,  716800,  716800,  716800,  716800),
	CORE_DVFS("nvdec",		0, 2, 1, KHZ,	 307200,  307200,  486400,  563200,  614400,  640000,  652800,  678400,  716800,  716800,  716800,  716800,  716800,  716800,  716800),
	CORE_DVFS("c3bus",		0, 2, 1, KHZ,	 307200,  307200,  486400,  563200,  614400,  640000,  652800,  678400,  716800,  716800,  716800,  716800,  716800,  716800,  716800),

	CORE_DVFS("vi",			0, 2, 1, KHZ,	 384000,  384000,  588800,  678400,  691200,  691200,  768000,  793600,  793600,  793600,  793600,  793600,  793600,  793600,  793600),
	CORE_DVFS("isp",		0, 2, 1, KHZ,	 384000,  384000,  588800,  678400,  691200,  691200,  768000,  793600,  793600,  793600,  793600,  793600,  793600,  793600,  793600),
	CORE_DVFS("cbus",		0, 2, 1, KHZ,	 384000,  384000,  588800,  678400,  691200,  691200,  768000,  793600,  793600,  793600,  793600,  793600,  793600,  793600,  793600),

	CORE_DVFS("abus",		0, 2, 1, KHZ,	 281600,  281600,  499200,  576000,  652800,  691200,  755200,  793600,  844800,  844800,  844800,  844800,  844800,  844800,  844800),
	CORE_DVFS("aclk",		0, 2, 1, KHZ,	 281600,  281600,  499200,  576000,  652800,  691200,  755200,  793600,  844800,  844800,  844800,  844800,  844800,  844800,  844800),
	CORE_DVFS("ape",		0, 2, 1, KHZ,	 230400,  230400,  358400,  396800,  422400,  486400,  499200,  499200,  499200,  499200,  499200,  499200,  499200,  499200,  499200),

	CORE_DVFS("sbus",		0, 2, 1, KHZ,	 204800,  204800,  307200,  332800,  371200,  384000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("sclk",		0, 2, 1, KHZ,	 204800,  204800,  307200,  332800,  371200,  384000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("host1x",		0, 2, 1, KHZ,	 128000,  128000,  217600,  345600,  384000,  384000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("tsec",		0, 2, 1, KHZ,	 345600,  345600,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("mselect",		0, 2, 1, KHZ,	 204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("disp1",		0, 2, 0, KHZ,	 345600,  345600,  486400,  524800,  563200,  576000,  627200,  640000,  665600,  665600,  665600,  665600,  665600,  665600,  665600),
	CORE_DVFS("disp2",		0, 2, 0, KHZ,	 345600,  345600,  486400,  524800,  563200,  576000,  627200,  640000,  665600,  665600,  665600,  665600,  665600,  665600,  665600),


/* Common Tables */
	/* Core voltages(mV):				    800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050,    1062,    1075,    1100,    1125 */
	CORE_DVFS("pll_a",		-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),
	CORE_DVFS("pll_c",		-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),
	CORE_DVFS("pll_c2",		-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),
	CORE_DVFS("pll_c3",		-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),
	CORE_DVFS("pll_c4_out0",	-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),
	CORE_DVFS("pll_d_out0",		-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),
	CORE_DVFS("pll_d2",		-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),
	CORE_DVFS("pll_dp",		-1, -1, 1, KHZ,	1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000, 1130000),

	/* Core voltages(mV):				    800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050,    1062,    1075,    1100,    1125 */
	CORE_DVFS("csi",		-1, -1, 1, KHZ,	 750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000),
	CORE_DVFS("cilab",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("cilcd",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("cile",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),

	CORE_DVFS("dsia",		-1, -1, 1, KHZ,	 500000,  500000,  500000,  500000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000),
	CORE_DVFS("dsib",		-1, -1, 1, KHZ,	 500000,  500000,  500000,  500000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000),

	CORE_DVFS("dsialp",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("dsiblp",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),

	CORE_DVFS("sor0",		-1, -1, 1, KHZ,	 162000,  162000,  270000,  270000,  270000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000),
	CORE_DVFS("sor1",		-1, -1, 1, KHZ,	 148500,  148500,  297000,  297000,  297000,  297000,  297000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000),

	CORE_DVFS("i2s0",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s1",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s2",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s3",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s4",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),

	CORE_DVFS("d_audio",		-1, -1, 1, KHZ,	  49152,   49152,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304),
	CORE_DVFS("spdif_out",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24728,   24728,   24728,   24728,   24728,   24728,   24728,   24728,   24728),
	CORE_DVFS("dmic1",		-1, -1, 1, KHZ,	  12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288),
	CORE_DVFS("dmic2",		-1, -1, 1, KHZ,	  12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288),
	CORE_DVFS("dmic3",		-1, -1, 1, KHZ,	  12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288),

	CORE_DVFS("hda",		-1, -1, 1, KHZ,	  51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000),
	CORE_DVFS("hda2codec_2x",	-1, -1, 1, KHZ,	  48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),

	CORE_DVFS("sdmmc2",		-1, -1, 1, KHZ,	      1,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000),
	CORE_DVFS("sdmmc4",		-1, -1, 1, KHZ,	      1,  200000,  266000,  266000,  266000,  266000,  266000,  266000,  266000,  266000,  266000,  266000,  266000,  266000,  266000),

	CORE_DVFS("sdmmc1",		-1, -1, 1, KHZ,	 136000,  136000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000),
	CORE_DVFS("sdmmc3",		-1, -1, 1, KHZ,	 136000,  136000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000),

	CORE_DVFS("xusb_falcon_src",	-1, -1, 1, KHZ,	      1,       1,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000),
	CORE_DVFS("xusb_host_src",	-1, -1, 1, KHZ,	      1,       1,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000),
	CORE_DVFS("xusb_dev_src",	-1, -1, 1, KHZ,	      1,       1,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000),
	CORE_DVFS("xusb_ssp_src",	-1, -1, 1, KHZ,	      1,       1,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000),
	CORE_DVFS("xusb_fs_src",	-1, -1, 1, KHZ,	      1,       1,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),
	CORE_DVFS("xusb_hs_src",	-1, -1, 1, KHZ,	      1,       1,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000),
	CORE_DVFS("usbd",		-1, -1, 1, KHZ,	 480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000),
	CORE_DVFS("usb2",		-1, -1, 1, KHZ,	 480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000),

	CORE_DVFS("sata",		-1, -1, 1, KHZ,	      1,       1,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("sata_oob",		-1, -1, 1, KHZ,	      1,       1,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000),
	CORE_DVFS("pcie",		-1, -1, 1, KHZ,	      1,       1,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000),

	CORE_DVFS("i2c1",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c2",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c3",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c4",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c5",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c6",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("vii2c",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),

	CORE_DVFS("pwm",		-1, -1, 1, KHZ,	  48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),

	CORE_DVFS("soc_therm",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("tsensor",		-1, -1, 1, KHZ,	  19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200),

};

static struct dvfs spi_dvfs_table[] = {
	CORE_DVFS("sbc1",		-1, -1, 1, KHZ,	  12000,   35000,   50000,   50000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000),
	CORE_DVFS("sbc2",		-1, -1, 1, KHZ,	  12000,   35000,   50000,   50000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000),
	CORE_DVFS("sbc3",		-1, -1, 1, KHZ,	  12000,   35000,   50000,   50000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000),
	CORE_DVFS("sbc4",		-1, -1, 1, KHZ,	  12000,   35000,   50000,   50000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000,   65000),
};


static struct dvfs spi_slave_dvfs_table[] = {
	CORE_DVFS("sbc1",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),
	CORE_DVFS("sbc2",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),
	CORE_DVFS("sbc3",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),
	CORE_DVFS("sbc4",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),

};

static struct dvfs qspi_sdr_dvfs_table[] = {
	CORE_DVFS("qspi",		-1, -1, 1, KHZ,	  81600,   81600,  116600,  116600,  116600,  116600,  116600,  116600,  116600,  116600,  116600,  116600,  116600,  116600,  116600),
};

static struct dvfs qspi_ddr_dvfs_table[] = {
	CORE_DVFS("qspi",		-1, -1, 1, KHZ,	  163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200,   163200),
};

static struct dvfs sor1_dp_dvfs_table[] = {
	CORE_DVFS("sor1",		-1, -1, 1, KHZ,	 162000,  162000,  270000,  270000,  270000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000),
};
