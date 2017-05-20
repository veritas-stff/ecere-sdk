//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
////                                                                        //// ////////////////////////
////    Core eC Library                                                     //// ////////////////////////
////                                                                        //// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////


#if !defined(__EC_H__)
#define __EC_H__

#define CPP11 (defined(__cplusplus) && __cplusplus >= 201103L)

#ifdef __cplusplus

extern "C" {

#endif



////////////////////////////////////////////////////////////// includes //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

#include <stdint.h>
#include <stdio.h>
#include <string.h>


///////////////////////////////////////////////////////////// functions //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

#define getTranslatedString              __ecereNameSpace__ecere__GetTranslatedString
#define loadTranslatedStrings            __ecereNameSpace__ecere__LoadTranslatedStrings
#define unloadTranslatedStrings          __ecereNameSpace__ecere__UnloadTranslatedStrings
#define memoryGuard_popLoc               __ecereNameSpace__ecere__com__MemoryGuard_PopLoc
#define memoryGuard_pushLoc              __ecereNameSpace__ecere__com__MemoryGuard_PushLoc
#define eC_initApp                       __ecereNameSpace__ecere__com____ecere_COM_Initialize
#define Class_addBitMember               __ecereNameSpace__ecere__com__eClass_AddBitMember
#define Class_addClassProperty           __ecereNameSpace__ecere__com__eClass_AddClassProperty
#define Class_addDataMember              __ecereNameSpace__ecere__com__eClass_AddDataMember
#define Class_addMember                  __ecereNameSpace__ecere__com__eClass_AddMember
#define Class_addMethod                  __ecereNameSpace__ecere__com__eClass_AddMethod
#define Class_addProperty                __ecereNameSpace__ecere__com__eClass_AddProperty
#define Class_addTemplateParameter       __ecereNameSpace__ecere__com__eClass_AddTemplateParameter
#define Class_addVirtualMethod           __ecereNameSpace__ecere__com__eClass_AddVirtualMethod
#define Class_destructionWatchable       __ecereNameSpace__ecere__com__eClass_DestructionWatchable
#define Class_doneAddingTemplateParameters __ecereNameSpace__ecere__com__eClass_DoneAddingTemplateParameters
#define Class_findClassProperty          __ecereNameSpace__ecere__com__eClass_FindClassProperty
#define Class_findDataMember             __ecereNameSpace__ecere__com__eClass_FindDataMember
#define Class_findDataMemberAndId        __ecereNameSpace__ecere__com__eClass_FindDataMemberAndId
#define Class_findDataMemberAndOffset    __ecereNameSpace__ecere__com__eClass_FindDataMemberAndOffset
#define Class_findMethod                 __ecereNameSpace__ecere__com__eClass_FindMethod
#define Class_findNextMember             __ecereNameSpace__ecere__com__eClass_FindNextMember
#define Class_findProperty               __ecereNameSpace__ecere__com__eClass_FindProperty
#define Class_getDesigner                __ecereNameSpace__ecere__com__eClass_GetDesigner
#define Class_getProperty                __ecereNameSpace__ecere__com__eClass_GetProperty
#define Class_isDerived                  __ecereNameSpace__ecere__com__eClass_IsDerived
#define Class_resize                     __ecereNameSpace__ecere__com__eClass_Resize
#define Class_setProperty                __ecereNameSpace__ecere__com__eClass_SetProperty
#define Class_unregister                 __ecereNameSpace__ecere__com__eClass_Unregister
#define Enum_addFixedValue               __ecereNameSpace__ecere__com__eEnum_AddFixedValue
#define Enum_addValue                    __ecereNameSpace__ecere__com__eEnum_AddValue
#define Instance_decRef                  __ecereNameSpace__ecere__com__eInstance_DecRef
#define Instance_delete                  __ecereNameSpace__ecere__com__eInstance_Delete
#define Instance_evolve                  __ecereNameSpace__ecere__com__eInstance_Evolve
#define Instance_fireSelfWatchers        __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers
#define Instance_fireWatchers            __ecereNameSpace__ecere__com__eInstance_FireWatchers
#define Instance_getDesigner             __ecereNameSpace__ecere__com__eInstance_GetDesigner
#define Instance_incRef                  __ecereNameSpace__ecere__com__eInstance_IncRef
#define Instance_isDerived               __ecereNameSpace__ecere__com__eInstance_IsDerived
#define Instance_new                     __ecereNameSpace__ecere__com__eInstance_New
#define Instance_newEx                   __ecereNameSpace__ecere__com__eInstance_NewEx
#define Instance_setMethod               __ecereNameSpace__ecere__com__eInstance_SetMethod
#define Instance_stopWatching            __ecereNameSpace__ecere__com__eInstance_StopWatching
#define Instance_watch                   __ecereNameSpace__ecere__com__eInstance_Watch
#define Instance_watchDestruction        __ecereNameSpace__ecere__com__eInstance_WatchDestruction
#define Member_addDataMember             __ecereNameSpace__ecere__com__eMember_AddDataMember
#define Member_addMember                 __ecereNameSpace__ecere__com__eMember_AddMember
#define Member_new                       __ecereNameSpace__ecere__com__eMember_New
#define Module_load                      __ecereNameSpace__ecere__com__eModule_Load
#define Module_loadStatic                __ecereNameSpace__ecere__com__eModule_LoadStatic
#define Module_loadStrict                __ecereNameSpace__ecere__com__eModule_LoadStrict
#define Module_unload                    __ecereNameSpace__ecere__com__eModule_Unload
#define Property_selfWatch               __ecereNameSpace__ecere__com__eProperty_SelfWatch
#define Property_watchable               __ecereNameSpace__ecere__com__eProperty_Watchable
#define eC_delete                        __ecereNameSpace__ecere__com__eSystem_Delete
#define eC_findClass                     __ecereNameSpace__ecere__com__eSystem_FindClass
#define eC_findDefine                    __ecereNameSpace__ecere__com__eSystem_FindDefine
#define eC_findFunction                  __ecereNameSpace__ecere__com__eSystem_FindFunction
#define eC_new                           __ecereNameSpace__ecere__com__eSystem_New
#define eC_new0                          __ecereNameSpace__ecere__com__eSystem_New0
#define eC_registerClass                 __ecereNameSpace__ecere__com__eSystem_RegisterClass
#define eC_registerDefine                __ecereNameSpace__ecere__com__eSystem_RegisterDefine
#define eC_registerFunction              __ecereNameSpace__ecere__com__eSystem_RegisterFunction
#define eC_renew                         __ecereNameSpace__ecere__com__eSystem_Renew
#define eC_renew0                        __ecereNameSpace__ecere__com__eSystem_Renew0
#define eC_setArgs                       __ecereNameSpace__ecere__com__eSystem_SetArgs
#define eC_setPoolingDisabled            __ecereNameSpace__ecere__com__eSystem_SetPoolingDisabled


//////////////////////////////////////////////////////// binding macros //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

#ifndef ECPRFX
#define ECPRFX
#endif

#if defined(_WIN32)
#define __runtimePlatform 1
#elif defined(__APPLE__)
#define __runtimePlatform 3
#else
#define __runtimePlatform 2
#endif

// Macros to select proper other macro with proper number of arguments
#define NARG_(...)                           ARGN(__VA_ARGS__)
#define NARG(...)                            NARG_(__VA_ARGS__, 6, 5, 4, 3, 2)
#define ARGN(_1, _2, _3, _4, _5, _6, x, ...) x

// CONCATI(): Two level of indirection so that the preprocessor resolve macros rather than concatenating the macro name
// _CONCAT(): One level of indirection for use by the var args macros
#define _CONCAT(a, b)                  a ## b
#define CONCATI(a, b)                  _CONCAT(a, b)

// Apply the ECPRX to an eC class/type
#define C(x)                           CONCATI(ECPRFX, x)

// CONCATU(): Concatenate with underscores
#define _CONCATU_2(a, b)               a ## _ ## b
#define _CONCATU_3(a, b, c)            a ## _ ## b ## _ ## c
#define _CONCATU_4(a, b, c, d)         a ## _ ## b ## _ ## c ## _ ## d
#define _CONCATU_5(a, b, c, d, e)      a ## _ ## b ## _ ## c ## _ ## d ## _ ## e
#define _CONCATU_6(a, b, c, d, e, f)   a ## _ ## b ## _ ## c ## _ ## d ## _ ## e ## _ ## f
#define _CONCATUN(n, ...)              _CONCAT(_CONCATU_,n)(__VA_ARGS__)
#define CONCATU(...)                   _CONCATUN(NARG(__VA_ARGS__), __VA_ARGS__)

// T(): Used to typedef a templatized class to its template class, so as to clarify expectations (note: typedef is equivalent, cannot be type-checked)
//      e.g. typedef C(Array) T(Array, Color); void printColors(T(Array, Color) colors) { printLn(colors); };
#define T(n...)                        CONCATU(template, n)

// CO(): Used to access or define a first-class Class object
//       Classes already used in modules are predefined and can be directly accesses and instantiated
//          e.g. C(Window) win = newi(Window);
//       New classes can be defined and initialized with return value from registerClass();
//          e.g. Class * CO(Foo); CO(Foo) = registerClass(module, Foo, Map<String, int>);
//       Templatized classes can be defined and initialized with eC_findClass()
//          e.g. C(Class) * CO(Array, ColorAlpha); CO(Array, ColorAlpha) = eC_findClass(module, "Array<ColorAlpha>");
#define CO(n...)                       CONCATU(class, n)

/* CM(): Used to define/access the class member structure for regular eC classes at a specific level of inheritance
         e.g.
            struct CM(Foo) { int foo; };
            typedef Instance Foo;
            C(Class) * CO(Foo);
            bool Foo_constructor(Foo this)
            {
               struct CM(Foo) * self = IPTR(this, Foo);
               return true;
            }
            bool Foo_destructor(Foo this) { }
            ...
               CO(Foo) = registerClass(module, Foo, Instance);
            ...
*/
#define CM(c)                          CONCATU(class_members, c)

// S(c: class name, x...: for all the initializers):
//       Used to quickly pass structs by reference
#define S(c, x...) ({c __i = { x }; &__i;})

// TP(n: class name, p: template parameter name):
//       Used to specify member method types with a template parameter of a class
//       e.g.  void Container_add(C(Container) c, TP(Container, T) value);
#define TP(n, p)                       CONCATU(tparam, n, p)

// template argument macros type abbreviations:
//          c: char
//          uc: unsigned char (byte)
//          s: short,
//          us: unsigned short (uint16)
//          i: int
//          ui: uint
//          i64: int64
//          ui64: uint64
//          f: float
//          d: double
//          p: pointer
//          st: struct
//          o: object

// TA...(): Used to pass data values as template arguments
//          e.g. Container_add(ad, TAd(3.14159));
#define TAc(x)     ({ C(DataValue) p = { .c = x };    p.ui64; })
#define TAb(x)     ({ C(DataValue) p = { .uc = x };   p.ui64; })
#define TAs(x)     ({ C(DataValue) p = { .s = x };    p.ui64; })
#define TAus(x)    ({ C(DataValue) p = { .us = x };   p.ui64; })
#define TAi(x)     ({ C(DataValue) p = { .i = x };    p.ui64; })
#define TAui(x)    ({ C(DataValue) p = { .ui = x };   p.ui64; })
#define TAi64(x)   ({ C(DataValue) p = { .i64 = x };  p.ui64; })
#define TAui64(x)  (x)
#define TAf(x)     ({ C(DataValue) p = { .f = x };    p.ui64; })
#define TAd(x)     ({ C(DataValue) p = { .d = x };    p.ui64; })
#define TAp(x)     ({ C(DataValue) p = { .p = x };    p.ui64; })
#define TAst(x)    TAp(&(x))
#define TAo(x)     TAp(x)

// ...TA(): Used to retreieve data values from template arguments
//          e.g. void Foo_add(Foo this, TP(Foo, A) value) { double d = dTA(value); }

#define cTA(x)     ({ C(DataValue) p = { .ui64 = x }; p.c; })
#define bTA(x)     ({ C(DataValue) p = { .ui64 = x }; p.uc; })
#define sTA(x)     ({ C(DataValue) p = { .ui64 = x }; p.s; })
#define usTA(x)    ({ C(DataValue) p = { .ui64 = x }; p.us; })
#define iTA(x)     ({ C(DataValue) p = { .ui64 = x }; p.i; })
#define uiTA(x)    ({ C(DataValue) p = { .ui64 = x }; p.ui; })
#define i64TA(x)   ({ C(DataValue) p = { .ui64 = x }; p.i64; })
#define ui64TA(x)  (x)
#define fTA(x)     ({ C(DataValue) p = { .ui64 = x }; p.f; })
#define dTA(x)     ({ C(DataValue) p = { .ui64 = x }; p.d; })
#define pTA(t, x)  ({ C(DataValue) p = { .ui64 = x }; (t *)p.p; })
#define stTA(s, x) ({ C(DataValue) p = { .ui64 = x }; *(s *)p.p; })
#define oTA(c, x)  ((C(c)) pTA(struct CM(Instance), x))

// thisclass(): Used to specify an eC 'thisclass' type, which morphs into the derived class type when inherited
//              Note: Resolves to the same type so cannot be type checked
#define thisclass(x)                   C(x)
#define subclass(x)                    C(Class)

#define PROPERTY(c, p)   CONCATU(property, c, p)
#define METHOD(c, m)     CONCATU(method, c, m)
#define M_VTBLID(c, m)   CONCATU(c, m, vTblID)
#define FUNCTION(f)      CONCATU(function, f)

// _ARG: Used to specify comma for parameters/arguments list being passed to macros
#define _ARG ,

// VMETHOD(c: class object, mc: method class, m: method name, i: instance object, r: return type, p: parameters, a: arguments)
//    Used to define a virtual method invoker, e.g.:
//    #define Container_add(__i, value) VMETHOD(Container, add, __i, C(IteratorPointer), C(Container) _ARG TP(Container, T), __i _ARG value)
#define VMETHOD(c, mc, m, i, r, p, a)   ({ r (* method)(p) = (r (*)(p))((i) ? (i)->_vTbl : c->_vTbl)[M_VTBLID(mc, m)]; method ? method(a) : (r)0; })

// Macros for translated strings
#define $(x)      (constString)getTranslatedString(MODULE_NAME, x, null)
#define $$(x, c)  (constString)getTranslatedString(MODULE_NAME, x, c)

// More macros
#define _IPTR(x, c, s) ((struct s *)((x) ? (((char *)(x)) + c->offset) : 0))
#define IPTR(x, c) _IPTR(x, CO(c), CM(c))

#define incref(x) (x)->_refCount++;

#define newb(c) eC_new(c)
#define newi(c...) ({ C(Instance) i = Instance_new(CO(c)); incref(i); i; })
#define newcs(c...) ((c *)Instance_new(CO(c)))
#define newc(t, c) (t *)eC_new(CO(t)->structSize * c)
#define newt(t, c) (t *)eC_new(sizeof(t) * c)

#define deletei(v) Instance_decRef(v), v = null
#ifndef __cplusplus
   #define delete(v) eC_delete(v), v = null
#endif

#define BIC(c, d) \
   ({ struct BuiltInContainer src = { \
      CO(BuiltInContainer)->_vTbl, CO(BuiltInContainer), 0, \
      d, sizeof(d) / sizeof((d)[0]), CO(c) }; \
   (Container)&src; })

#ifndef __cplusplus
   #define registerClass(a, n, b...)  \
      eC_registerClass(ClassType_normalClass, #n, #b, sizeof(struct CM(n)), 0, \
         (void *)n ## _constructor, (void *)n ## _destructor, a, AccessMode_publicAccess, AccessMode_publicAccess)
#endif

#define addMethod(c, n, m) \
   Class_addMethod(c, n, null, (void *)m, AccessMode_publicAccess)

#if defined(__WIN32__) && !defined(__CONSOLE_APP__)
   typedef void * HINSTANCE;
   #define WINAPI __stdcall
   #define MAIN_DECLARATION int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, char * cmdLine, int show)
   #define eC_init_CALL(linkEcere) eC_init(null, linkEcere, true, 0, null)
#else
   #define MAIN_DECLARATION int main(int argc, char * argv[])
   #ifdef __cplusplus
      #if defined(__CONSOLE_APP__)
         #define eC_init_CALL(linkEcere) eC_init(null, linkEcere, false, null, null)
      #else
         #define eC_init_CALL(linkEcere) eC_init(null, linkEcere, true, null, null)
      #endif
   #else
      #if defined(__CONSOLE_APP__)
         #define eC_init_CALL(linkEcere) eC_init(null, linkEcere, false, argc, argv)
      #else
         #define eC_init_CALL(linkEcere) eC_init(null, linkEcere, true, argc, argv)
      #endif
   #endif
#endif

#define APP_INTRO(linkEcere) \
   MAIN_DECLARATION \
   { \
      C(Application) app = eC_init_CALL(linkEcere);

#define APP_OUTRO \
      int exitCode = IPTR(app, Application)->exitCode; \
      deletei(app); \
      return exitCode; \
   }

#if defined(__WIN32__)
   #define MODULE_EXPORT extern __attribute__((dllexport))
#else
   #define MODULE_EXPORT extern __attribute__ ((visibility("default")))
#endif

#define MODULE_LOAD     MODULE_EXPORT uint __ecereDll_Load(C(Module) module)

#define MODULE_UNLOAD   MODULE_EXPORT uint __ecereDll_Unload(C(Module) module)


///////////////////////////////////////////////////////////// HARDCODED //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

// special types
typedef const void * any_object;
typedef const char * constString;

// libecere stuff that bleeds into ecereCOM
#if CPP11
enum C(Alignment) : int
#else
typedef int C(Alignment);
enum C(Alignment)
#endif
{
   Alignment_left = 0x0,
   Alignment_right = 0x1,
   Alignment_center = 0x2
};
typedef uint32_t C(DataDisplayFlags);

// libec stuff
typedef void C(Type);
typedef void C(Instantiation);
typedef void C(ClassDefinition);


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gui  ////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef struct CM(Instance) * C(Instance);
// end -- moved backwards outputs
typedef C(Instance) C(Window);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////    //////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef struct C(Property) C(Property);
typedef struct C(Method) C(Method);
typedef C(Instance) C(IOChannel);
typedef uint32_t uint;
typedef uint C(bool);
#if !defined(__bool_true_false_are_defined) && !defined(__cplusplus)
enum boolean {
   true = 0x1,
   false = 0x0
};
#endif
#define eC_true   ((C(bool))1)
#define eC_false  ((C(bool))0)

// end -- moved backwards outputs
#define fstrcmp ((__runtimePlatform == win32) ? strcmpi : strcmp)

#define strcmpi (strcasecmp)

#define strnicmp (strncasecmp)

typedef char * C(String);
typedef uint8_t byte;
typedef int64_t int64;
typedef intptr_t intptr;
typedef ssize_t intsize;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef uintptr_t uintptr;
typedef size_t uintsize;
typedef uint32_t unichar;

extern int M_VTBLID(class, onCompare);
#define _onCompare(__c, __i, object) \
   VMETHOD(__c, class, onCompare, (C(Instance))null, int, \
      C(Class) * _ARG void * _ARG any_object, \
      __c _ARG __i _ARG object)
extern C(Method) * METHOD(class, onCompare);
extern int M_VTBLID(class, onCopy);
#define _onCopy(__c, __i, newData) \
   VMETHOD(__c, class, onCopy, (C(Instance))null, void, \
      C(Class) * _ARG void * _ARG any_object, \
      __c _ARG __i _ARG newData)
extern C(Method) * METHOD(class, onCopy);
extern int M_VTBLID(class, onDisplay);
#define _onDisplay(__c, __i, surface, x, y, width, fieldData, alignment, displayFlags) \
   VMETHOD(__c, class, onDisplay, (C(Instance))null, void, \
      C(Class) * _ARG void * _ARG C(Surface) _ARG int _ARG int _ARG int _ARG void * _ARG C(Alignment) _ARG C(DataDisplayFlags), \
      __c _ARG __i _ARG surface _ARG x _ARG y _ARG width _ARG fieldData _ARG alignment _ARG displayFlags)
extern C(Method) * METHOD(class, onDisplay);
extern int M_VTBLID(class, onEdit);
#define _onEdit(__c, __i, dataBox, obsolete, x, y, w, h, userData) \
   VMETHOD(__c, class, onEdit, (C(Instance))null, C(Window), \
      C(Class) * _ARG void * _ARG C(DataBox) _ARG C(DataBox) _ARG int _ARG int _ARG int _ARG int _ARG void *, \
      __c _ARG __i _ARG dataBox _ARG obsolete _ARG x _ARG y _ARG w _ARG h _ARG userData)
extern C(Method) * METHOD(class, onEdit);
extern int M_VTBLID(class, onFree);
#define _onFree(__c, __i) \
   VMETHOD(__c, class, onFree, (C(Instance))null, void, \
      C(Class) * _ARG void *, \
      __c _ARG __i)
extern C(Method) * METHOD(class, onFree);
extern int M_VTBLID(class, onGetDataFromString);
#define _onGetDataFromString(__c, __i, string) \
   VMETHOD(__c, class, onGetDataFromString, (C(Instance))null, C(bool), \
      C(Class) * _ARG void * _ARG const char *, \
      __c _ARG __i _ARG string)
extern C(Method) * METHOD(class, onGetDataFromString);
extern int M_VTBLID(class, onGetString);
#define _onGetString(__c, __i, tempString, fieldData, needClass) \
   VMETHOD(__c, class, onGetString, (C(Instance))null, const char *, \
      C(Class) * _ARG void * _ARG char * _ARG void * _ARG C(bool) *, \
      __c _ARG __i _ARG tempString _ARG fieldData _ARG needClass)
extern C(Method) * METHOD(class, onGetString);
extern int M_VTBLID(class, onSaveEdit);
#define _onSaveEdit(__c, __i, window, object) \
   VMETHOD(__c, class, onSaveEdit, (C(Instance))null, C(bool), \
      C(Class) * _ARG void * _ARG C(Window) _ARG void *, \
      __c _ARG __i _ARG window _ARG object)
extern C(Method) * METHOD(class, onSaveEdit);
extern int M_VTBLID(class, onSerialize);
#define _onSerialize(__c, __i, channel) \
   VMETHOD(__c, class, onSerialize, (C(Instance))null, void, \
      C(Class) * _ARG void * _ARG C(IOChannel), \
      __c _ARG __i _ARG channel)
extern C(Method) * METHOD(class, onSerialize);
extern int M_VTBLID(class, onUnserialize);
#define _onUnserialize(__c, __i, channel) \
   VMETHOD(__c, class, onUnserialize, (C(Instance))null, void, \
      C(Class) * _ARG void * _ARG C(IOChannel), \
      __c _ARG __i _ARG channel)
extern C(Method) * METHOD(class, onUnserialize);
extern int M_VTBLID(class, onCompare);
#define Instance_onCompare(__c, __i, object) \
   VMETHOD(__c, class, onCompare, __i, int, \
      C(Class) * _ARG void * _ARG any_object, \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG object)
extern C(Method) * METHOD(class, onCompare);
extern int M_VTBLID(class, onCopy);
#define Instance_onCopy(__c, __i, newData) \
   VMETHOD(__c, class, onCopy, __i, void, \
      C(Class) * _ARG void * _ARG any_object, \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG newData)
extern C(Method) * METHOD(class, onCopy);
extern int M_VTBLID(class, onDisplay);
#define Instance_onDisplay(__c, __i, surface, x, y, width, fieldData, alignment, displayFlags) \
   VMETHOD(__c, class, onDisplay, __i, void, \
      C(Class) * _ARG void * _ARG C(Surface) _ARG int _ARG int _ARG int _ARG void * _ARG C(Alignment) _ARG C(DataDisplayFlags), \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG surface _ARG x _ARG y _ARG width _ARG fieldData _ARG alignment _ARG displayFlags)
extern C(Method) * METHOD(class, onDisplay);
extern int M_VTBLID(class, onEdit);
#define Instance_onEdit(__c, __i, dataBox, obsolete, x, y, w, h, userData) \
   VMETHOD(__c, class, onEdit, __i, C(Window), \
      C(Class) * _ARG void * _ARG C(DataBox) _ARG C(DataBox) _ARG int _ARG int _ARG int _ARG int _ARG void *, \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG dataBox _ARG obsolete _ARG x _ARG y _ARG w _ARG h _ARG userData)
extern C(Method) * METHOD(class, onEdit);
extern int M_VTBLID(class, onFree);
#define Instance_onFree(__c, __i) \
   VMETHOD(__c, class, onFree, __i, void, \
      C(Class) * _ARG void *, \
      (__i) ? (__i)->_class : (__c) _ARG __i)
extern C(Method) * METHOD(class, onFree);
extern int M_VTBLID(class, onGetDataFromString);
#define Instance_onGetDataFromString(__c, __i, string) \
   VMETHOD(__c, class, onGetDataFromString, __i, C(bool), \
      C(Class) * _ARG void * _ARG const char *, \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG string)
extern C(Method) * METHOD(class, onGetDataFromString);
extern int M_VTBLID(class, onGetString);
#define Instance_onGetString(__c, __i, tempString, fieldData, needClass) \
   VMETHOD(__c, class, onGetString, __i, const char *, \
      C(Class) * _ARG void * _ARG char * _ARG void * _ARG C(bool) *, \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG tempString _ARG fieldData _ARG needClass)
extern C(Method) * METHOD(class, onGetString);
extern int M_VTBLID(class, onSaveEdit);
#define Instance_onSaveEdit(__c, __i, window, object) \
   VMETHOD(__c, class, onSaveEdit, __i, C(bool), \
      C(Class) * _ARG void * _ARG C(Window) _ARG void *, \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG window _ARG object)
extern C(Method) * METHOD(class, onSaveEdit);
extern int M_VTBLID(class, onSerialize);
#define Instance_onSerialize(__c, __i, channel) \
   VMETHOD(__c, class, onSerialize, __i, void, \
      C(Class) * _ARG void * _ARG C(IOChannel), \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG channel)
extern C(Method) * METHOD(class, onSerialize);
extern int M_VTBLID(class, onUnserialize);
#define Instance_onUnserialize(__c, __i, channel) \
   VMETHOD(__c, class, onUnserialize, __i, void, \
      C(Class) * _ARG void * _ARG C(IOChannel), \
      (__i) ? (__i)->_class : (__c) _ARG __i _ARG channel)
extern C(Method) * METHOD(class, onUnserialize);
extern double (* double_inf)(void);

extern double (* double_nan)(void);

extern C(Property) * PROPERTY(double, isNan);
extern C(bool) (* double_get_isNan)(double d);

extern C(Property) * PROPERTY(double, isInf);
extern C(bool) (* double_get_isInf)(double d);

extern C(Property) * PROPERTY(double, signBit);
extern int (* double_get_signBit)(double d);

extern float (* float_inf)(void);

extern float (* float_nan)(void);

extern C(Property) * PROPERTY(float, isNan);
extern C(bool) (* float_get_isNan)(float f);

extern C(Property) * PROPERTY(float, isInf);
extern C(bool) (* float_get_isInf)(float f);

extern C(Property) * PROPERTY(float, signBit);
extern int (* float_get_signBit)(float f);


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere  /////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////



// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||sys  ////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef C(Instance) C(ZString);
#if CPP11
enum C(TreePrintStyle) : int
#else
typedef int C(TreePrintStyle);
enum C(TreePrintStyle)
#endif
{
   TreePrintStyle_inOrder = 0x0,
   TreePrintStyle_postOrder = 0x1,
   TreePrintStyle_preOrder = 0x2,
   TreePrintStyle_depthOrder = 0x3
};

typedef struct C(StringBTNode) C(StringBTNode);
struct C(StringBTNode)
{
   C(String) key;
   C(StringBTNode) * parent;
   C(StringBTNode) * left;
   C(StringBTNode) * right;
   int depth;
};
#if CPP11
enum C(StringAllocType) : int
#else
typedef int C(StringAllocType);
enum C(StringAllocType)
#endif
{
   StringAllocType_pointer = 0x0,
   StringAllocType_stack = 0x1,
   StringAllocType_heap = 0x2
};

typedef struct C(OldList) C(OldList);
typedef struct C(OldLink) C(OldLink);
struct C(OldLink)
{
   C(OldLink) * prev;
   C(OldLink) * next;
   void * data;
};
typedef struct C(NamedLink64) C(NamedLink64);
struct C(NamedLink64)
{
   C(NamedLink64) * prev;
   C(NamedLink64) * next;
   char * name;
   int64 data;
};
typedef struct C(NamedLink) C(NamedLink);
struct C(NamedLink)
{
   C(NamedLink) * prev;
   C(NamedLink) * next;
   char * name;
   void * data;
};
typedef struct C(NamedItem) C(NamedItem);
struct C(NamedItem)
{
   C(NamedItem) * prev;
   C(NamedItem) * next;
   char * name;
};
typedef struct C(Mutex) C(Mutex);
typedef struct C(Item) C(Item);
struct C(Item)
{
   C(Item) * prev;
   C(Item) * next;
};
typedef struct C(BinaryTree) C(BinaryTree);
typedef struct C(BTNode) C(BTNode);
struct C(BTNode)
{
   uintptr key;
   C(BTNode) * parent;
   C(BTNode) * left;
   C(BTNode) * right;
   int depth;
};
// end -- moved backwards outputs
#define DIR_SEP ((__runtimePlatform == win32) ? '\\' : '/')

#define DIR_SEPS ((__runtimePlatform == win32) ? "\\" : "/")

#define MAX_DIRECTORY (534)

#define MAX_EXTENSION (17)

#define MAX_FILENAME (274)

#define MAX_F_STRING (1025)

#define MAX_LOCATION (797)

#if CPP11
enum C(BackSlashEscaping) : uint
#else
typedef C(bool) C(BackSlashEscaping);
enum C(BackSlashEscaping)
#endif
{
   BackSlashEscaping_forArgsPassing = 0x2
};

typedef struct C(BinaryTree) C(StringBinaryTree);
extern C(BTNode) * (* BTNode_findPrefix)(C(BTNode) * __this, const char * key);

extern C(BTNode) * (* BTNode_findString)(C(BTNode) * __this, const char * key);

extern C(Property) * PROPERTY(BTNode, prev);
extern C(BTNode) * (* BTNode_get_prev)(C(BTNode) * b);

extern C(Property) * PROPERTY(BTNode, next);
extern C(BTNode) * (* BTNode_get_next)(C(BTNode) * b);

extern C(Property) * PROPERTY(BTNode, minimum);
extern C(BTNode) * (* BTNode_get_minimum)(C(BTNode) * b);

extern C(Property) * PROPERTY(BTNode, maximum);
extern C(BTNode) * (* BTNode_get_maximum)(C(BTNode) * b);

extern C(Property) * PROPERTY(BTNode, count);
extern int (* BTNode_get_count)(C(BTNode) * b);

extern C(Property) * PROPERTY(BTNode, depthProp);
extern int (* BTNode_get_depthProp)(C(BTNode) * b);

struct C(BinaryTree)
{
   C(BTNode) * root;
   int count;
   int (* CompareKey)(C(BinaryTree) tree, uintptr a, uintptr b);
   void (* FreeKey)(void * key);
};
extern C(bool) (* BinaryTree_add)(C(BinaryTree) * __this, C(BTNode) * node);

extern C(bool) (* BinaryTree_check)(C(BinaryTree) * __this);

extern int (* BinaryTree_compareInt)(C(BinaryTree) * __this, uintptr a, uintptr b);

extern int (* BinaryTree_compareString)(C(BinaryTree) * __this, const char * a, const char * b);

extern void (* BinaryTree_delete)(C(BinaryTree) * __this, C(BTNode) * node);

extern C(BTNode) * (* BinaryTree_find)(C(BinaryTree) * __this, uintptr key);

extern C(BTNode) * (* BinaryTree_findAll)(C(BinaryTree) * __this, uintptr key);

extern C(BTNode) * (* BinaryTree_findPrefix)(C(BinaryTree) * __this, const char * key);

extern C(BTNode) * (* BinaryTree_findString)(C(BinaryTree) * __this, const char * key);

extern void (* BinaryTree_free)(C(BinaryTree) * __this);

extern void (* BinaryTree_freeString)(char * string);

extern char * (* BinaryTree_print)(C(BinaryTree) * __this, char * output, C(TreePrintStyle) tps);

extern void (* BinaryTree_remove)(C(BinaryTree) * __this, C(BTNode) * node);

extern C(Property) * PROPERTY(BinaryTree, first);
extern C(BTNode) * (* BinaryTree_get_first)(C(BinaryTree) b);

extern C(Property) * PROPERTY(BinaryTree, last);
extern C(BTNode) * (* BinaryTree_get_last)(C(BinaryTree) b);

extern void (* Item_copy)(C(Item) * __this, C(Item) * src, int size);

extern void (* Mutex_release)(C(Mutex) * __this);

extern void (* Mutex_wait)(C(Mutex) * __this);

extern C(Property) * PROPERTY(Mutex, lockCount);
extern int (* Mutex_get_lockCount)(C(Mutex) * m);

extern C(Property) * PROPERTY(Mutex, owningThread);
extern int64 (* Mutex_get_owningThread)(C(Mutex) * m);

extern void (* OldLink_free)(C(OldLink) * __this);

struct C(OldList)
{
   void * first;
   void * last;
   int count;
   uint offset;
   C(bool) circ;
};
extern void (* OldList_add)(C(OldList) * __this, void * item);

extern C(bool) (* OldList_addName)(C(OldList) * __this, void * item);

extern void (* OldList_clear)(C(OldList) * __this);

extern void (* OldList_copy)(C(OldList) * __this, C(OldList) * src, int size, void (* copy)(void * dest, void * src));

extern void (* OldList_delete)(C(OldList) * __this, void * item);

extern C(OldLink) * (* OldList_findLink)(C(OldList) * __this, void * data);

extern void * (* OldList_findName)(C(OldList) * __this, const char * name, C(bool) warn);

extern void * (* OldList_findNamedLink)(C(OldList) * __this, const char * name, C(bool) warn);

extern void (* OldList_free)(C(OldList) * __this, void (* freeFn)(void *));

extern C(bool) (* OldList_insert)(C(OldList) * __this, void * prevItem, void * item);

extern void (* OldList_move)(C(OldList) * __this, void * item, void * prevItem);

extern C(bool) (* OldList_placeName)(C(OldList) * __this, const char * name, void ** place);

extern void (* OldList_remove)(C(OldList) * __this, void * item);

extern void (* OldList_removeAll)(C(OldList) * __this, void (* freeFn)(void *));

extern void (* OldList_sort)(C(OldList) * __this, int (* compare)(void *, void *, void *), void * data);

extern void (* OldList_swap)(C(OldList) * __this, void * item1, void * item2);

struct CM(ZString)
{
   char * _string;
   int len;
   C(StringAllocType) allocType;
   int size;
   int minSize;
   int maxSize;
};
extern void (* ZString_concat)(C(ZString) __this, C(ZString) s);

extern void (* ZString_concatf)(C(ZString) __this, const char * format, ...);

extern void (* ZString_copy)(C(ZString) __this, C(ZString) s);

extern void (* ZString_copyString)(C(ZString) __this, char * value, int newLen);

extern C(Property) * PROPERTY(ZString, char_ptr);
extern C(ZString) (* ZString_from_char_ptr)(char * c);
extern const char * (* ZString_to_char_ptr)(C(ZString) z);

extern C(Property) * PROPERTY(ZString, string);
extern void (* ZString_set_string)(C(ZString) z, char * value);
extern char * (* ZString_get_string)(C(ZString) z);

extern void (* changeCh)(char * string, char ch1, char ch2);
extern void (* changeChars)(char * string, const char * chars, char alt);
extern char * (* changeExtension)(const char * string, const char * ext, char * output);
extern char * (* copyString)(const char * string);
extern double (* floatFromString)(const char * string);
extern int64 (* getCurrentThreadID)(void);
extern char * (* getExtension)(const char * string, char * output);
extern uint (* getHexValue)(char ** buffer);
extern char * (* getLastDirectory)(const char * string, char * output);
extern C(bool) (* getString)(char ** buffer, char * string, int max);
extern int (* getValue)(char ** buffer);
extern int (* iSO8859_1toUTF8)(const char * source, char * dest, int max);
extern C(bool) (* isPathInsideOf)(const char * path, const char * of);
extern char * (* makePathRelative)(const char * path, const char * to, char * destination);
extern char * (* pathCat)(char * string, const char * addedPath);
extern char * (* pathCatSlash)(char * string, const char * addedPath);
extern void (* printBigSize)(char * string, double size, int prec);
extern void (* printSize)(char * string, uint size, int prec);
extern char * (* rSearchString)(const char * buffer, const char * subStr, int maxLen, C(bool) matchCase, C(bool) matchWord);
extern void (* repeatCh)(char * string, int count, char ch);
extern char * (* searchString)(const char * buffer, int start, const char * subStr, C(bool) matchCase, C(bool) matchWord);
extern C(bool) (* splitArchivePath)(const char * fileName, char * archiveName, const char ** archiveFile);
extern char * (* splitDirectory)(const char * string, char * part, char * rest);
extern C(bool) (* stripExtension)(char * string);
extern char * (* stripLastDirectory)(const char * string, char * output);
extern char * (* stripQuotes)(const char * string, char * output);
extern int (* tokenize)(char * string, int maxTokens, char * tokens[], C(BackSlashEscaping) esc);
extern int (* tokenizeWith)(char * string, int maxTokens, char * tokens[], const char * tokenizers, C(bool) escapeBackSlashes);
extern char * (* trimLSpaces)(const char * string, char * output);
extern char * (* trimRSpaces)(const char * string, char * output);
extern char * (* uTF16toUTF8)(const uint16 * source);
extern int (* uTF16toUTF8Buffer)(const uint16 * source, char * dest, int max);
extern int (* uTF32toUTF8Len)(unichar * source, int count, char * dest, int max);
extern unichar (* uTF8GetChar)(const char * string, int * numBytes);
extern C(bool) (* uTF8Validate)(const char * source);
extern uint16 * (* uTF8toUTF16)(const char * source, int * wordCount);
extern int (* uTF8toUTF16Buffer)(const char * source, uint16 * dest, int max);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||com  ////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
#if CPP11
enum C(TemplateParameterType) : int
#else
typedef int C(TemplateParameterType);
enum C(TemplateParameterType)
#endif
{
   TemplateParameterType_type = 0x0,
   TemplateParameterType_identifier = 0x1,
   TemplateParameterType_expression = 0x2
};

#if CPP11
enum C(TemplateMemberType) : int
#else
typedef int C(TemplateMemberType);
enum C(TemplateMemberType)
#endif
{
   TemplateMemberType_dataMember = 0x0,
   TemplateMemberType_method = 0x1,
   TemplateMemberType_prop = 0x2
};

typedef struct C(SubModule) C(SubModule);
typedef struct C(NameSpace) C(NameSpace);
struct C(NameSpace)
{
   const char * name;
   C(NameSpace) * btParent;
   C(NameSpace) * left;
   C(NameSpace) * right;
   int depth;
   C(NameSpace) * parent;
   C(BinaryTree) nameSpaces;
   C(BinaryTree) classes;
   C(BinaryTree) defines;
   C(BinaryTree) functions;
};
typedef C(Instance) C(Module);
#if CPP11
enum C(ImportType) : int
#else
typedef int C(ImportType);
enum C(ImportType)
#endif
{
   ImportType_normalImport = 0x0,
   ImportType_staticImport = 0x1,
   ImportType_remoteImport = 0x2,
   ImportType_preDeclImport = 0x3,
   ImportType_comCheckImport = 0x4
};

struct CM(Application)
{
   int argc;
   const char ** argv;
   int exitCode;
   C(bool) isGUIApp;
   C(OldList) allModules;
   char * parsedCommand;
   C(NameSpace) systemNameSpace;
};
typedef C(Module) C(Application);
struct CM(Module)
{
   C(Application) application;
   C(OldList) classes;
   C(OldList) defines;
   C(OldList) functions;
   C(OldList) modules;
   C(Module) prev;
   C(Module) next;
   const char * name;
   void * library;
   void * Unload;
   C(ImportType) importType;
   C(ImportType) origImportType;
   C(NameSpace) privateNameSpace;
   C(NameSpace) publicNameSpace;
};
#if CPP11
enum C(AccessMode) : int
#else
typedef int C(AccessMode);
enum C(AccessMode)
#endif
{
   AccessMode_defaultAccess = 0x0,
   AccessMode_publicAccess = 0x1,
   AccessMode_privateAccess = 0x2,
   AccessMode_staticAccess = 0x3,
   AccessMode_baseSystemAccess = 0x4
};

struct C(SubModule)
{
   C(SubModule) * prev;
   C(SubModule) * next;
   C(Module) module;
   C(AccessMode) importMode;
};
typedef C(IOChannel) C(SerialBuffer);
#if CPP11
enum C(ClassType) : int
#else
typedef int C(ClassType);
enum C(ClassType)
#endif
{
   ClassType_normalClass = 0x0,
   ClassType_structClass = 0x1,
   ClassType_bitClass = 0x2,
   ClassType_unitClass = 0x3,
   ClassType_enumClass = 0x4,
   ClassType_noHeadClass = 0x5,
   ClassType_unionClass = 0x6,
   ClassType_systemClass = 0x3E8
};

typedef struct C(ClassTemplateArgument) C(ClassTemplateArgument);
typedef struct C(Class) C(Class);
struct C(Class)
{
   C(Class) * prev;
   C(Class) * next;
   const char * name;
   int offset;
   int structSize;
   void ** _vTbl;
   int vTblSize;
   C(bool) (* Constructor)(void *);
   void (* Destructor)(void *);
   int offsetClass;
   int sizeClass;
   C(Class) * base;
   C(BinaryTree) methods;
   C(BinaryTree) members;
   C(BinaryTree) prop;
   C(OldList) membersAndProperties;
   C(BinaryTree) classProperties;
   C(OldList) derivatives;
   int memberID;
   int startMemberID;
   C(ClassType) type;
   C(Module) module;
   C(NameSpace) * nameSpace;
   const char * dataTypeString;
   C(Type) * dataType;
   int typeSize;
   int defaultAlignment;
   void (* Initialize)();
   int memberOffset;
   C(OldList) selfWatchers;
   const char * designerClass;
   C(bool) noExpansion;
   const char * defaultProperty;
   C(bool) comRedefinition;
   int count;
   int isRemote;
   C(bool) internalDecl;
   void * data;
   C(bool) computeSize;
   short structAlignment;
   short pointerAlignment;
   int destructionWatchOffset;
   C(bool) fixed;
   C(OldList) delayedCPValues;
   C(AccessMode) inheritanceAccess;
   const char * fullName;
   void * symbol;
   C(OldList) conversions;
   C(OldList) templateParams;
   C(ClassTemplateArgument) * templateArgs;
   C(Class) * templateClass;
   C(OldList) templatized;
   int numParams;
   C(bool) isInstanceClass;
   C(bool) byValueSystemClass;
   void * bindingsClass;
};
struct C(Property)
{
   C(Property) * prev;
   C(Property) * next;
   const char * name;
   C(bool) isProperty;
   C(AccessMode) memberAccess;
   int id;
   C(Class) * _class;
   const char * dataTypeString;
   C(Class) * dataTypeClass;
   C(Type) * dataType;
   void (* Set)(void *, int);
   int (* Get)(void *);
   C(bool) (* IsSet)(void *);
   void * data;
   void * symbol;
   int vid;
   C(bool) conversion;
   uint watcherOffset;
   const char * category;
   C(bool) compiled;
   C(bool) selfWatchable;
   C(bool) isWatchable;
};
typedef struct C(ObjectInfo) C(ObjectInfo);
struct CM(Instance)
{
   void ** _vTbl;
   C(Class) * _class;
   int _refCount;
};
struct C(ObjectInfo)
{
   C(ObjectInfo) * prev;
   C(ObjectInfo) * next;
   C(Instance) instance;
   char * name;
   C(Instantiation) * instCode;
   C(bool) deleted;
   C(ObjectInfo) * oClass;
   C(OldList) instances;
   C(ClassDefinition) * classDefinition;
   C(bool) modified;
   void * i18nStrings;
};
#if CPP11
enum C(MethodType) : int
#else
typedef int C(MethodType);
enum C(MethodType)
#endif
{
   MethodType_normalMethod = 0x0,
   MethodType_virtualMethod = 0x1
};

struct C(Method)
{
   const char * name;
   C(Method) * parent;
   C(Method) * left;
   C(Method) * right;
   int depth;
   int (* function)();
   int vid;
   C(MethodType) type;
   C(Class) * _class;
   void * symbol;
   const char * dataTypeString;
   C(Type) * dataType;
   C(AccessMode) memberAccess;
};
typedef C(Instance) C(Container);
typedef C(Container) C(CustomAVLTree);
typedef C(CustomAVLTree) C(Map);
typedef C(Container) C(LinkList);
typedef struct C(IteratorPointer) C(IteratorPointer);
typedef struct C(Iterator) C(Iterator);
typedef struct C(GlobalFunction) C(GlobalFunction);
struct C(GlobalFunction)
{
   C(GlobalFunction) * prev;
   C(GlobalFunction) * next;
   const char * name;
   int (* function)();
   C(Module) module;
   C(NameSpace) * nameSpace;
   const char * dataTypeString;
   C(Type) * dataType;
   void * symbol;
};
typedef C(Window) C(DesignerBase);
typedef struct C(DefinedExpression) C(DefinedExpression);
struct C(DefinedExpression)
{
   C(DefinedExpression) * prev;
   C(DefinedExpression) * next;
   const char * name;
   const char * value;
   C(NameSpace) * nameSpace;
};
struct C(DataValue)
{
   union
   {
      char c;
      byte uc;
      short s;
      uint16 us;
      int i;
      uint ui;
      void * p;
      float f;
      double d;
      int64 i64;
      uint64 ui64;
   };
};
typedef struct C(DataValue) C(DataValue);
#if CPP11
enum C(DataMemberType) : int
#else
typedef int C(DataMemberType);
enum C(DataMemberType)
#endif
{
   DataMemberType_normalMember = 0x0,
   DataMemberType_unionMember = 0x1,
   DataMemberType_structMember = 0x2
};

typedef struct C(DataMember) C(DataMember);
struct C(DataMember)
{
   C(DataMember) * prev;
   C(DataMember) * next;
   const char * name;
   C(bool) isProperty;
   C(AccessMode) memberAccess;
   int id;
   C(Class) * _class;
   const char * dataTypeString;
   C(Class) * dataTypeClass;
   C(Type) * dataType;
   C(DataMemberType) type;
   int offset;
   int memberID;
   C(OldList) members;
   C(BinaryTree) membersAlpha;
   int memberOffset;
   short structAlignment;
   short pointerAlignment;
};
typedef struct C(ClassTemplateParameter) C(ClassTemplateParameter);
struct C(ClassTemplateArgument)
{
   union
   {
      struct
      {
         const char * dataTypeString;
         C(Class) * dataTypeClass;
      };
      C(DataValue) expression;
      struct
      {
         const char * memberString;
         union
         {
            C(DataMember) * member;
            C(Property) * prop;
            C(Method) * method;
         };
      };
   };
};
struct C(ClassTemplateParameter)
{
   C(ClassTemplateParameter) * prev;
   C(ClassTemplateParameter) * next;
   const char * name;
   C(TemplateParameterType) type;
   union
   {
      const char * dataTypeString;
      C(TemplateMemberType) memberType;
   };
   C(ClassTemplateArgument) defaultArg;
   void * param;
};
typedef struct C(ClassProperty) C(ClassProperty);
struct C(ClassProperty)
{
   const char * name;
   C(ClassProperty) * parent;
   C(ClassProperty) * left;
   C(ClassProperty) * right;
   int depth;
   void (* Set)(C(Class) *, int64);
   int64 (* Get)(C(Class) *);
   const char * dataTypeString;
   C(Type) * dataType;
   C(bool) constant;
};
typedef C(Window) C(ClassDesignerBase);
typedef struct C(BuiltInContainer) C(BuiltInContainer);
typedef struct C(BitMember) C(BitMember);
struct C(BitMember)
{
   C(BitMember) * prev;
   C(BitMember) * next;
   const char * name;
   C(bool) isProperty;
   C(AccessMode) memberAccess;
   int id;
   C(Class) * _class;
   const char * dataTypeString;
   C(Class) * dataTypeClass;
   C(Type) * dataType;
   C(DataMemberType) type;
   int size;
   int pos;
   uint64 mask;
};
typedef struct C(BTNamedLink) C(BTNamedLink);
struct C(BTNamedLink)
{
   const char * name;
   C(BTNamedLink) * parent;
   C(BTNamedLink) * left;
   C(BTNamedLink) * right;
   int depth;
   void * data;
};
typedef struct C(AVLNode) C(AVLNode);
// end -- moved backwards outputs
#define FORMAT64D ((__runtimePlatform == win32) ? "%I64d" : "%lld")

#define FORMAT64DLL ((__runtimePlatform == win32) ? "%I64dLL" : "%lldLL")

#define FORMAT64HEX ((__runtimePlatform == win32) ? "0x%I64X" : "0x%llX")

#define FORMAT64HEXLL ((__runtimePlatform == win32) ? "0x%I64XLL" : "0x%llXLL")

#define FORMAT64U ((__runtimePlatform == win32) ? "%I64u" : "%llu")

#define MAXBYTE (0xff)

#define MAXDOUBLE (1.7976931348623158e+308)

#define MAXDWORD (0xffffffff)

#define MAXFLOAT (3.40282346638528860e+38f)

#define MAXINT (((int)0x7fffffff))

#define MAXINT64 (((long long)0x7fffffffffffffffLL))

#define MAXQWORD (0xffffffffffffffffLL)

#define MAXWORD (0xffff)

#define MINDOUBLE (2.2250738585072014e-308)

#define MINFLOAT (1.17549435082228750e-38f)

#define MININT (((int)0x80000000))

#define MININT64 (((long long)0x8000000000000000LL))

#if defined(__cplusplus)
#define null 0
#else
#define null ((void *)0)
#endif

typedef C(CustomAVLTree) C(AVLTree);
typedef double C(Angle);
typedef C(Container) C(Array);
typedef C(String) C(CIString);
typedef struct C(EnumClassData) C(EnumClassData);
typedef struct C(Link) C(Link);
typedef struct C(LinkElement) C(LinkElement);
typedef C(LinkList) C(List);
typedef struct C(ListItem) C(ListItem);
typedef struct C(MapIterator) C(MapIterator);
typedef struct C(MapNode) C(MapNode);
#if CPP11
enum C(Platform) : int
#else
typedef int C(Platform);
enum C(Platform)
#endif
{
   Platform_unknown = 0x0,
   Platform_win32 = 0x1,
   Platform_tux = 0x2,
   Platform_apple = 0x3
};

typedef struct C(StaticString) C(StaticString);
typedef uint64_t TP(MapIterator, KT);
typedef uint64_t TP(MapIterator, V);
typedef uint64_t TP(MapNode, KT);
typedef uint64_t TP(MapNode, V);
typedef uint64_t TP(LinkList, LT);
typedef uint64_t TP(CustomAVLTree, BT);
typedef uint64_t TP(LinkElement, T);
typedef uint64_t TP(AVLNode, T);
typedef uint64_t TP(Container, D);
typedef uint64_t TP(Container, I);
typedef uint64_t TP(Container, T);
typedef uint64_t TP(Iterator, IT);
typedef uint64_t TP(Iterator, T);
struct C(AVLNode)
{
   byte __ecerePrivateData0[32];
   TP(AVLNode, T) key;
};
extern thisclass(AVLNode *) (* AVLNode_find)(C(AVLNode) * __this, C(Class) * Tclass, TP(AVLNode, T) key);

extern C(Property) * PROPERTY(AVLNode, prev);
extern thisclass(AVLNode *) (* AVLNode_get_prev)(C(AVLNode) * a);

extern C(Property) * PROPERTY(AVLNode, next);
extern thisclass(AVLNode *) (* AVLNode_get_next)(C(AVLNode) * a);

extern C(Property) * PROPERTY(AVLNode, minimum);
extern thisclass(AVLNode *) (* AVLNode_get_minimum)(C(AVLNode) * a);

extern C(Property) * PROPERTY(AVLNode, maximum);
extern thisclass(AVLNode *) (* AVLNode_get_maximum)(C(AVLNode) * a);

extern C(Property) * PROPERTY(AVLNode, count);
extern int (* AVLNode_get_count)(C(AVLNode) * a);

extern C(Property) * PROPERTY(AVLNode, depthProp);
extern int (* AVLNode_get_depthProp)(C(AVLNode) * a);

extern int M_VTBLID(Application, main);
#define Application_main(__i) \
   VMETHOD(CO(Application), Application, main, __i, void, \
      C(Application), \
      __i)
extern C(Method) * METHOD(Application, main);
struct CM(Array)
{
   TP(Container, T) * array;
   uint count;
   uint minAllocSize;
};
extern C(Property) * PROPERTY(Array, size);
extern void (* Array_set_size)(C(Array) a, uint value);
extern uint (* Array_get_size)(C(Array) a);

extern C(Property) * PROPERTY(Array, minAllocSize);
extern void (* Array_set_minAllocSize)(C(Array) a, uint value);
extern uint (* Array_get_minAllocSize)(C(Array) a);

struct C(BuiltInContainer)
{
   void * _vTbl;
   C(Class) * _class;
   int _refCount;
   void * data;
   int count;
   C(Class) * type;
};
extern int M_VTBLID(BuiltInContainer, add);
#define BuiltInContainer_add(__i, value) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, add, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) * _ARG uint64, \
      __i _ARG value)
extern C(Method) * METHOD(BuiltInContainer, add);
extern int M_VTBLID(BuiltInContainer, copy);
#define BuiltInContainer_copy(__i, source) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, copy, __i, void, \
      C(BuiltInContainer) * _ARG C(Container), \
      __i _ARG source)
