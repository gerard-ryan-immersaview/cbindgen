#define NOINLINE __attribute__((noinline))
#define NODISCARD [[nodiscard]]


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

enum FillRule
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  A,
  B,
};
#ifndef __cplusplus
typedef uint8_t FillRule;
#endif // __cplusplus

/**
 * This will have a destructor manually implemented via variant_body, and
 * similarly a Drop impl in Rust.
 */
typedef struct {
  uintptr_t len;
  uint32_t *ptr;
} OwnedSlice_u32;

typedef struct {
  FillRule fill;
  OwnedSlice_u32 coordinates;
} Polygon_u32;

/**
 * This will have a destructor manually implemented via variant_body, and
 * similarly a Drop impl in Rust.
 */
typedef struct {
  uintptr_t len;
  int32_t *ptr;
} OwnedSlice_i32;

enum Foo_u32_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar_u32,
  Polygon1_u32,
  Slice1_u32,
  Slice2_u32,
  Slice3_u32,
  Slice4_u32,
};
#ifndef __cplusplus
typedef uint8_t Foo_u32_Tag;
#endif // __cplusplus

typedef struct {
  FillRule fill;
  OwnedSlice_u32 coords;
} Slice3_Body_u32;

typedef struct {
  FillRule fill;
  OwnedSlice_i32 coords;
} Slice4_Body_u32;

typedef struct {
  Foo_u32_Tag tag;
  union {
    struct {
      Polygon_u32 polygon1;
    };
    struct {
      OwnedSlice_u32 slice1;
    };
    struct {
      OwnedSlice_i32 slice2;
    };
    Slice3_Body_u32 slice3;
    Slice4_Body_u32 slice4;
  };
} Foo_u32;

typedef struct {
  FillRule fill;
  OwnedSlice_i32 coordinates;
} Polygon_i32;

enum Baz_i32_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar2_i32,
  Polygon21_i32,
  Slice21_i32,
  Slice22_i32,
  Slice23_i32,
  Slice24_i32,
};
#ifndef __cplusplus
typedef uint8_t Baz_i32_Tag;
#endif // __cplusplus

typedef struct {
  Baz_i32_Tag tag;
  FillRule fill;
  OwnedSlice_i32 coords;
} Slice23_Body_i32;

typedef struct {
  Baz_i32_Tag tag;
  FillRule fill;
  OwnedSlice_i32 coords;
} Slice24_Body_i32;

typedef union {
  Baz_i32_Tag tag;
  struct {
    Baz_i32_Tag polygon21_tag;
    Polygon_i32 polygon21;
  };
  struct {
    Baz_i32_Tag slice21_tag;
    OwnedSlice_i32 slice21;
  };
  struct {
    Baz_i32_Tag slice22_tag;
    OwnedSlice_i32 slice22;
  };
  Slice23_Body_i32 slice23;
  Slice24_Body_i32 slice24;
} Baz_i32;

enum Taz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar3,
  Taz1,
  Taz3,
};
#ifndef __cplusplus
typedef uint8_t Taz_Tag;
#endif // __cplusplus

typedef union {
  Taz_Tag tag;
  struct {
    Taz_Tag taz1_tag;
    int32_t taz1;
  };
  struct {
    Taz_Tag taz3_tag;
    OwnedSlice_i32 taz3;
  };
} Taz;

enum Tazz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar4,
  Taz2,
};
#ifndef __cplusplus
typedef uint8_t Tazz_Tag;
#endif // __cplusplus

typedef union {
  Tazz_Tag tag;
  struct {
    Tazz_Tag taz2_tag;
    int32_t taz2;
  };
} Tazz;

enum Tazzz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar5,
  Taz5,
};
#ifndef __cplusplus
typedef uint8_t Tazzz_Tag;
#endif // __cplusplus

typedef union {
  Tazzz_Tag tag;
  struct {
    Tazzz_Tag taz5_tag;
    int32_t taz5;
  };
} Tazzz;

enum Tazzzz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Taz6,
  Taz7,
};
#ifndef __cplusplus
typedef uint8_t Tazzzz_Tag;
#endif // __cplusplus

typedef union {
  Tazzzz_Tag tag;
  struct {
    Tazzzz_Tag taz6_tag;
    int32_t taz6;
  };
  struct {
    Tazzzz_Tag taz7_tag;
    uint32_t taz7;
  };
} Tazzzz;

enum Qux_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Qux1,
  Qux2,
};
#ifndef __cplusplus
typedef uint8_t Qux_Tag;
#endif // __cplusplus

typedef union {
  Qux_Tag tag;
  struct {
    Qux_Tag qux1_tag;
    int32_t qux1;
  };
  struct {
    Qux_Tag qux2_tag;
    uint32_t qux2;
  };
} Qux;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(const Foo_u32 *a,
          const Baz_i32 *b,
          const Taz *c,
          Tazz d,
          const Tazzz *e,
          const Tazzzz *f,
          const Qux *g);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
