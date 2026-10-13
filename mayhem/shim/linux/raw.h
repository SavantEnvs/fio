/* <linux/raw.h> was dropped from the kernel UAPI headers; old fio's os/os-linux.h still includes it. */
#ifndef MAYHEM_SHIM_LINUX_RAW_H
#define MAYHEM_SHIM_LINUX_RAW_H
#include <linux/ioctl.h>
#include <linux/types.h>

#define RAW_SETBIND	_IO(0xac, 0)
#define RAW_GETBIND	_IO(0xac, 1)

struct raw_config_request {
	int	raw_minor;
	__u64	block_major;
	__u64	block_minor;
};
#endif