extern C(Method) * METHOD(BuiltInContainer, copy);
extern int M_VTBLID(BuiltInContainer, delete);
#define BuiltInContainer_delete(__i, it) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, delete, __i, void, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) *, \
      __i _ARG it)
extern C(Method) * METHOD(BuiltInContainer, delete);
extern int M_VTBLID(BuiltInContainer, find);
#define BuiltInContainer_find(__i, value) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, find, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) * _ARG uint64, \
      __i _ARG value)
extern C(Method) * METHOD(BuiltInContainer, find);
extern int M_VTBLID(BuiltInContainer, free);
#define BuiltInContainer_free(__i) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, free, __i, void, \
      C(BuiltInContainer) *, \
      __i)
extern C(Method) * METHOD(BuiltInContainer, free);
extern int M_VTBLID(BuiltInContainer, freeIterator);
#define BuiltInContainer_freeIterator(__i, it) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, freeIterator, __i, void, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) *, \
      __i _ARG it)
extern C(Method) * METHOD(BuiltInContainer, freeIterator);
extern int M_VTBLID(BuiltInContainer, getAtPosition);
#define BuiltInContainer_getAtPosition(__i, pos, create) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, getAtPosition, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) * _ARG const uint64 _ARG C(bool), \
      __i _ARG pos _ARG create)
