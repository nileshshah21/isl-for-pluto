#ifndef ISL_ID_TO_AST_EXPR_H
#define ISL_ID_TO_AST_EXPR_H

#include "../id_type.h"
#include "isl/ast_type.h"
#include "isl/maybe_ast_expr.h"

#define ISL_KEY		isl_id
#define ISL_VAL		isl_ast_expr
#define ISL_HMAP_SUFFIX	id_to_ast_expr
#define ISL_HMAP	isl_id_to_ast_expr
#define ISL_HMAP_HAVE_READ_FROM_STR
#define ISL_HMAP_IS_EQUAL	isl_id_to_ast_expr_is_equal
#include "isl/hmap.h"
#undef ISL_KEY
#undef ISL_VAL
#undef ISL_HMAP_SUFFIX
#undef ISL_HMAP
#undef ISL_HMAP_HAVE_READ_FROM_STR
#undef ISL_HMAP_IS_EQUAL

#endif
