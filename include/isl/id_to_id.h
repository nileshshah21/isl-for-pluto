#ifndef ISL_ID_TO_ID_H
#define ISL_ID_TO_ID_H

#include "isl/id_type.h"
#include "isl/maybe_id.h"

#define ISL_KEY		isl_id
#define ISL_VAL		isl_id
#define ISL_HMAP_SUFFIX	id_to_id
#define ISL_HMAP	isl_id_to_id
#define ISL_HMAP_HAVE_READ_FROM_STR
#define ISL_HMAP_IS_EQUAL	isl_id_to_id_is_equal
#include "isl/hmap.h"
#undef ISL_KEY
#undef ISL_VAL
#undef ISL_HMAP_SUFFIX
#undef ISL_HMAP
#undef ISL_HMAP_HAVE_READ_FROM_STR
#undef ISL_HMAP_IS_EQUAL

#endif