extern C(Method) * METHOD(BuiltInContainer, getAtPosition);
extern int M_VTBLID(BuiltInContainer, getCount);
#define BuiltInContainer_getCount(__i) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, getCount, __i, int, \
      C(BuiltInContainer) *, \
      __i)
extern C(Method) * METHOD(BuiltInContainer, getCount);
extern int M_VTBLID(BuiltInContainer, getData);
#define BuiltInContainer_getData(__i, pointer) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, getData, __i, uint64, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) *, \
      __i _ARG pointer)
extern C(Method) * METHOD(BuiltInContainer, getData);
extern int M_VTBLID(BuiltInContainer, getFirst);
#define BuiltInContainer_getFirst(__i) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, getFirst, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) *, \
      __i)
extern C(Method) * METHOD(BuiltInContainer, getFirst);
extern int M_VTBLID(BuiltInContainer, getLast);
#define BuiltInContainer_getLast(__i) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, getLast, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) *, \
      __i)
extern C(Method) * METHOD(BuiltInContainer, getLast);
extern int M_VTBLID(BuiltInContainer, getNext);
#define BuiltInContainer_getNext(__i, pointer) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, getNext, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) *, \
      __i _ARG pointer)
extern C(Method) * METHOD(BuiltInContainer, getNext);
extern int M_VTBLID(BuiltInContainer, getPrev);
#define BuiltInContainer_getPrev(__i, pointer) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, getPrev, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) *, \
      __i _ARG pointer)
