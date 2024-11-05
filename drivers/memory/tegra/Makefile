ccflags-y += -I$(srctree)/drivers/memory/tegra

tegra-mc-$(CONFIG_ARCH_TEGRA_21x_SOC) += tegra210-downstream.o

obj-n += tegra-mc.o

ifeq ($(CONFIG_ARCH_TEGRA_21x_SOC), y)
obj-$(CONFIG_TEGRA210_EMC) += t210-emc.o
t210-emc-objs += tegra210-emc-downstream.o tegra210-emc-cc-r21015.o tegra210-emc-cc-r21012.o tegra210-emc-cc-r21021-downstream.o tegra210-emc-cc-minerva.o tegra210-dt-parse.o
endif
