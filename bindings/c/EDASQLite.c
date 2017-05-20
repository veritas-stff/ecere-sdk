#include "EDASQLite.h"



// Global Functions Pointers

GlobalFunction * FUNCTION(fFIGetType);



// Virtual Methods

C(Method) * METHOD(FieldValue, compareInt);
C(Method) * METHOD(FieldValue, compareReal);
C(Method) * METHOD(FieldValue, compareText);
C(Method) * METHOD(FieldValue, stringify);

C(Method) * METHOD(SQLiteDB, begin);
C(Method) * METHOD(SQLiteDB, commit);
C(Method) * METHOD(SQLiteDB, exec);
C(Method) * METHOD(SQLiteDB, execf);
C(Method) * METHOD(SQLiteDB, open);
C(Method) * METHOD(SQLiteDB, setupRegExp);

C(Method) * METHOD(SQLiteStmt, bind_double);
C(Method) * METHOD(SQLiteStmt, bind_int);
C(Method) * METHOD(SQLiteStmt, bind_int64);
C(Method) * METHOD(SQLiteStmt, bind_null);
C(Method) * METHOD(SQLiteStmt, bind_text);
C(Method) * METHOD(SQLiteStmt, bind_value);
C(Method) * METHOD(SQLiteStmt, column_bytes);
C(Method) * METHOD(SQLiteStmt, column_double);
C(Method) * METHOD(SQLiteStmt, column_int);
C(Method) * METHOD(SQLiteStmt, column_int64);
C(Method) * METHOD(SQLiteStmt, column_text);
C(Method) * METHOD(SQLiteStmt, column_text_copy);
C(Method) * METHOD(SQLiteStmt, column_type);
C(Method) * METHOD(SQLiteStmt, column_value);
C(Method) * METHOD(SQLiteStmt, finalize);
C(Method) * METHOD(SQLiteStmt, queryf);
C(Method) * METHOD(SQLiteStmt, reset);
C(Method) * METHOD(SQLiteStmt, step);




// Methods Function Pointers

int (* FieldValue_compareInt)(C(FieldValue) * __this, C(FieldValue) * b);
int (* FieldValue_compareReal)(C(FieldValue) * __this, C(FieldValue) * b);
int (* FieldValue_compareText)(C(FieldValue) * __this, C(FieldValue) * b);
C(String) (* FieldValue_stringify)(C(FieldValue) * __this);

C(bool) (* SQLiteDB_begin)(C(SQLiteDB) __this);
C(bool) (* SQLiteDB_commit)(C(SQLiteDB) __this);
C(SQLiteResult) (* SQLiteDB_exec)(C(SQLiteDB) __this, constString cmd);
C(SQLiteResult) (* SQLiteDB_execf)(C(SQLiteDB) __this, constString format, ...);
C(SQLiteDB) (* SQLiteDB_open)(subclass(SQLiteDB) _class, constString path, C(bool) readOnly, C(bool) create);
void (* SQLiteDB_setupRegExp)(C(SQLiteDB) __this);

void (* SQLiteStmt_bind_double)(C(SQLiteStmt) * __this, int pos, double d);
void (* SQLiteStmt_bind_int)(C(SQLiteStmt) * __this, int pos, int i);
void (* SQLiteStmt_bind_int64)(C(SQLiteStmt) * __this, int pos, int64 i);
void (* SQLiteStmt_bind_null)(C(SQLiteStmt) * __this, int pos);
void (* SQLiteStmt_bind_text)(C(SQLiteStmt) * __this, int pos, constString t);
void (* SQLiteStmt_bind_value)(C(SQLiteStmt) * __this, int pos, C(FieldValue) * value);
int (* SQLiteStmt_column_bytes)(C(SQLiteStmt) * __this, int pos);
double (* SQLiteStmt_column_double)(C(SQLiteStmt) * __this, int pos);
int (* SQLiteStmt_column_int)(C(SQLiteStmt) * __this, int pos);
int64 (* SQLiteStmt_column_int64)(C(SQLiteStmt) * __this, int pos);
constString (* SQLiteStmt_column_text)(C(SQLiteStmt) * __this, int pos);
C(String) (* SQLiteStmt_column_text_copy)(C(SQLiteStmt) * __this, int pos);
C(FieldType) (* SQLiteStmt_column_type)(C(SQLiteStmt) * __this, int pos);
void (* SQLiteStmt_column_value)(C(SQLiteStmt) * __this, int pos, C(FieldValue) * value);
void (* SQLiteStmt_finalize)(C(SQLiteStmt) * __this);
void (* SQLiteStmt_queryf)(C(SQLiteStmt) * __this, constString format, ...);
void (* SQLiteStmt_reset)(C(SQLiteStmt) * __this);
C(SQLiteResult) (* SQLiteStmt_step)(C(SQLiteStmt) * __this);