extern C(Method) * METHOD(BuiltInContainer, getPrev);
extern int M_VTBLID(BuiltInContainer, insert);
#define BuiltInContainer_insert(__i, after, value) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, insert, __i, C(IteratorPointer) *, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) * _ARG uint64, \
      __i _ARG after _ARG value)
extern C(Method) * METHOD(BuiltInContainer, insert);
extern int M_VTBLID(BuiltInContainer, move);
#define BuiltInContainer_move(__i, it, after) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, move, __i, void, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) * _ARG C(IteratorPointer) *, \
      __i _ARG it _ARG after)
extern C(Method) * METHOD(BuiltInContainer, move);
extern int M_VTBLID(BuiltInContainer, remove);
#define BuiltInContainer_remove(__i, it) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, remove, __i, void, \
      C(BuiltInContainer) * _ARG C(IteratorPointer) *, \
      __i _ARG it)
extern C(Method) * METHOD(BuiltInContainer, remove);
extern int M_VTBLID(BuiltInContainer, removeAll);
#define BuiltInContainer_removeAll(__i) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, removeAll, __i, void, \
      C(BuiltInContainer) *, \
      __i)
extern C(Method) * METHOD(BuiltInContainer, removeAll);
extern int M_VTBLID(BuiltInContainer, setData);
#define BuiltInContainer_setData(__i, pointer, data) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, setData, __i, C(bool), \
      C(BuiltInContainer) * _ARG C(IteratorPointer) * _ARG uint64, \
      __i _ARG pointer _ARG data)
