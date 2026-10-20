# SPDX-License-Identifier: GPL-2.0
# Minimal Makefile: only build the AIoT-3588IED board DTB.
# The full vendor rockchip dts tree references many vendor driver headers
# (e.g. drivers/soc/rockchip/rk_camera_sensor_info.h) that are absent in this
# ophub-based tree, so we restrict dtbs to the target board to avoid pulling
# in broken dependencies for unrelated boards.
dtb-$(CONFIG_ARCH_ROCKCHIP) += rk3588-aiot-3588a.dtb
