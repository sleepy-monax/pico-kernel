#ifndef _MUNIX_KERNEL_IPC_H
#define _MUNIX_KERNEL_IPC_H

#include <common/config.h>
#include <common/message.h>

struct ipc_channel
{
	int reader;
	int writer;

	struct message messages[CONFIG_IPC_CHANNEL_LENGTH];
};

struct ipc_duplex
{
	struct ipc_channel server;
	struct ipc_channel client;
};

#endif /* !_MUNIX_KERNEL_IPC_H */