extern C(Method) * METHOD(BuiltInContainer, setData);
extern int M_VTBLID(BuiltInContainer, sort);
#define BuiltInContainer_sort(__i, ascending) \
   VMETHOD(CO(BuiltInContainer), BuiltInContainer, sort, __i, void, \
      C(BuiltInContainer) * _ARG C(bool), \
      __i _ARG ascending)
extern C(Method) * METHOD(BuiltInContainer, sort);
extern C(Property) * PROPERTY(BuiltInContainer, Container);
extern C(Container) (* BuiltInContainer_to_Container)(C(BuiltInContainer) b);

extern C(Property) * PROPERTY(Class, char_ptr);
extern void (* Class_from_char_ptr)(C(Class) * c, const char * value);
extern const char * (* Class_to_char_ptr)(C(Class) * c);

extern int M_VTBLID(ClassDesignerBase, addObject);
#define ClassDesignerBase_addObject(__i) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, addObject, __i, void, \
      C(ClassDesignerBase), \
      __i)
extern C(Method) * METHOD(ClassDesignerBase, addObject);
extern int M_VTBLID(ClassDesignerBase, createNew);
#define ClassDesignerBase_createNew(__i, editBox, clientSize, name, inherit) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, createNew, __i, void, \
      C(EditBox) _ARG C(Size) * _ARG const char * _ARG const char *, \
      editBox _ARG clientSize _ARG name _ARG inherit)