C(Property) * PROPERTY(SQLiteDB, lockingMode);
void (* SQLiteDB_set_lockingMode)(C(SQLiteDB) s, constString value);

C(Property) * PROPERTY(SQLiteStmt, db);
void (* SQLiteStmt_set_db)(C(SQLiteStmt) * s, C(SQLiteDB) value);
C(SQLiteDB) (* SQLiteStmt_get_db)(C(SQLiteStmt) * s);

C(Property) * PROPERTY(SQLiteStmt, query);
void (* SQLiteStmt_set_query)(C(SQLiteStmt) * s, constString value);


// Properties




// Classes

// bitClass
C(Class) * CO(FieldTypeEx);
// enumClass
C(Class) * CO(FieldType);
C(Class) * CO(SQLiteResult);
// unitClass
// systemClass
// structClass
C(Class) * CO(FieldValue);
// noHeadClass
C(Class) * CO(SQLiteStmt);
// normalClass
C(Class) * CO(SQLiteDB);
C(Class) * CO(SQLiteStaticLink);



// Virtual Method IDs




// Global Functions

struct _ffi_type * (* fFIGetType)(C(Class) * type, C(bool) structByValue);


C(Module) EDASQLite_init(Module fromModule)
{
   C(Module) module = Module_load(fromModule, "EDASQLite", AccessMode_publicAccess);
   if(module)
   {
      // Set up all the CO(x) *, property, method, ...


      CO(FieldType) = eC_findClass(module, "FieldType");
      CO(FieldTypeEx) = eC_findClass(module, "FieldTypeEx");
      CO(FieldValue) = eC_findClass(module, "FieldValue");
      if(CO(FieldValue))
      {
         METHOD(FieldValue, compareInt) = Class_findMethod(CO(FieldValue), "compareInt", module);
         if(METHOD(FieldValue, compareInt))
            FieldValue_compareInt = (int (*)(C(FieldValue) *, C(FieldValue) *))METHOD(FieldValue, compareInt)->function;

         METHOD(FieldValue, compareReal) = Class_findMethod(CO(FieldValue), "compareReal", module);
         if(METHOD(FieldValue, compareReal))
            FieldValue_compareReal = (int (*)(C(FieldValue) *, C(FieldValue) *))METHOD(FieldValue, compareReal)->function;

         METHOD(FieldValue, compareText) = Class_findMethod(CO(FieldValue), "compareText", module);
         if(METHOD(FieldValue, compareText))
            FieldValue_compareText = (int (*)(C(FieldValue) *, C(FieldValue) *))METHOD(FieldValue, compareText)->function;

         METHOD(FieldValue, stringify) = Class_findMethod(CO(FieldValue), "stringify", module);
         if(METHOD(FieldValue, stringify))
            FieldValue_stringify = (C(String) (*)(C(FieldValue) *))METHOD(FieldValue, stringify)->function;
      }
      CO(SQLiteDB) = eC_findClass(module, "SQLiteDB");
      if(CO(SQLiteDB))
      {
         METHOD(SQLiteDB, begin) = Class_findMethod(CO(SQLiteDB), "begin", module);
         if(METHOD(SQLiteDB, begin))
            SQLiteDB_begin = (C(bool) (*)(C(SQLiteDB)))METHOD(SQLiteDB, begin)->function;

         METHOD(SQLiteDB, commit) = Class_findMethod(CO(SQLiteDB), "commit", module);
         if(METHOD(SQLiteDB, commit))
            SQLiteDB_commit = (C(bool) (*)(C(SQLiteDB)))METHOD(SQLiteDB, commit)->function;

         METHOD(SQLiteDB, exec) = Class_findMethod(CO(SQLiteDB), "exec", module);
         if(METHOD(SQLiteDB, exec))
            SQLiteDB_exec = (C(SQLiteResult) (*)(C(SQLiteDB), constString))METHOD(SQLiteDB, exec)->function;

         METHOD(SQLiteDB, execf) = Class_findMethod(CO(SQLiteDB), "execf", module);
         if(METHOD(SQLiteDB, execf))
            SQLiteDB_execf = (C(SQLiteResult) (*)(C(SQLiteDB), constString, ...))METHOD(SQLiteDB, execf)->function;

         METHOD(SQLiteDB, open) = Class_findMethod(CO(SQLiteDB), "open", module);
         if(METHOD(SQLiteDB, open))
            SQLiteDB_open = (C(SQLiteDB) (*)(subclass(SQLiteDB), constString, C(bool), C(bool)))METHOD(SQLiteDB, open)->function;

         METHOD(SQLiteDB, setupRegExp) = Class_findMethod(CO(SQLiteDB), "setupRegExp", module);
         if(METHOD(SQLiteDB, setupRegExp))
            SQLiteDB_setupRegExp = (void (*)(C(SQLiteDB)))METHOD(SQLiteDB, setupRegExp)->function;

         PROPERTY(SQLiteDB, lockingMode) = Class_findProperty(CO(SQLiteDB), "lockingMode", module);
         if(PROPERTY(SQLiteDB, lockingMode))
            SQLiteDB_set_lockingMode = (void *)PROPERTY(SQLiteDB, lockingMode)->Set;
      }
      CO(SQLiteResult) = eC_findClass(module, "SQLiteResult");
      CO(SQLiteStaticLink) = eC_findClass(module, "SQLiteStaticLink");
      CO(SQLiteStmt) = eC_findClass(module, "SQLiteStmt");
      if(CO(SQLiteStmt))
      {
         METHOD(SQLiteStmt, bind_double) = Class_findMethod(CO(SQLiteStmt), "bind_double", module);
         if(METHOD(SQLiteStmt, bind_double))
            SQLiteStmt_bind_double = (void (*)(C(SQLiteStmt) *, int, double))METHOD(SQLiteStmt, bind_double)->function;

         METHOD(SQLiteStmt, bind_int) = Class_findMethod(CO(SQLiteStmt), "bind_int", module);
         if(METHOD(SQLiteStmt, bind_int))
            SQLiteStmt_bind_int = (void (*)(C(SQLiteStmt) *, int, int))METHOD(SQLiteStmt, bind_int)->function;

         METHOD(SQLiteStmt, bind_int64) = Class_findMethod(CO(SQLiteStmt), "bind_int64", module);
         if(METHOD(SQLiteStmt, bind_int64))
            SQLiteStmt_bind_int64 = (void (*)(C(SQLiteStmt) *, int, int64))METHOD(SQLiteStmt, bind_int64)->function;

         METHOD(SQLiteStmt, bind_null) = Class_findMethod(CO(SQLiteStmt), "bind_null", module);
         if(METHOD(SQLiteStmt, bind_null))
            SQLiteStmt_bind_null = (void (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, bind_null)->function;

         METHOD(SQLiteStmt, bind_text) = Class_findMethod(CO(SQLiteStmt), "bind_text", module);
         if(METHOD(SQLiteStmt, bind_text))
            SQLiteStmt_bind_text = (void (*)(C(SQLiteStmt) *, int, constString))METHOD(SQLiteStmt, bind_text)->function;

         METHOD(SQLiteStmt, bind_value) = Class_findMethod(CO(SQLiteStmt), "bind_value", module);
         if(METHOD(SQLiteStmt, bind_value))
            SQLiteStmt_bind_value = (void (*)(C(SQLiteStmt) *, int, C(FieldValue) *))METHOD(SQLiteStmt, bind_value)->function;

         METHOD(SQLiteStmt, column_bytes) = Class_findMethod(CO(SQLiteStmt), "column_bytes", module);
         if(METHOD(SQLiteStmt, column_bytes))
            SQLiteStmt_column_bytes = (int (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, column_bytes)->function;

         METHOD(SQLiteStmt, column_double) = Class_findMethod(CO(SQLiteStmt), "column_double", module);
         if(METHOD(SQLiteStmt, column_double))
            SQLiteStmt_column_double = (double (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, column_double)->function;

         METHOD(SQLiteStmt, column_int) = Class_findMethod(CO(SQLiteStmt), "column_int", module);
         if(METHOD(SQLiteStmt, column_int))
            SQLiteStmt_column_int = (int (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, column_int)->function;

         METHOD(SQLiteStmt, column_int64) = Class_findMethod(CO(SQLiteStmt), "column_int64", module);
         if(METHOD(SQLiteStmt, column_int64))
            SQLiteStmt_column_int64 = (int64 (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, column_int64)->function;

         METHOD(SQLiteStmt, column_text) = Class_findMethod(CO(SQLiteStmt), "column_text", module);
         if(METHOD(SQLiteStmt, column_text))
            SQLiteStmt_column_text = (constString (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, column_text)->function;

         METHOD(SQLiteStmt, column_text_copy) = Class_findMethod(CO(SQLiteStmt), "column_text_copy", module);
         if(METHOD(SQLiteStmt, column_text_copy))
            SQLiteStmt_column_text_copy = (C(String) (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, column_text_copy)->function;

         METHOD(SQLiteStmt, column_type) = Class_findMethod(CO(SQLiteStmt), "column_type", module);
         if(METHOD(SQLiteStmt, column_type))
            SQLiteStmt_column_type = (C(FieldType) (*)(C(SQLiteStmt) *, int))METHOD(SQLiteStmt, column_type)->function;

         METHOD(SQLiteStmt, column_value) = Class_findMethod(CO(SQLiteStmt), "column_value", module);
         if(METHOD(SQLiteStmt, column_value))
            SQLiteStmt_column_value = (void (*)(C(SQLiteStmt) *, int, C(FieldValue) *))METHOD(SQLiteStmt, column_value)->function;

         METHOD(SQLiteStmt, finalize) = Class_findMethod(CO(SQLiteStmt), "finalize", module);
         if(METHOD(SQLiteStmt, finalize))
            SQLiteStmt_finalize = (void (*)(C(SQLiteStmt) *))METHOD(SQLiteStmt, finalize)->function;

         METHOD(SQLiteStmt, queryf) = Class_findMethod(CO(SQLiteStmt), "queryf", module);
         if(METHOD(SQLiteStmt, queryf))
            SQLiteStmt_queryf = (void (*)(C(SQLiteStmt) *, constString, ...))METHOD(SQLiteStmt, queryf)->function;

         METHOD(SQLiteStmt, reset) = Class_findMethod(CO(SQLiteStmt), "reset", module);
         if(METHOD(SQLiteStmt, reset))
            SQLiteStmt_reset = (void (*)(C(SQLiteStmt) *))METHOD(SQLiteStmt, reset)->function;

         METHOD(SQLiteStmt, step) = Class_findMethod(CO(SQLiteStmt), "step", module);
         if(METHOD(SQLiteStmt, step))
            SQLiteStmt_step = (C(SQLiteResult) (*)(C(SQLiteStmt) *))METHOD(SQLiteStmt, step)->function;

         PROPERTY(SQLiteStmt, db) = Class_findProperty(CO(SQLiteStmt), "db", module);
         if(PROPERTY(SQLiteStmt, db))
         {
            SQLiteStmt_set_db = (void *)PROPERTY(SQLiteStmt, db)->Set;
            SQLiteStmt_get_db = (void *)PROPERTY(SQLiteStmt, db)->Get;
         }

         PROPERTY(SQLiteStmt, query) = Class_findProperty(CO(SQLiteStmt), "query", module);
         if(PROPERTY(SQLiteStmt, query))
            SQLiteStmt_set_query = (void *)PROPERTY(SQLiteStmt, query)->Set;
      }



         // Set up all the function pointers, ...

      FUNCTION(fFIGetType) = eC_findFunction(module, "FFIGetType");
      if(FUNCTION(fFIGetType))
         fFIGetType = (void *)FUNCTION(fFIGetType)->function;

   }
   return fromModule ? IPTR(fromModule, Module)->application : null;
}


