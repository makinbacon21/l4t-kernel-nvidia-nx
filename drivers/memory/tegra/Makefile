ccflags-y += -I$(srctree)/drivers/memory/tegra

tegra-mc-$(CONFIG_ARCH_TEGRA_21x_SOC) += tegra210.o

obj-n += tegra-mc.o

obj-$(CONFIG_TEGRA210_EMC) += t210-emc.o
t210-emc-objs += tegra210-emc.o tegra210-emc-cc-r21015.o tegra210-emc-cc-r21012.o tegra210-emc-cc-r21021.o tegra210-emc-cc-minerva.o tegra210-dt-parse.o
