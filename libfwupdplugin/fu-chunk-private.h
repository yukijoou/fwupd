/*
 * Copyright (C) 2017 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include <xmlb.h>

#include "fu-chunk.h"
#include "fu-firmware.h"

void
fu_chunk_export(FuChunk *self, FuFirmwareExportFlags flags, XbBuilderNode *bn)
    G_GNUC_NON_NULL(1, 3);
gboolean
fu_chunk_build(FuChunk *self, XbNode *n, GError **error) G_GNUC_NON_NULL(1, 2);