extern C(Method) * METHOD(ClassDesignerBase, createNew);
extern int M_VTBLID(ClassDesignerBase, createObject);
#define ClassDesignerBase_createObject(__i, designer, instance, object, isClass, _class) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, createObject, __i, void, \
      C(DesignerBase) _ARG C(Instance) _ARG C(ObjectInfo) * _ARG C(bool) _ARG C(Instance), \
      designer _ARG instance _ARG object _ARG isClass _ARG _class)
extern C(Method) * METHOD(ClassDesignerBase, createObject);
extern int M_VTBLID(ClassDesignerBase, destroyObject);
#define ClassDesignerBase_destroyObject(__i, object) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, destroyObject, __i, void, \
      C(Instance), \
      object)
extern C(Method) * METHOD(ClassDesignerBase, destroyObject);
extern int M_VTBLID(ClassDesignerBase, droppedObject);
#define ClassDesignerBase_droppedObject(__i, instance, object, isClass, _class) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, droppedObject, __i, void, \
      C(Instance) _ARG C(ObjectInfo) * _ARG C(bool) _ARG C(Instance), \
      instance _ARG object _ARG isClass _ARG _class)
extern C(Method) * METHOD(ClassDesignerBase, droppedObject);
extern int M_VTBLID(ClassDesignerBase, fixProperty);
#define ClassDesignerBase_fixProperty(__i, prop, object) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, fixProperty, __i, void, \
      C(Property) * _ARG C(Instance), \
      prop _ARG object)
extern C(Method) * METHOD(ClassDesignerBase, fixProperty);
extern int M_VTBLID(ClassDesignerBase, listToolBoxClasses);
#define ClassDesignerBase_listToolBoxClasses(__i, designer) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, listToolBoxClasses, __i, void, \
      C(ClassDesignerBase) _ARG C(DesignerBase), \
      __i _ARG designer)
extern C(Method) * METHOD(ClassDesignerBase, listToolBoxClasses);
extern int M_VTBLID(ClassDesignerBase, postCreateObject);
#define ClassDesignerBase_postCreateObject(__i, instance, object, isClass, _class) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, postCreateObject, __i, void, \
      C(Instance) _ARG C(ObjectInfo) * _ARG C(bool) _ARG C(Instance), \
      instance _ARG object _ARG isClass _ARG _class)
extern C(Method) * METHOD(ClassDesignerBase, postCreateObject);
extern int M_VTBLID(ClassDesignerBase, prepareTestObject);
#define ClassDesignerBase_prepareTestObject(__i, designer, test) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, prepareTestObject, __i, void, \
      C(DesignerBase) _ARG C(Instance), \
      designer _ARG test)
extern C(Method) * METHOD(ClassDesignerBase, prepareTestObject);
extern int M_VTBLID(ClassDesignerBase, reset);
#define ClassDesignerBase_reset(__i) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, reset, __i, void, \
      C(ClassDesignerBase), \
      __i)
extern C(Method) * METHOD(ClassDesignerBase, reset);
extern int M_VTBLID(ClassDesignerBase, selectObject);
#define ClassDesignerBase_selectObject(__i, object, control) \
   VMETHOD(CO(ClassDesignerBase), ClassDesignerBase, selectObject, __i, void, \
      C(ClassDesignerBase) _ARG C(ObjectInfo) * _ARG C(Instance), \
      __i _ARG object _ARG control)
extern C(Method) * METHOD(ClassDesignerBase, selectObject);
extern int M_VTBLID(Container, add);
#define Container_add(__i, value) \
   VMETHOD(CO(Container), Container, add, __i, C(IteratorPointer) *, \
      C(Container) _ARG TP(Container, T), \
      __i _ARG value)
extern C(Method) * METHOD(Container, add);
extern int M_VTBLID(Container, copy);
#define Container_copy(__i, source) \
   VMETHOD(CO(Container), Container, copy, __i, void, \
      C(Container) _ARG C(Container), \
      __i _ARG source)
extern C(Method) * METHOD(Container, copy);
extern int M_VTBLID(Container, delete);
#define Container_delete(__i, i) \
   VMETHOD(CO(Container), Container, delete, __i, void, \
      C(Container) _ARG C(IteratorPointer) *, \
      __i _ARG i)
extern C(Method) * METHOD(Container, delete);
extern int M_VTBLID(Container, find);
#define Container_find(__i, value) \
   VMETHOD(CO(Container), Container, find, __i, C(IteratorPointer) *, \
      C(Container) _ARG TP(Container, D), \
      __i _ARG value)
extern C(Method) * METHOD(Container, find);
extern int M_VTBLID(Container, free);
#define Container_free(__i) \
   VMETHOD(CO(Container), Container, free, __i, void, \
      C(Container), \
      __i)
extern C(Method) * METHOD(Container, free);
extern int M_VTBLID(Container, freeIterator);
#define Container_freeIterator(__i, it) \
   VMETHOD(CO(Container), Container, freeIterator, __i, void, \
      C(Container) _ARG C(IteratorPointer) *, \
      __i _ARG it)
extern C(Method) * METHOD(Container, freeIterator);
extern int M_VTBLID(Container, getAtPosition);
#define Container_getAtPosition(__i, pos, create, justAdded) \
   VMETHOD(CO(Container), Container, getAtPosition, __i, C(IteratorPointer) *, \
      C(Container) _ARG TP(Container, I) _ARG C(bool) _ARG C(bool) *, \
      __i _ARG pos _ARG create _ARG justAdded)
extern C(Method) * METHOD(Container, getAtPosition);
extern int M_VTBLID(Container, getCount);
#define Container_getCount(__i) \
   VMETHOD(CO(Container), Container, getCount, __i, int, \
      C(Container), \
      __i)
extern C(Method) * METHOD(Container, getCount);
extern int M_VTBLID(Container, getData);
#define Container_getData(__i, pointer) \
   VMETHOD(CO(Container), Container, getData, __i, TP(Container, D), \
      C(Container) _ARG C(IteratorPointer) *, \
      __i _ARG pointer)
extern C(Method) * METHOD(Container, getData);
extern int M_VTBLID(Container, getFirst);
#define Container_getFirst(__i) \
   VMETHOD(CO(Container), Container, getFirst, __i, C(IteratorPointer) *, \
      C(Container), \
      __i)
extern C(Method) * METHOD(Container, getFirst);
extern int M_VTBLID(Container, getLast);
#define Container_getLast(__i) \
   VMETHOD(CO(Container), Container, getLast, __i, C(IteratorPointer) *, \
      C(Container), \
      __i)
extern C(Method) * METHOD(Container, getLast);
extern int M_VTBLID(Container, getNext);
#define Container_getNext(__i, pointer) \
   VMETHOD(CO(Container), Container, getNext, __i, C(IteratorPointer) *, \
      C(Container) _ARG C(IteratorPointer) *, \
      __i _ARG pointer)
extern C(Method) * METHOD(Container, getNext);
extern int M_VTBLID(Container, getPrev);
#define Container_getPrev(__i, pointer) \
   VMETHOD(CO(Container), Container, getPrev, __i, C(IteratorPointer) *, \
      C(Container) _ARG C(IteratorPointer) *, \
      __i _ARG pointer)
extern C(Method) * METHOD(Container, getPrev);
extern int M_VTBLID(Container, insert);
#define Container_insert(__i, after, value) \
   VMETHOD(CO(Container), Container, insert, __i, C(IteratorPointer) *, \
      C(Container) _ARG C(IteratorPointer) * _ARG TP(Container, T), \
      __i _ARG after _ARG value)
extern C(Method) * METHOD(Container, insert);
extern int M_VTBLID(Container, move);
#define Container_move(__i, it, after) \
   VMETHOD(CO(Container), Container, move, __i, void, \
      C(Container) _ARG C(IteratorPointer) * _ARG C(IteratorPointer) *, \
      __i _ARG it _ARG after)
extern C(Method) * METHOD(Container, move);
extern int M_VTBLID(Container, remove);
#define Container_remove(__i, it) \
   VMETHOD(CO(Container), Container, remove, __i, void, \
      C(Container) _ARG C(IteratorPointer) *, \
      __i _ARG it)
extern C(Method) * METHOD(Container, remove);
extern int M_VTBLID(Container, removeAll);
#define Container_removeAll(__i) \
   VMETHOD(CO(Container), Container, removeAll, __i, void, \
      C(Container), \
      __i)
extern C(Method) * METHOD(Container, removeAll);
extern int M_VTBLID(Container, setData);
#define Container_setData(__i, pointer, data) \
   VMETHOD(CO(Container), Container, setData, __i, C(bool), \
      C(Container) _ARG C(IteratorPointer) * _ARG TP(Container, D), \
      __i _ARG pointer _ARG data)
extern C(Method) * METHOD(Container, setData);
extern int M_VTBLID(Container, sort);
#define Container_sort(__i, ascending) \
   VMETHOD(CO(Container), Container, sort, __i, void, \
      C(Container) _ARG C(bool), \
      __i _ARG ascending)
extern C(Method) * METHOD(Container, sort);
extern void (* Container_takeOut)(C(Container) __this, TP(Container, D) d);

extern C(Property) * PROPERTY(Container, copySrc);
extern void (* Container_set_copySrc)(C(Container) c, C(Container) value);

extern C(Property) * PROPERTY(Container, firstIterator);
extern void (* Container_get_firstIterator)(C(Container) c, C(Iterator) * value);

extern C(Property) * PROPERTY(Container, lastIterator);
extern void (* Container_get_lastIterator)(C(Container) c, C(Iterator) * value);

struct CM(CustomAVLTree)
{
   TP(CustomAVLTree, BT) root;
   int count;
};
extern void (* CustomAVLTree_freeKey)(C(CustomAVLTree) __this, C(AVLNode) * item);

struct CM(DesignerBase)
{
   C(ClassDesignerBase) classDesigner;
   const char * objectClass;
   C(bool) isDragging;
};
extern int M_VTBLID(DesignerBase, addDefaultMethod);
#define DesignerBase_addDefaultMethod(__i, instance, classInstance) \
   VMETHOD(CO(DesignerBase), DesignerBase, addDefaultMethod, __i, void, \
      C(DesignerBase) _ARG C(Instance) _ARG C(Instance), \
      __i _ARG instance _ARG classInstance)
extern C(Method) * METHOD(DesignerBase, addDefaultMethod);
extern int M_VTBLID(DesignerBase, addToolBoxClass);
#define DesignerBase_addToolBoxClass(__i, _class) \
   VMETHOD(CO(DesignerBase), DesignerBase, addToolBoxClass, __i, void, \
      C(DesignerBase) _ARG C(Class) *, \
      __i _ARG _class)
extern C(Method) * METHOD(DesignerBase, addToolBoxClass);
extern int M_VTBLID(DesignerBase, codeAddObject);
#define DesignerBase_codeAddObject(__i, instance, object) \
   VMETHOD(CO(DesignerBase), DesignerBase, codeAddObject, __i, void, \
      C(DesignerBase) _ARG C(Instance) _ARG C(ObjectInfo) *, \
      __i _ARG instance _ARG object)
extern C(Method) * METHOD(DesignerBase, codeAddObject);
extern int M_VTBLID(DesignerBase, deleteObject);
#define DesignerBase_deleteObject(__i, object) \
   VMETHOD(CO(DesignerBase), DesignerBase, deleteObject, __i, void, \
      C(DesignerBase) _ARG C(ObjectInfo) *, \
      __i _ARG object)
extern C(Method) * METHOD(DesignerBase, deleteObject);
extern int M_VTBLID(DesignerBase, findObject);
#define DesignerBase_findObject(__i, instance, string) \
   VMETHOD(CO(DesignerBase), DesignerBase, findObject, __i, C(bool), \
      C(DesignerBase) _ARG C(Instance) * _ARG const char *, \
      __i _ARG instance _ARG string)
