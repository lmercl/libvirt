/*
 * virsysfspriv.h: Helper functions for manipulating sysfs files
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Author: Martin Kletzander <mkletzan@redhat.com>
 */

#ifndef __VIR_SYSFS_PRIV_H__
# define __VIR_SYSFS_PRIV_H__

# include "virsysfs.h"

void virSysfsSetSystemPath(const char *path);

#endif /* __VIR_SYSFS_PRIV_H__*/
