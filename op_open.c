/*
 * Copyright (c) 2010, Gerard Lledó Vives, gerard.lledo@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation. See README and COPYING for
 * more details.
 */


#include <errno.h>

#include "common.h"
#include "logging.h"
#include "ops.h"

int op_open(const char *path, struct fuse_file_info *fi)
{   
    DEBUG("open");
    UNUSED(path);
    if((fi->flags & 3) != O_RDONLY)
        return -EACCES;
    return 0;
}
