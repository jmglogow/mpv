/*
 * This file is part of mpv.
 *
 * mpv is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * mpv is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with mpv.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stddef.h>

#include "vf.h"
#include "vf_lavfi.h"

static int vf_open(vf_instance_t *vf)
{
    MP_WARN(vf, "This filter is deprecated. Use lavfi hflip instead.\n");
    return vf_lw_set_graph(vf, NULL, NULL, "hflip") >= 0;
}

const vf_info_t vf_info_mirror = {
    .description = "horizontal mirror",
    .name = "mirror",
    .open = vf_open,
};
