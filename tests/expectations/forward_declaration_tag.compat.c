#if 0
''' '
#endif
#if defined(CBINDGEN_STYLE_TYPE)
/* ANONYMOUS STRUCTS DO NOT SUPPORT FORWARD DECLARATIONS!
#endif
#if 0
' '''
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct StructInfo {
  const struct TypeInfo *const *fields;
  uintptr_t num_fields;
};

enum TypeData_Tag {
  Primitive,
  Struct,
};

struct TypeData {
  enum TypeData_Tag tag;
  union {
    struct {
      struct StructInfo struct_;
    };
  };
};

struct TypeInfo {
  struct TypeData data;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(struct TypeInfo x);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#if 0
''' '
#endif
#if defined(CBINDGEN_STYLE_TYPE)
*/
#endif
#if 0
' '''
#endif