extern C(Method) * METHOD(DesignerBase, findObject);
extern int M_VTBLID(DesignerBase, modifyCode);
#define DesignerBase_modifyCode(__i) \
   VMETHOD(CO(DesignerBase), DesignerBase, modifyCode, __i, void, \
      C(DesignerBase), \
      __i)
extern C(Method) * METHOD(DesignerBase, modifyCode);
extern int M_VTBLID(DesignerBase, objectContainsCode);
#define DesignerBase_objectContainsCode(__i, object) \
   VMETHOD(CO(DesignerBase), DesignerBase, objectContainsCode, __i, C(bool), \
      C(DesignerBase) _ARG C(ObjectInfo) *, \
      __i _ARG object)
extern C(Method) * METHOD(DesignerBase, objectContainsCode);
extern int M_VTBLID(DesignerBase, renameObject);
#define DesignerBase_renameObject(__i, object, name) \
   VMETHOD(CO(DesignerBase), DesignerBase, renameObject, __i, void, \
      C(DesignerBase) _ARG C(ObjectInfo) * _ARG const char *, \
      __i _ARG object _ARG name)
extern C(Method) * METHOD(DesignerBase, renameObject);
extern int M_VTBLID(DesignerBase, selectObjectFromDesigner);
#define DesignerBase_selectObjectFromDesigner(__i, object) \
   VMETHOD(CO(DesignerBase), DesignerBase, selectObjectFromDesigner, __i, void, \
      C(DesignerBase) _ARG C(ObjectInfo) *, \
      __i _ARG object)
extern C(Method) * METHOD(DesignerBase, selectObjectFromDesigner);
extern int M_VTBLID(DesignerBase, sheetAddObject);
#define DesignerBase_sheetAddObject(__i, object) \
   VMETHOD(CO(DesignerBase), DesignerBase, sheetAddObject, __i, void, \
      C(DesignerBase) _ARG C(ObjectInfo) *, \
      __i _ARG object)
extern C(Method) * METHOD(DesignerBase, sheetAddObject);
extern int M_VTBLID(DesignerBase, updateProperties);
#define DesignerBase_updateProperties(__i) \
   VMETHOD(CO(DesignerBase), DesignerBase, updateProperties, __i, void, \
      C(DesignerBase), \
      __i)
extern C(Method) * METHOD(DesignerBase, updateProperties);
extern C(Property) * PROPERTY(DesignerBase, classDesigner);
extern void (* DesignerBase_set_classDesigner)(C(DesignerBase) d, C(ClassDesignerBase) value);
extern C(ClassDesignerBase) (* DesignerBase_get_classDesigner)(C(DesignerBase) d);

extern C(Property) * PROPERTY(DesignerBase, objectClass);
extern void (* DesignerBase_set_objectClass)(C(DesignerBase) d, const char * value);
extern const char * (* DesignerBase_get_objectClass)(C(DesignerBase) d);

extern C(Property) * PROPERTY(DesignerBase, isDragging);
extern void (* DesignerBase_set_isDragging)(C(DesignerBase) d, C(bool) value);
extern C(bool) (* DesignerBase_get_isDragging)(C(DesignerBase) d);

struct C(EnumClassData)
{
   C(OldList) values;
   int64 largest;
};
extern void (* IOChannel_get)(C(IOChannel) __this, C(Class) * class_data, void * data);

extern void (* IOChannel_put)(C(IOChannel) __this, C(Class) * class_data, void * data);

extern int M_VTBLID(IOChannel, readData);
#define IOChannel_readData(__i, data, numBytes) \
   VMETHOD(CO(IOChannel), IOChannel, readData, __i, uint, \
      C(IOChannel) _ARG void * _ARG uint, \
      __i _ARG data _ARG numBytes)
extern C(Method) * METHOD(IOChannel, readData);
extern void (* IOChannel_serialize)(C(IOChannel) __this, C(Class) * class_data, void * data);

extern void (* IOChannel_unserialize)(C(IOChannel) __this, C(Class) * class_data, void * data);

extern int M_VTBLID(IOChannel, writeData);
#define IOChannel_writeData(__i, data, numBytes) \
   VMETHOD(CO(IOChannel), IOChannel, writeData, __i, uint, \
      C(IOChannel) _ARG const void * _ARG uint, \
      __i _ARG data _ARG numBytes)
extern C(Method) * METHOD(IOChannel, writeData);
struct C(Iterator)
{
   C(Container) container;
   C(IteratorPointer) * pointer;
};
extern C(bool) (* Iterator_find)(C(Iterator) * __this, TP(Iterator, T) value);

extern void (* Iterator_free)(C(Iterator) * __this);

extern TP(Iterator, T) (* Iterator_getData)(C(Iterator) * __this);

extern C(bool) (* Iterator_index)(C(Iterator) * __this, TP(Iterator, IT) index, C(bool) create);

extern C(bool) (* Iterator_next)(C(Iterator) * __this);

extern C(bool) (* Iterator_prev)(C(Iterator) * __this);

extern void (* Iterator_remove)(C(Iterator) * __this);

extern C(bool) (* Iterator_setData)(C(Iterator) * __this, TP(Iterator, T) value);

extern C(Property) * PROPERTY(Iterator, data);
extern void (* Iterator_set_data)(C(Iterator) i, TP(Iterator, T) value);
extern TP(Iterator, T) (* Iterator_get_data)(C(Iterator) i);

struct C(Link)
{
   uint64 data;
};
struct C(LinkElement)
{
   TP(LinkElement, T) prev;
   TP(LinkElement, T) next;
};
struct CM(LinkList)
{
   TP(LinkList, LT) first;
   TP(LinkList, LT) last;
   int count;
};
extern void (* LinkList__Sort)(C(LinkList) __this, C(bool) ascending, C(LinkList) * lists);

struct C(ListItem)
{
   union
   {
      C(LinkElement) link;
      struct
      {
         thisclass(ListItem *) prev;
         thisclass(ListItem *) next;
      };
   };
};
extern C(Property) * PROPERTY(Map, mapSrc);
extern void (* Map_set_mapSrc)(C(Map) m, C(Map) value);

extern C(Property) * PROPERTY(MapIterator, map);
extern void (* MapIterator_set_map)(C(MapIterator) m, C(Map) value);
extern C(Map) (* MapIterator_get_map)(C(MapIterator) m);

extern C(Property) * PROPERTY(MapIterator, key);
extern TP(MapIterator, KT) (* MapIterator_get_key)(C(MapIterator) m);

extern C(Property) * PROPERTY(MapIterator, value);
extern void (* MapIterator_set_value)(C(MapIterator) m, TP(MapIterator, V) value);
extern TP(MapIterator, V) (* MapIterator_get_value)(C(MapIterator) m);

struct C(MapNode)
{
   TP(MapNode, V) value;
};
extern C(Property) * PROPERTY(MapNode, key);
extern void (* MapNode_set_key)(C(MapNode) * m, TP(MapNode, KT) value);
extern TP(MapNode, KT) (* MapNode_get_key)(C(MapNode) * m);

extern C(Property) * PROPERTY(MapNode, value);
extern void (* MapNode_set_value)(C(MapNode) * m, TP(MapNode, V) value);
extern TP(MapNode, V) (* MapNode_get_value)(C(MapNode) * m);

extern C(Property) * PROPERTY(MapNode, prev);
extern thisclass(MapNode *) (* MapNode_get_prev)(C(MapNode) * m);

extern C(Property) * PROPERTY(MapNode, next);
extern thisclass(MapNode *) (* MapNode_get_next)(C(MapNode) * m);

extern C(Property) * PROPERTY(MapNode, minimum);
extern thisclass(MapNode *) (* MapNode_get_minimum)(C(MapNode) * m);

extern C(Property) * PROPERTY(MapNode, maximum);
extern thisclass(MapNode *) (* MapNode_get_maximum)(C(MapNode) * m);


extern int M_VTBLID(Module, onLoad);
#define Module_onLoad(__i) \
   VMETHOD(CO(Module), Module, onLoad, __i, C(bool), \
      C(Module), \
      __i)
extern C(Method) * METHOD(Module, onLoad);
extern int M_VTBLID(Module, onUnload);
#define Module_onUnload(__i) \
   VMETHOD(CO(Module), Module, onUnload, __i, void, \
      C(Module), \
      __i)
extern C(Method) * METHOD(Module, onUnload);

extern C(Property) * PROPERTY(Platform, char_ptr);
extern C(Platform) (* Platform_from_char_ptr)(char * c);
extern const char * (* Platform_to_char_ptr)(C(Platform) platform);

struct CM(SerialBuffer)
{
   byte * _buffer;
   uint count;
   uint _size;
   uint pos;
};
extern void (* SerialBuffer_free)(C(SerialBuffer) __this);

extern C(Property) * PROPERTY(SerialBuffer, buffer);
extern void (* SerialBuffer_set_buffer)(C(SerialBuffer) s, byte * value);
extern byte * (* SerialBuffer_get_buffer)(C(SerialBuffer) s);

extern C(Property) * PROPERTY(SerialBuffer, size);
extern void (* SerialBuffer_set_size)(C(SerialBuffer) s, uint value);
extern uint (* SerialBuffer_get_size)(C(SerialBuffer) s);

struct C(StaticString)
{
   char string[1];
};
extern void (* checkConsistency)(void);
extern void (* checkMemory)(void);
extern C(DesignerBase) (* getActiveDesigner)(void);
extern C(Platform) (* getRuntimePlatform)(void);
extern C(bool) (* locateModule)(const char * name, const char * fileName);
extern void (* print)(const C(Class) * class_object, const void * object, ...);
extern int (* printBuf)(char * buffer, int maxLen, const C(Class) * class_object, const void * object, ...);
extern void (* printLn)(const C(Class) * class_object, const void * object, ...);
extern int (* printLnBuf)(char * buffer, int maxLen, const C(Class) * class_object, const void * object, ...);
extern char * (* printLnString)(const C(Class) * class_object, const void * object, ...);
extern int (* printStdArgsToBuffer)(char * buffer, int maxLen, const C(Class) * class_object, const void * object, __builtin_va_list args);
extern char * (* printString)(const C(Class) * class_object, const void * object, ...);
extern void (* setActiveDesigner)(C(DesignerBase) designer);
extern uint (* log2i)(uint number);
extern void (* memswap)(byte * a, byte * b, uint size);
extern uint (* pow2i)(uint number);
extern void (* qsortr)(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), void * arg);
extern void (* qsortrx)(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, C(bool) deref, C(bool) ascending);
extern void (* queryMemInfo)(char * string);
extern C(Class) * CO(Window);
extern C(Class) * CO(String);
extern C(Class) * CO(byte);
extern C(Class) * CO(char);
extern C(Class) * CO(class);
extern C(Class) * CO(double);
extern C(Class) * CO(enum);
extern C(Class) * CO(float);
extern C(Class) * CO(int);
extern C(Class) * CO(int64);
extern C(Class) * CO(intptr);
extern C(Class) * CO(intsize);
extern C(Class) * CO(short);
extern C(Class) * CO(struct);
extern C(Class) * CO(uint);
extern C(Class) * CO(uint16);
extern C(Class) * CO(uint32);
extern C(Class) * CO(uint64);
extern C(Class) * CO(uintptr);
extern C(Class) * CO(uintsize);
extern C(Class) * CO(BTNode);
extern C(Class) * CO(BackSlashEscaping);
extern C(Class) * CO(BinaryTree);
extern C(Class) * CO(Item);
extern C(Class) * CO(Mutex);
extern C(Class) * CO(NamedItem);
extern C(Class) * CO(NamedLink);
extern C(Class) * CO(NamedLink64);
extern C(Class) * CO(OldLink);
extern C(Class) * CO(OldList);
extern C(Class) * CO(StringAllocType);
extern C(Class) * CO(StringBTNode);
extern C(Class) * CO(StringBinaryTree);
extern C(Class) * CO(TreePrintStyle);
extern C(Class) * CO(ZString);
extern C(Class) * CO(AVLNode);
extern C(Class) * CO(AVLTree);
extern C(Class) * CO(AccessMode);
extern C(Class) * CO(Angle);
extern C(Class) * CO(Application);
extern C(Class) * CO(Array);
extern C(Class) * CO(BTNamedLink);
extern C(Class) * CO(BitMember);
extern C(Class) * CO(BuiltInContainer);
extern C(Class) * CO(CIString);
extern C(Class) * CO(Class);
extern C(Class) * CO(ClassDesignerBase);
extern C(Class) * CO(ClassProperty);
extern C(Class) * CO(ClassTemplateArgument);
extern C(Class) * CO(ClassTemplateParameter);
extern C(Class) * CO(ClassType);
extern C(Class) * CO(Container);
extern C(Class) * CO(CustomAVLTree);
extern C(Class) * CO(DataMember);
extern C(Class) * CO(DataMemberType);
extern C(Class) * CO(DataValue);
extern C(Class) * CO(DefinedExpression);
extern C(Class) * CO(DesignerBase);
extern C(Class) * CO(EnumClassData);
extern C(Class) * CO(GlobalFunction);
extern C(Class) * CO(IOChannel);
extern C(Class) * CO(ImportType);
extern C(Class) * CO(Instance);
extern C(Class) * CO(Iterator);
extern C(Class) * CO(IteratorPointer);
extern C(Class) * CO(Link);
extern C(Class) * CO(LinkElement);
extern C(Class) * CO(LinkList);
extern C(Class) * CO(List);
extern C(Class) * CO(ListItem);
extern C(Class) * CO(Map);
extern C(Class) * CO(MapIterator);
extern C(Class) * CO(MapNode);
extern C(Class) * CO(Method);
extern C(Class) * CO(MethodType);
extern C(Class) * CO(Module);
extern C(Class) * CO(NameSpace);
extern C(Class) * CO(ObjectInfo);
extern C(Class) * CO(Platform);
extern C(Class) * CO(Property);
extern C(Class) * CO(SerialBuffer);
extern C(Class) * CO(StaticString);
extern C(Class) * CO(SubModule);
extern C(Class) * CO(TemplateMemberType);
extern C(Class) * CO(TemplateParameterType);

