//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
////                                                                        //// ////////////////////////
////    EDASQLite Module                                                    //// ////////////////////////
////                                                                        //// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////


#if !defined(__EDASQLITE_H__)
#define __EDASQLITE_H__

#define CPP11 (defined(__cplusplus) && __cplusplus >= 201103L)

#ifdef __cplusplus

extern "C" {

#endif



////////////////////////////////////////////////////////////// includes //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

#include "ecere.h"
#include "EDA.h"
#include "ffi.h"


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////    //////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef struct C(SQLiteStmt) C(SQLiteStmt);
#if CPP11
enum C(SQLiteResult) : int
#else
typedef int C(SQLiteResult);
enum C(SQLiteResult)
#endif
{
   SQLiteResult_ok = 0x0,
   SQLiteResult_error = 0x1,
   SQLiteResult_internal = 0x2,
   SQLiteResult_permission = 0x3,
   SQLiteResult_abort = 0x4,
   SQLiteResult_busy = 0x5,
   SQLiteResult_locked = 0x6,
   SQLiteResult_noMem = 0x7,
   SQLiteResult_readOnly = 0x8,
   SQLiteResult_interrupt = 0x9,
   SQLiteResult_ioError = 0xA,
   SQLiteResult_corrupt = 0xB,
   SQLiteResult_notFound = 0xC,
   SQLiteResult_full = 0xD,
   SQLiteResult_cantOpen = 0xE,
   SQLiteResult_protocol = 0xF,
   SQLiteResult_empty = 0x10,
   SQLiteResult_schema = 0x11,
   SQLiteResult_tooBig = 0x12,
   SQLiteResult_constraint = 0x13,
   SQLiteResult_mismatch = 0x14,
   SQLiteResult_misuse = 0x15,
   SQLiteResult_noLFS = 0x16,
   SQLiteResult_authorization = 0x17,
   SQLiteResult_format = 0x18,
   SQLiteResult_range = 0x19,
   SQLiteResult_notADatabase = 0x1A,
   SQLiteResult_notice = 0x1B,
   SQLiteResult_warning = 0x1C,
   SQLiteResult_rowReady = 0x64,
   SQLiteResult_done = 0x65
};

typedef C(Instance) C(SQLiteDB);
typedef struct C(FieldValue) C(FieldValue);
typedef uint32 C(FieldTypeEx);
#if CPP11
enum C(FieldType) : int
#else
typedef int C(FieldType);
enum C(FieldType)
#endif
{
   FieldType_integer = 0x1,
   FieldType_real = 0x2,
   FieldType_text = 0x3,
   FieldType_blob = 0x4,
   FieldType_nil = 0x5
};

// end -- moved backwards outputs
typedef C(Instance) C(SQLiteStaticLink);
#define FIELDTYPEEX_type_SHIFT                           0
#define FIELDTYPEEX_type_MASK                            0x7
#define FIELDTYPEEX_type(x)                              ((((FieldTypeEx)(x)) & FIELDTYPEEX_type_MASK) >> FIELDTYPEEX_type_SHIFT)
#define FIELDTYPEEX_SET_type(x, type)                       (x) = ((FieldTypeEx)(x) & ~((FieldTypeEx)FIELDTYPEEX_type_MASK)) | (((FieldTypeEx)(type)) << FIELDTYPEEX_type_SHIFT)
#define FIELDTYPEEX_mustFree_SHIFT                       3
#define FIELDTYPEEX_mustFree_MASK                        0x8
#define FIELDTYPEEX_mustFree(x)                          ((((FieldTypeEx)(x)) & FIELDTYPEEX_mustFree_MASK) >> FIELDTYPEEX_mustFree_SHIFT)
#define FIELDTYPEEX_SET_mustFree(x, mustFree)                   (x) = ((FieldTypeEx)(x) & ~((FieldTypeEx)FIELDTYPEEX_mustFree_MASK)) | (((FieldTypeEx)(mustFree)) << FIELDTYPEEX_mustFree_SHIFT)
#define FIELDTYPEEX(type, mustFree)                               ((((FieldTypeEx)(type)) << FIELDTYPEEX_type_SHIFT) | ((FieldTypeEx)(mustFree)) << FIELDTYPEEX_mustFree_SHIFT)


struct C(FieldValue)
{
   C(FieldTypeEx) type;
   union
   {
      int i;
      double r;
      C(String) s;
      void * b;
   };
};
extern int (* FieldValue_compareInt)(C(FieldValue) * __this, C(FieldValue) * b);

extern int (* FieldValue_compareReal)(C(FieldValue) * __this, C(FieldValue) * b);

extern int (* FieldValue_compareText)(C(FieldValue) * __this, C(FieldValue) * b);

extern C(String) (* FieldValue_stringify)(C(FieldValue) * __this);

extern C(bool) (* SQLiteDB_begin)(C(SQLiteDB) __this);

extern C(bool) (* SQLiteDB_commit)(C(SQLiteDB) __this);

extern C(SQLiteResult) (* SQLiteDB_exec)(C(SQLiteDB) __this, constString cmd);

extern C(SQLiteResult) (* SQLiteDB_execf)(C(SQLiteDB) __this, constString format, ...);

extern C(SQLiteDB) (* SQLiteDB_open)(subclass(SQLiteDB) _class, constString path, C(bool) readOnly, C(bool) create);

extern void (* SQLiteDB_setupRegExp)(C(SQLiteDB) __this);

extern C(Property) * PROPERTY(SQLiteDB, lockingMode);
extern void (* SQLiteDB_set_lockingMode)(C(SQLiteDB) s, constString value);

extern void (* SQLiteStmt_bind_double)(C(SQLiteStmt) * __this, int pos, double d);

extern void (* SQLiteStmt_bind_int)(C(SQLiteStmt) * __this, int pos, int i);

extern void (* SQLiteStmt_bind_int64)(C(SQLiteStmt) * __this, int pos, int64 i);

extern void (* SQLiteStmt_bind_null)(C(SQLiteStmt) * __this, int pos);

extern void (* SQLiteStmt_bind_text)(C(SQLiteStmt) * __this, int pos, constString t);

extern void (* SQLiteStmt_bind_value)(C(SQLiteStmt) * __this, int pos, C(FieldValue) * value);

extern int (* SQLiteStmt_column_bytes)(C(SQLiteStmt) * __this, int pos);

extern double (* SQLiteStmt_column_double)(C(SQLiteStmt) * __this, int pos);

extern int (* SQLiteStmt_column_int)(C(SQLiteStmt) * __this, int pos);

extern int64 (* SQLiteStmt_column_int64)(C(SQLiteStmt) * __this, int pos);

extern constString (* SQLiteStmt_column_text)(C(SQLiteStmt) * __this, int pos);

extern C(String) (* SQLiteStmt_column_text_copy)(C(SQLiteStmt) * __this, int pos);

extern C(FieldType) (* SQLiteStmt_column_type)(C(SQLiteStmt) * __this, int pos);

extern void (* SQLiteStmt_column_value)(C(SQLiteStmt) * __this, int pos, C(FieldValue) * value);

extern void (* SQLiteStmt_finalize)(C(SQLiteStmt) * __this);

extern void (* SQLiteStmt_queryf)(C(SQLiteStmt) * __this, constString format, ...);

extern void (* SQLiteStmt_reset)(C(SQLiteStmt) * __this);

extern C(SQLiteResult) (* SQLiteStmt_step)(C(SQLiteStmt) * __this);

extern C(Property) * PROPERTY(SQLiteStmt, db);
extern void (* SQLiteStmt_set_db)(C(SQLiteStmt) * s, C(SQLiteDB) value);
extern C(SQLiteDB) (* SQLiteStmt_get_db)(C(SQLiteStmt) * s);

extern C(Property) * PROPERTY(SQLiteStmt, query);
extern void (* SQLiteStmt_set_query)(C(SQLiteStmt) * s, constString value);

extern struct _ffi_type * (* fFIGetType)(C(Class) * type, C(bool) structByValue);
extern C(Class) * CO(FieldType);
extern C(Class) * CO(FieldTypeEx);
extern C(Class) * CO(FieldValue);
extern C(Class) * CO(SQLiteDB);
extern C(Class) * CO(SQLiteResult);
extern C(Class) * CO(SQLiteStaticLink);
extern C(Class) * CO(SQLiteStmt);

C(Module) EDASQLite_init(C(Module) fromModule);



#ifdef __cplusplus

};

#endif

#endif // !defined(__EDASQLITE_H__)

