/* SPDX-License-Identifier: LGPL-2.1+ */
/***
  Copyright © 2018 Susant Sahani
***/

#include "netdev/netdevsim.h"
#include "missing.h"

const NetDevVTable netdevsim_vtable = {
        .object_size = sizeof(NetDevSim),
        .sections = "Match\0NetDev\0",
        .create_type = NETDEV_CREATE_INDEPENDENT,
};