///////////////////////////////////////////////////////////// HARDCODED //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

// more ecere stuff that bleeds into ecereCOM
typedef C(Window) C(CommonControl);
typedef C(CommonControl) C(DataBox);
typedef C(Instance) C(Surface);



////////////////////////////////////////////////// dll function imports //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////


extern __attribute__((dllimport)) const char * __ecereNameSpace__ecere__GetTranslatedString(constString name, const char * string, const char * stringAndContext);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__LoadTranslatedStrings(constString moduleName, const char * name);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__UnloadTranslatedStrings(constString name);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__MemoryGuard_PopLoc(void);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__MemoryGuard_PushLoc(const char * loc);
extern __attribute__((dllimport)) C(Application) __ecereNameSpace__ecere__com____ecere_COM_Initialize(C(bool) guiApp, int argc, char * argv[]);
extern __attribute__((dllimport)) C(BitMember) * __ecereNameSpace__ecere__com__eClass_AddBitMember(C(Class) * _class, const char * name, const char * type, int bitSize, int bitPos, C(AccessMode) declMode);
extern __attribute__((dllimport)) C(ClassProperty) * __ecereNameSpace__ecere__com__eClass_AddClassProperty(C(Class) * _class, const char * name, const char * dataType, void * setStmt, void * getStmt);
extern __attribute__((dllimport)) C(DataMember) * __ecereNameSpace__ecere__com__eClass_AddDataMember(C(Class) * _class, const char * name, const char * type, uint size, uint alignment, C(AccessMode) declMode);
extern __attribute__((dllimport)) C(bool) __ecereNameSpace__ecere__com__eClass_AddMember(C(Class) * _class, C(DataMember) * dataMember);
extern __attribute__((dllimport)) C(Method) * __ecereNameSpace__ecere__com__eClass_AddMethod(C(Class) * _class, const char * name, const char * type, void * function, C(AccessMode) declMode);
extern __attribute__((dllimport)) C(Property) * __ecereNameSpace__ecere__com__eClass_AddProperty(C(Class) * _class, const char * name, const char * dataType, void * setStmt, void * getStmt, C(AccessMode) declMode);
extern __attribute__((dllimport)) C(ClassTemplateParameter) * __ecereNameSpace__ecere__com__eClass_AddTemplateParameter(C(Class) * _class, const char * name, C(TemplateParameterType) type, const void * info, C(ClassTemplateArgument) * defaultArg);
extern __attribute__((dllimport)) C(Method) * __ecereNameSpace__ecere__com__eClass_AddVirtualMethod(C(Class) * _class, const char * name, const char * type, void * function, C(AccessMode) declMode);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eClass_DestructionWatchable(C(Class) * _class);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eClass_DoneAddingTemplateParameters(C(Class) * base);
extern __attribute__((dllimport)) C(ClassProperty) * __ecereNameSpace__ecere__com__eClass_FindClassProperty(C(Class) * _class, const char * name);
extern __attribute__((dllimport)) C(DataMember) * __ecereNameSpace__ecere__com__eClass_FindDataMember(C(Class) * _class, const char * name, C(Module) module, C(DataMember) * subMemberStack, int * subMemberStackPos);
extern __attribute__((dllimport)) C(DataMember) * __ecereNameSpace__ecere__com__eClass_FindDataMemberAndId(C(Class) * _class, const char * name, int * id, C(Module) module, C(DataMember) * subMemberStack, int * subMemberStackPos);
extern __attribute__((dllimport)) C(DataMember) * __ecereNameSpace__ecere__com__eClass_FindDataMemberAndOffset(C(Class) * _class, const char * name, uint * offset, C(Module) module, C(DataMember) * subMemberStack, int * subMemberStackPos);
extern __attribute__((dllimport)) C(Method) * __ecereNameSpace__ecere__com__eClass_FindMethod(C(Class) * _class, const char * name, C(Module) module);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eClass_FindNextMember(C(Class) * _class, C(Class) * curClass, C(DataMember) * curMember, C(DataMember) * subMemberStack, int * subMemberStackPos);
extern __attribute__((dllimport)) C(Property) * __ecereNameSpace__ecere__com__eClass_FindProperty(C(Class) * _class, const char * name, C(Module) module);
extern __attribute__((dllimport)) subclass(ClassDesignerBase) __ecereNameSpace__ecere__com__eClass_GetDesigner(C(Class) * _class);
extern __attribute__((dllimport)) int64 __ecereNameSpace__ecere__com__eClass_GetProperty(C(Class) * _class, const char * name);
extern __attribute__((dllimport)) C(bool) __ecereNameSpace__ecere__com__eClass_IsDerived(C(Class) * _class, C(Class) * from);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eClass_Resize(C(Class) * _class, int newSize);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eClass_SetProperty(C(Class) * _class, const char * name, int64 value);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eClass_Unregister(C(Class) * _class);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eEnum_AddFixedValue(C(Class) * _class, const char * string, int64 value);
extern __attribute__((dllimport)) int64 __ecereNameSpace__ecere__com__eEnum_AddValue(C(Class) * _class, const char * string);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_DecRef(C(Instance) instance);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_Delete(C(Instance) instance);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_Evolve(C(Instance) * instancePtr, C(Class) * _class);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(C(Instance) instance, C(Property) * _property);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(C(Instance) instance, C(Property) * _property);
extern __attribute__((dllimport)) subclass(ClassDesignerBase) __ecereNameSpace__ecere__com__eInstance_GetDesigner(C(Instance) instance);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_IncRef(C(Instance) instance);
extern __attribute__((dllimport)) C(bool) __ecereNameSpace__ecere__com__eInstance_IsDerived(C(Instance) instance, C(Class) * from);
extern __attribute__((dllimport)) void * __ecereNameSpace__ecere__com__eInstance_New(C(Class) * _class);
extern __attribute__((dllimport)) void * __ecereNameSpace__ecere__com__eInstance_NewEx(C(Class) * _class, C(bool) bindingsAlloc);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_SetMethod(C(Instance) instance, const char * name, void * function);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_StopWatching(C(Instance) instance, C(Property) * _property, C(Instance) object);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_Watch(C(Instance) instance, C(Property) * _property, void * object, void (* callback)(void *, void *));
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eInstance_WatchDestruction(C(Instance) instance, C(Instance) object, void (* callback)(void *, void *));
extern __attribute__((dllimport)) C(DataMember) * __ecereNameSpace__ecere__com__eMember_AddDataMember(C(DataMember) * member, const char * name, const char * type, uint size, uint alignment, C(AccessMode) declMode);
extern __attribute__((dllimport)) C(bool) __ecereNameSpace__ecere__com__eMember_AddMember(C(DataMember) * addTo, C(DataMember) * dataMember);
extern __attribute__((dllimport)) C(DataMember) * __ecereNameSpace__ecere__com__eMember_New(C(DataMemberType) type, C(AccessMode) declMode);
extern __attribute__((dllimport)) C(Module) __ecereNameSpace__ecere__com__eModule_Load(C(Module) fromModule, const char * name, C(AccessMode) importAccess);
extern __attribute__((dllimport)) C(Module) __ecereNameSpace__ecere__com__eModule_LoadStatic(C(Module) fromModule, const char * name, C(AccessMode) importAccess, C(bool) (* Load)(C(Module) module), C(bool) (* Unload)(C(Module) module));
extern __attribute__((dllimport)) C(Module) __ecereNameSpace__ecere__com__eModule_LoadStrict(C(Module) fromModule, const char * name, C(AccessMode) importAccess);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eModule_Unload(C(Module) fromModule, C(Module) module);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eProperty_SelfWatch(C(Class) * _class, const char * name, void (* callback)(void *));
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eProperty_Watchable(C(Property) * _property);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eSystem_Delete(void * memory);
extern __attribute__((dllimport)) C(Class) * __ecereNameSpace__ecere__com__eSystem_FindClass(C(Module) module, const char * name);
extern __attribute__((dllimport)) C(DefinedExpression) * __ecereNameSpace__ecere__com__eSystem_FindDefine(C(Module) module, const char * name);
extern __attribute__((dllimport)) C(GlobalFunction) * __ecereNameSpace__ecere__com__eSystem_FindFunction(C(Module) module, const char * name);
extern __attribute__((dllimport)) void * __ecereNameSpace__ecere__com__eSystem_New(uint size);
extern __attribute__((dllimport)) void * __ecereNameSpace__ecere__com__eSystem_New0(uint size);
extern __attribute__((dllimport)) C(Class) * __ecereNameSpace__ecere__com__eSystem_RegisterClass(C(ClassType) type, const char * name, const char * baseName, int size, int sizeClass, C(bool) (* Constructor)(void *), void (* Destructor)(void *), C(Module) module, C(AccessMode) declMode, C(AccessMode) inheritanceAccess);
extern __attribute__((dllimport)) C(DefinedExpression) * __ecereNameSpace__ecere__com__eSystem_RegisterDefine(const char * name, const char * value, C(Module) module, C(AccessMode) declMode);
extern __attribute__((dllimport)) C(GlobalFunction) * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(const char * name, const char * type, void * func, C(Module) module, C(AccessMode) declMode);
extern __attribute__((dllimport)) void * __ecereNameSpace__ecere__com__eSystem_Renew(void * memory, uint size);
extern __attribute__((dllimport)) void * __ecereNameSpace__ecere__com__eSystem_Renew0(void * memory, uint size);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eSystem_SetArgs(C(Application) app, int argc, char * argv[]);
extern __attribute__((dllimport)) void __ecereNameSpace__ecere__com__eSystem_SetPoolingDisabled(C(bool) disabled);

extern C(Module) __thisModule;

C(Application) eC_init(C(Module) fromModule, bool loadEcere, bool guiApp, int argc, char * argv[]);



#ifdef __cplusplus

};

#endif

#endif // !defined(__EC_H__)

