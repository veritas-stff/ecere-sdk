//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
////                                                                        //// ////////////////////////
////    EDA Module                                                          //// ////////////////////////
////                                                                        //// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////


#if !defined(__EDA_H__)
#define __EDA_H__

#define CPP11 (defined(__cplusplus) && __cplusplus >= 201103L)

#ifdef __cplusplus

extern "C" {

#endif



////////////////////////////////////////////////////////////// includes //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

#include "ecere.h"
#include "ffi.h"

#define EDA_APP_INTRO(c) \
      APP_INTRO(true) \
      ecere_init(app); \
      EDA_init(app); \
      loadTranslatedStrings(null, MODULE_NAME); \
      Instance_evolve(&app, class_ ## c);

#define EDA_GUIAPP_INTRO EDA_APP_INTRO(GuiApplication)


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////    //////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////



// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  eda  ///////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef C(Window) C(TableEditor);
typedef C(DropBox) C(TableDropBox);
typedef C(Instance) C(Table);
#if CPP11
enum C(StringSearchIndexingMethod) : int
#else
typedef int C(StringSearchIndexingMethod);
enum C(StringSearchIndexingMethod)
#endif
{
   StringSearchIndexingMethod_fullString = 0x0,
   StringSearchIndexingMethod_allSubstrings = 0x1
};

typedef C(Instance) C(SQLCustomFunction);
typedef C(Instance) C(Row);
typedef C(Instance) C(ReportRender);
typedef C(Window) C(ReportDestination);
struct CM(Report)
{
   C(Size) pageSize;
   C(Anchor) insideMarginAnchor;
   C(Array) groupings;
   C(String) title;
   C(ReportRender) render;
   subclass(Detail) reportHeader;
   subclass(Detail) reportFooter;
   subclass(Detail) pageHeader;
   subclass(Detail) pageFooter;
   subclass(Detail) rowDetail;
};
typedef C(Instance) C(Report);
#if CPP11
enum C(PageFormat) : int
#else
typedef int C(PageFormat);
enum C(PageFormat)
#endif
{
   PageFormat_custom = 0x0,
   PageFormat_letter = 0x1,
   PageFormat_legal = 0x2,
   PageFormat_ledger = 0x3
};

typedef C(Window) C(Page);
#if CPP11
enum C(Orientation) : int
#else
typedef int C(Orientation);
enum C(Orientation)
#endif
{
   Orientation_portrait = 0x0,
   Orientation_landscape = 0x1
};

typedef uint32 C(OpenOptions);
#if CPP11
enum C(ObjectType) : int
#else
typedef int C(ObjectType);
enum C(ObjectType)
#endif
{
   ObjectType_table = 0x0,
   ObjectType_view = 0x1
};

typedef C(SQLCustomFunction) C(NoCaseAccent);
#if CPP11
enum C(MoveOptions) : int
#else
typedef int C(MoveOptions);
enum C(MoveOptions)
#endif
{
   MoveOptions_nil = 0x0,
   MoveOptions_first = 0x1,
   MoveOptions_last = 0x2,
   MoveOptions_next = 0x3,
   MoveOptions_previous = 0x4,
   MoveOptions_middle = 0x5,
   MoveOptions_here = 0x6
};

#if CPP11
enum C(MatchOptions) : int
#else
typedef int C(MatchOptions);
enum C(MatchOptions)
#endif
{
   MatchOptions_nil = 0x0
};

typedef C(Instance) C(Field);
typedef C(Button) C(ButtonStyle);
struct CM(ListSection)
{
   C(Field) fldId;
   C(Field) fldName;
   C(Field) fldActive;
   C(ButtonStyle) btnNew;
   C(ButtonStyle) btnDelete;
   C(ListBox) list;
};
typedef C(Window) C(Group);
typedef C(Group) C(ListSection);
#if CPP11
enum C(IndexOrder) : int
#else
typedef int C(IndexOrder);
enum C(IndexOrder)
#endif
{
   IndexOrder_ascending = 0x0,
   IndexOrder_descending = 0x1
};

typedef C(SQLCustomFunction) C(IdListIncludes);
typedef C(SQLCustomFunction) C(IdList32Includes);
typedef C(Instance) C(IdList);
typedef C(IdList) C(IdList32);
typedef struct C(IdFilter) C(IdFilter);
typedef uint64 C(Id);
typedef C(Instance) C(Grouping);
struct CM(Grouping)
{
   C(Id) groupId;
   C(Row) row;
   C(Field) field;
   C(Field) fieldLink;
   C(bool) filtered;
   C(Array) filters;
   C(Field) listFieldLink;
   C(Field) reverseListFieldLink;
   C(Grouping) reverseLink;
   C(bool) activeOnly;
   C(Field) activeField;
   uint rowsCount;
   subclass(Detail) header;
   subclass(Detail) continuation;
   subclass(Detail) footer;
};
typedef C(NoCaseAccent) C(GetMemberString);
typedef struct C(FieldIndex) C(FieldIndex);
typedef struct C(FieldFindData) C(FieldFindData);
typedef C(DataBox) C(FieldDataBox);
typedef C(FieldDataBox) C(FieldDropDataBox);
struct CM(EditSection)
{
   C(ListSection) list;
   C(Table) table;
   C(Row) editRow;
   C(DataRow) listRow;
   C(OldList) editBoxes;
   C(Window) editArea;
   C(ButtonStyle) btnSave;
   C(ButtonStyle) btnReload;
};
typedef C(Group) C(EditSection);
typedef C(FieldDropDataBox) C(EditFieldDropDataBox);
typedef C(DataBox) C(DropDataBox);
typedef C(Instance) C(DriverRow);
typedef C(Instance) C(DataSourceDriver);
typedef C(DataSourceDriver) C(DirFilesDataSourceDriver);
typedef C(Instance) C(Database);
#if CPP11
enum C(CreateOptions) : int
#else
typedef int C(CreateOptions);
enum C(CreateOptions)
#endif
{
   CreateOptions_no = 0x0,
   CreateOptions_create = 0x1,
   CreateOptions_readOnly = 0x2
};

typedef C(Instance) C(DataSource);
// end -- moved backwards outputs
#if CPP11
enum C(AccessOptions) : int
#else
typedef int C(AccessOptions);
enum C(AccessOptions)
#endif
{
   AccessOptions_integral = 0x0,
   AccessOptions_random = 0x1
};

typedef C(ReportDestination) C(CSVReport);
#if CPP11
enum C(CheckBool) : uint;
#else
typedef C(bool) C(CheckBool);
enum C(CheckBool);
#endif



typedef struct C(OldList) C(DataList);
typedef C(Window) C(Detail);
typedef uint32 C(EDBIndexOptions);
typedef C(DropDataBox) C(EditDropDataBox);
typedef C(DataBox) C(FieldBox);
typedef C(FieldDataBox) C(FieldCheckButton);
typedef C(String) C(FixedMultiLineString);
typedef struct C(ListField) C(ListField);
typedef C(Instance) C(Lookup);
typedef struct C(LookupEditor) C(LookupEditor);
typedef C(Instance) C(MemberStringSample);
#if CPP11
enum C(OpenType) : int
#else
typedef int C(OpenType);
enum C(OpenType)
#endif
{
   OpenType_queryRows = 0x0,
   OpenType_tableRows = 0x1,
   OpenType_viewRows = 0x2,
   OpenType_processesList = 0x3,
   OpenType_databasesList = 0x4,
   OpenType_tablesList = 0x5,
   OpenType_fieldsList = 0x6
};

typedef C(ReportDestination) C(PrintedReport);
#if CPP11
enum C(RenderAction) : int
#else
typedef int C(RenderAction);
enum C(RenderAction)
#endif
{
   RenderAction_addPage = 0x0,
   RenderAction_closePage = 0x1,
   RenderAction_levelStart = 0x2,
   RenderAction_levelFinish = 0x3,
   RenderAction_groupStart = 0x4,
   RenderAction_groupFinish = 0x5,
   RenderAction_actualRows = 0x6
};

typedef C(ReportDestination) C(ReportPreviewArea);
typedef C(ReportRender) C(ReportRenderNormal);
typedef C(Window) C(ReportTitle);
typedef C(Instance) C(SQLiteSearchField);
typedef C(Instance) C(SQLiteSearchTable);
#if CPP11
enum C(SeekOptions) : int
#else
typedef int C(SeekOptions);
enum C(SeekOptions)
#endif
{
   SeekOptions_none = 0x0,
   SeekOptions_reset = 0x1,
   SeekOptions_first = 0x2,
   SeekOptions_last = 0x3,
   SeekOptions_firstEqual = 0x4,
   SeekOptions_lastEqual = 0x5
};

#if CPP11
enum C(State) : int
#else
typedef int C(State);
enum C(State)
#endif
{
   State_none = 0x0,
   State_driver = 0x1,
   State_connected = 0x2,
   State_opened = 0x3,
   State_closed = 0x4,
   State_errorDriver = 0x5
};

typedef C(Instance) C(StringList);
typedef C(Instance) C(StringSearchField);
typedef C(Instance) C(StringSearchTable);
typedef uint64_t TP(GetMemberString, NT);
extern C(bool) (* DataSource_connect)(C(DataSource) __this);

extern C(bool) (* DataSource_deleteDatabase)(C(DataSource) __this, constString name);

extern C(Database) (* DataSource_openDatabase)(C(DataSource) __this, constString name, C(CreateOptions) create);

extern C(bool) (* DataSource_renameDatabase)(C(DataSource) __this, constString name, constString rename);

extern void (* DataSource_status)(C(DataSource) __this);

extern C(Property) * PROPERTY(DataSource, driver);
extern void (* DataSource_set_driver)(C(DataSource) d, constString value);
extern constString (* DataSource_get_driver)(C(DataSource) d);

extern C(Property) * PROPERTY(DataSource, host);
extern void (* DataSource_set_host)(C(DataSource) d, constString value);
extern constString (* DataSource_get_host)(C(DataSource) d);

extern C(Property) * PROPERTY(DataSource, port);
extern void (* DataSource_set_port)(C(DataSource) d, constString value);
extern constString (* DataSource_get_port)(C(DataSource) d);

extern C(Property) * PROPERTY(DataSource, user);
extern void (* DataSource_set_user)(C(DataSource) d, constString value);
extern constString (* DataSource_get_user)(C(DataSource) d);

extern C(Property) * PROPERTY(DataSource, pass);
extern void (* DataSource_set_pass)(C(DataSource) d, constString value);
extern constString (* DataSource_get_pass)(C(DataSource) d);

extern C(Property) * PROPERTY(DataSource, locator);
extern void (* DataSource_set_locator)(C(DataSource) d, constString value);
extern constString (* DataSource_get_locator)(C(DataSource) d);

extern C(Property) * PROPERTY(DataSource, databasesCount);
extern uint (* DataSource_get_databasesCount)(C(DataSource) d);

extern C(Property) * PROPERTY(DataSource, databases);
extern C(Array) (* DataSource_get_databases)(C(DataSource) d);

extern int M_VTBLID(DataSourceDriver, buildLocator);
#define DataSourceDriver_buildLocator(__i, ds) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, buildLocator, __i, C(String), \
      C(DataSourceDriver) _ARG C(DataSource), \
      __i _ARG ds)
extern C(Method) * METHOD(DataSourceDriver, buildLocator);
extern int M_VTBLID(DataSourceDriver, connect);
#define DataSourceDriver_connect(__i, locator) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, connect, __i, C(bool), \
      C(DataSourceDriver) _ARG constString, \
      __i _ARG locator)
extern C(Method) * METHOD(DataSourceDriver, connect);
extern int M_VTBLID(DataSourceDriver, deleteDatabase);
#define DataSourceDriver_deleteDatabase(__i, name) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, deleteDatabase, __i, C(bool), \
      C(DataSourceDriver) _ARG constString, \
      __i _ARG name)
extern C(Method) * METHOD(DataSourceDriver, deleteDatabase);
extern int M_VTBLID(DataSourceDriver, getDatabases);
#define DataSourceDriver_getDatabases(__i) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, getDatabases, __i, C(Array), \
      C(DataSourceDriver), \
      __i)
extern C(Method) * METHOD(DataSourceDriver, getDatabases);
extern int M_VTBLID(DataSourceDriver, getDatabasesCount);
#define DataSourceDriver_getDatabasesCount(__i) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, getDatabasesCount, __i, uint, \
      C(DataSourceDriver), \
      __i)
extern C(Method) * METHOD(DataSourceDriver, getDatabasesCount);
extern int M_VTBLID(DataSourceDriver, openDatabase);
#define DataSourceDriver_openDatabase(__i, name, create, ds) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, openDatabase, __i, C(Database), \
      C(DataSourceDriver) _ARG constString _ARG C(CreateOptions) _ARG C(DataSource), \
      __i _ARG name _ARG create _ARG ds)
extern C(Method) * METHOD(DataSourceDriver, openDatabase);
extern int M_VTBLID(DataSourceDriver, renameDatabase);
#define DataSourceDriver_renameDatabase(__i, name, rename) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, renameDatabase, __i, C(bool), \
      C(DataSourceDriver) _ARG constString _ARG constString, \
      __i _ARG name _ARG rename)
extern C(Method) * METHOD(DataSourceDriver, renameDatabase);
extern int M_VTBLID(DataSourceDriver, status);
#define DataSourceDriver_status(__i) \
   VMETHOD(CO(DataSourceDriver), DataSourceDriver, status, __i, void, \
      C(DataSourceDriver), \
      __i)
extern C(Method) * METHOD(DataSourceDriver, status);
extern int M_VTBLID(Database, begin);
#define Database_begin(__i) \
   VMETHOD(CO(Database), Database, begin, __i, C(bool), \
      C(Database), \
      __i)
extern C(Method) * METHOD(Database, begin);
extern int M_VTBLID(Database, commit);
#define Database_commit(__i) \
   VMETHOD(CO(Database), Database, commit, __i, C(bool), \
      C(Database), \
      __i)
extern C(Method) * METHOD(Database, commit);
extern int M_VTBLID(Database, createCustomFunction);
#define Database_createCustomFunction(__i, name, customFunction) \
   VMETHOD(CO(Database), Database, createCustomFunction, __i, C(bool), \
      C(Database) _ARG const char * _ARG C(SQLCustomFunction), \
      __i _ARG name _ARG customFunction)
extern C(Method) * METHOD(Database, createCustomFunction);
extern int M_VTBLID(Database, deleteObject);
#define Database_deleteObject(__i, type, name) \
   VMETHOD(CO(Database), Database, deleteObject, __i, C(bool), \
      C(Database) _ARG C(ObjectType) _ARG constString, \
      __i _ARG type _ARG name)
extern C(Method) * METHOD(Database, deleteObject);
extern int M_VTBLID(Database, getName);
#define Database_getName(__i) \
   VMETHOD(CO(Database), Database, getName, __i, C(String), \
      C(Database), \
      __i)
extern C(Method) * METHOD(Database, getName);
extern int M_VTBLID(Database, getTables);
#define Database_getTables(__i) \
   VMETHOD(CO(Database), Database, getTables, __i, C(Array), \
      C(Database), \
      __i)
extern C(Method) * METHOD(Database, getTables);
extern void (* Database_linkTable)(C(Database) __this, C(Table) tbl);

extern int M_VTBLID(Database, objectsCount);
#define Database_objectsCount(__i, type) \
   VMETHOD(CO(Database), Database, objectsCount, __i, uint, \
      C(Database) _ARG C(ObjectType), \
      __i _ARG type)
extern C(Method) * METHOD(Database, objectsCount);
extern int M_VTBLID(Database, openTable);
#define Database_openTable(__i, name, open) \
   VMETHOD(CO(Database), Database, openTable, __i, C(Table), \
      C(Database) _ARG constString _ARG C(OpenOptions), \
      __i _ARG name _ARG open)
extern C(Method) * METHOD(Database, openTable);
extern int M_VTBLID(Database, renameObject);
#define Database_renameObject(__i, type, name, rename) \
   VMETHOD(CO(Database), Database, renameObject, __i, C(bool), \
      C(Database) _ARG C(ObjectType) _ARG constString _ARG constString, \
      __i _ARG type _ARG name _ARG rename)
extern C(Method) * METHOD(Database, renameObject);
extern C(Property) * PROPERTY(Database, name);
extern C(String) (* Database_get_name)(C(Database) d);

extern C(Property) * PROPERTY(Database, tablesCount);
extern uint (* Database_get_tablesCount)(C(Database) d);

extern C(Property) * PROPERTY(Database, viewsCount);
extern uint (* Database_get_viewsCount)(C(Database) d);

extern C(Property) * PROPERTY(Database, tables);
extern C(Array) (* Database_get_tables)(C(Database) d);

struct CM(Detail)
{
   C(bool) keepTogether;
   C(bool) isLast;
   int level;
   subclass(Detail) rowDetail;
};
struct CM(DirFilesDataSourceDriver)
{
   constString path;
   constString databaseFileExt;
   constString tableFileExt;
};
extern int M_VTBLID(DirFilesDataSourceDriver, isDatabaseFile);
#define DirFilesDataSourceDriver_isDatabaseFile(__i, fullPath) \
   VMETHOD(CO(DirFilesDataSourceDriver), DirFilesDataSourceDriver, isDatabaseFile, __i, C(bool), \
      C(DirFilesDataSourceDriver) _ARG const char *, \
      __i _ARG fullPath)
extern C(Method) * METHOD(DirFilesDataSourceDriver, isDatabaseFile);
extern C(String) (* DirFilesDataSourceDriver_makeDatabasePath)(C(DirFilesDataSourceDriver) __this, constString name);

extern int M_VTBLID(DriverRow, add);
#define DriverRow_add(__i, id) \
   VMETHOD(CO(DriverRow), DriverRow, add, __i, C(bool), \
      C(DriverRow) _ARG uint64, \
      __i _ARG id)
extern C(Method) * METHOD(DriverRow, add);
extern int M_VTBLID(DriverRow, bindQueryData);
#define DriverRow_bindQueryData(__i, paramID, fld, class_value, value) \
   VMETHOD(CO(DriverRow), DriverRow, bindQueryData, __i, C(bool), \
      C(DriverRow) _ARG int _ARG C(Field) _ARG C(Class) * _ARG void *, \
      __i _ARG paramID _ARG fld _ARG class_value _ARG value)
extern C(Method) * METHOD(DriverRow, bindQueryData);
extern int M_VTBLID(DriverRow, delete);
#define DriverRow_delete(__i) \
   VMETHOD(CO(DriverRow), DriverRow, delete, __i, C(bool), \
      C(DriverRow), \
      __i)
extern C(Method) * METHOD(DriverRow, delete);
extern int M_VTBLID(DriverRow, find);
#define DriverRow_find(__i, fld, move, match, class_data, data) \
   VMETHOD(CO(DriverRow), DriverRow, find, __i, C(bool), \
      C(DriverRow) _ARG C(Field) _ARG C(MoveOptions) _ARG C(MatchOptions) _ARG C(Class) * _ARG void *, \
      __i _ARG fld _ARG move _ARG match _ARG class_data _ARG data)
extern C(Method) * METHOD(DriverRow, find);
extern int M_VTBLID(DriverRow, findMultiple);
#define DriverRow_findMultiple(__i, findData, move, numFields) \
   VMETHOD(CO(DriverRow), DriverRow, findMultiple, __i, C(bool), \
      C(DriverRow) _ARG C(FieldFindData) * _ARG C(MoveOptions) _ARG int, \
      __i _ARG findData _ARG move _ARG numFields)
extern C(Method) * METHOD(DriverRow, findMultiple);
extern int M_VTBLID(DriverRow, getColumn);
#define DriverRow_getColumn(__i, paramID) \
   VMETHOD(CO(DriverRow), DriverRow, getColumn, __i, const char *, \
      C(DriverRow) _ARG int, \
      __i _ARG paramID)
extern C(Method) * METHOD(DriverRow, getColumn);
extern int M_VTBLID(DriverRow, getData);
#define DriverRow_getData(__i, fld, class_data, data) \
   VMETHOD(CO(DriverRow), DriverRow, getData, __i, C(bool), \
      C(DriverRow) _ARG C(Field) _ARG C(Class) * _ARG void *, \
      __i _ARG fld _ARG class_data _ARG data)
extern C(Method) * METHOD(DriverRow, getData);
extern int M_VTBLID(DriverRow, getQueryData);
#define DriverRow_getQueryData(__i, paramID, fld, class_value, value) \
   VMETHOD(CO(DriverRow), DriverRow, getQueryData, __i, C(bool), \
      C(DriverRow) _ARG int _ARG C(Field) _ARG C(Class) * _ARG void *, \
      __i _ARG paramID _ARG fld _ARG class_value _ARG value)
extern C(Method) * METHOD(DriverRow, getQueryData);
extern int M_VTBLID(DriverRow, getSysID);
#define DriverRow_getSysID(__i) \
   VMETHOD(CO(DriverRow), DriverRow, getSysID, __i, uint64, \
      C(DriverRow), \
      __i)
extern C(Method) * METHOD(DriverRow, getSysID);
extern int M_VTBLID(DriverRow, goToSysID);
#define DriverRow_goToSysID(__i, id) \
   VMETHOD(CO(DriverRow), DriverRow, goToSysID, __i, C(bool), \
      C(DriverRow) _ARG uint64, \
      __i _ARG id)
extern C(Method) * METHOD(DriverRow, goToSysID);
extern int M_VTBLID(DriverRow, nil);
#define DriverRow_nil(__i) \
   VMETHOD(CO(DriverRow), DriverRow, nil, __i, C(bool), \
      C(DriverRow), \
      __i)
extern C(Method) * METHOD(DriverRow, nil);
extern int M_VTBLID(DriverRow, query);
#define DriverRow_query(__i, queryString) \
   VMETHOD(CO(DriverRow), DriverRow, query, __i, C(bool), \
      C(DriverRow) _ARG const char *, \
      __i _ARG queryString)
extern C(Method) * METHOD(DriverRow, query);
extern int M_VTBLID(DriverRow, select);
#define DriverRow_select(__i, move) \
   VMETHOD(CO(DriverRow), DriverRow, select, __i, C(bool), \
      C(DriverRow) _ARG C(MoveOptions), \
      __i _ARG move)
extern C(Method) * METHOD(DriverRow, select);
extern int M_VTBLID(DriverRow, setData);
#define DriverRow_setData(__i, fld, class_data, data) \
   VMETHOD(CO(DriverRow), DriverRow, setData, __i, C(bool), \
      C(DriverRow) _ARG C(Field) _ARG C(Class) * _ARG void *, \
      __i _ARG fld _ARG class_data _ARG data)
extern C(Method) * METHOD(DriverRow, setData);
extern int M_VTBLID(DriverRow, setQueryParam);
#define DriverRow_setQueryParam(__i, paramID, value) \
   VMETHOD(CO(DriverRow), DriverRow, setQueryParam, __i, C(bool), \
      C(DriverRow) _ARG int _ARG int, \
      __i _ARG paramID _ARG value)
extern C(Method) * METHOD(DriverRow, setQueryParam);
extern int M_VTBLID(DriverRow, setQueryParam64);
#define DriverRow_setQueryParam64(__i, paramID, value) \
   VMETHOD(CO(DriverRow), DriverRow, setQueryParam64, __i, C(bool), \
      C(DriverRow) _ARG int _ARG int64, \
      __i _ARG paramID _ARG value)
extern C(Method) * METHOD(DriverRow, setQueryParam64);
extern int M_VTBLID(DriverRow, setQueryParamObject);
#define DriverRow_setQueryParamObject(__i, paramID, data, type) \
   VMETHOD(CO(DriverRow), DriverRow, setQueryParamObject, __i, C(bool), \
      C(DriverRow) _ARG int _ARG const void * _ARG C(Class) *, \
      __i _ARG paramID _ARG data _ARG type)
extern C(Method) * METHOD(DriverRow, setQueryParamObject);
extern int M_VTBLID(DriverRow, setQueryParamText);
#define DriverRow_setQueryParamText(__i, paramID, value) \
   VMETHOD(CO(DriverRow), DriverRow, setQueryParamText, __i, C(bool), \
      C(DriverRow) _ARG int _ARG const char *, \
      __i _ARG paramID _ARG value)
extern C(Method) * METHOD(DriverRow, setQueryParamText);
extern int M_VTBLID(DriverRow, synch);
#define DriverRow_synch(__i, to) \
   VMETHOD(CO(DriverRow), DriverRow, synch, __i, C(bool), \
      C(DriverRow) _ARG C(DriverRow), \
      __i _ARG to)
extern C(Method) * METHOD(DriverRow, synch);
extern void (* DropDataBox_refill)(C(DropDataBox) __this);

extern int M_VTBLID(DropDataBox, refillFunction);
#define DropDataBox_refillFunction(__i, __t) \
   VMETHOD(CO(DropDataBox), DropDataBox, refillFunction, __i, void, \
      C(TableDropBox), \
      __t)
extern C(Method) * METHOD(DropDataBox, refillFunction);
extern C(Property) * PROPERTY(DropDataBox, filter);
extern void (* DropDataBox_set_filter)(C(DropDataBox) d, C(Id) value);
extern C(Id) (* DropDataBox_get_filter)(C(DropDataBox) d);

extern C(Property) * PROPERTY(DropDataBox, filtered);
extern void (* DropDataBox_set_filtered)(C(DropDataBox) d, C(bool) value);

extern C(Property) * PROPERTY(DropDataBox, exclusion);
extern void (* DropDataBox_set_exclusion)(C(DropDataBox) d, C(Id) value);

extern C(Property) * PROPERTY(DropDataBox, filterField);
extern void (* DropDataBox_set_filterField)(C(DropDataBox) d, C(Field) value);

extern C(Property) * PROPERTY(DropDataBox, nameField);
extern void (* DropDataBox_set_nameField)(C(DropDataBox) d, C(Field) value);

extern C(Property) * PROPERTY(DropDataBox, showNone);
extern void (* DropDataBox_set_showNone)(C(DropDataBox) d, C(bool) value);

#define EDBINDEXOPTIONS_saveIndex_SHIFT                  0
#define EDBINDEXOPTIONS_saveIndex_MASK                   0x1
#define EDBINDEXOPTIONS_saveIndex(x)                     ((((EDBIndexOptions)(x)) & EDBINDEXOPTIONS_saveIndex_MASK) >> EDBINDEXOPTIONS_saveIndex_SHIFT)
#define EDBINDEXOPTIONS_SET_saveIndex(x, saveIndex)              (x) = ((EDBIndexOptions)(x) & ~((EDBIndexOptions)EDBINDEXOPTIONS_saveIndex_MASK)) | (((EDBIndexOptions)(saveIndex)) << EDBINDEXOPTIONS_saveIndex_SHIFT)
#define EDBINDEXOPTIONS_deleteIndex_SHIFT                1
#define EDBINDEXOPTIONS_deleteIndex_MASK                 0x2
#define EDBINDEXOPTIONS_deleteIndex(x)                   ((((EDBIndexOptions)(x)) & EDBINDEXOPTIONS_deleteIndex_MASK) >> EDBINDEXOPTIONS_deleteIndex_SHIFT)
#define EDBINDEXOPTIONS_SET_deleteIndex(x, deleteIndex)            (x) = ((EDBIndexOptions)(x) & ~((EDBIndexOptions)EDBINDEXOPTIONS_deleteIndex_MASK)) | (((EDBIndexOptions)(deleteIndex)) << EDBINDEXOPTIONS_deleteIndex_SHIFT)
#define EDBINDEXOPTIONS(saveIndex, deleteIndex)                           ((((EDBIndexOptions)(saveIndex)) << EDBINDEXOPTIONS_saveIndex_SHIFT) | ((EDBIndexOptions)(deleteIndex)) << EDBINDEXOPTIONS_deleteIndex_SHIFT)


extern int M_VTBLID(EditFieldDropDataBox, onAddTextEntry);
#define EditFieldDropDataBox_onAddTextEntry(__i, row, dropBox, entry) \
   VMETHOD(CO(EditFieldDropDataBox), EditFieldDropDataBox, onAddTextEntry, __i, C(bool), \
      C(EditFieldDropDataBox) _ARG C(Row) _ARG C(TableDropBox) _ARG const char *, \
      __i _ARG row _ARG dropBox _ARG entry)
extern C(Method) * METHOD(EditFieldDropDataBox, onAddTextEntry);
extern void (* EditSection_addFieldEditor)(C(EditSection) __this, C(FieldDataBox) box);

extern void (* EditSection_editClear)(C(EditSection) __this);

extern void (* EditSection_editLoad)(C(EditSection) __this);

extern void (* EditSection_editNew)(C(EditSection) __this);

extern void (* EditSection_editSave)(C(EditSection) __this);

extern void (* EditSection_initFields)(C(EditSection) __this);

extern int M_VTBLID(EditSection, notifyEditClear);
#define EditSection_notifyEditClear(__i, __t, editSection) \
   VMETHOD(CO(EditSection), EditSection, notifyEditClear, __i, void, \
      C(Window) _ARG C(EditSection), \
      __t _ARG editSection)
extern C(Method) * METHOD(EditSection, notifyEditClear);
extern int M_VTBLID(EditSection, notifyEditLoad);
#define EditSection_notifyEditLoad(__i, __t, editSection) \
   VMETHOD(CO(EditSection), EditSection, notifyEditLoad, __i, void, \
      C(Window) _ARG C(EditSection), \
      __t _ARG editSection)
extern C(Method) * METHOD(EditSection, notifyEditLoad);
extern int M_VTBLID(EditSection, notifyEditSave);
#define EditSection_notifyEditSave(__i, __t, edit, name) \
   VMETHOD(CO(EditSection), EditSection, notifyEditSave, __i, void, \
      C(Window) _ARG C(EditSection) _ARG C(String), \
      __t _ARG edit _ARG name)
extern C(Method) * METHOD(EditSection, notifyEditSave);
extern int M_VTBLID(EditSection, notifyInitFields);
#define EditSection_notifyInitFields(__i, __t, editSection) \
   VMETHOD(CO(EditSection), EditSection, notifyInitFields, __i, void, \
      C(Window) _ARG C(EditSection), \
      __t _ARG editSection)
extern C(Method) * METHOD(EditSection, notifyInitFields);
extern C(Property) * PROPERTY(EditSection, table);
extern void (* EditSection_set_table)(C(EditSection) e, C(Table) value);

extern C(bool) (* Field_getData)(C(Field) __this, C(Row) row, C(Class) * class_data, void * data);

extern int M_VTBLID(Field, getLength);
#define Field_getLength(__i) \
   VMETHOD(CO(Field), Field, getLength, __i, int, \
      C(Field), \
      __i)
extern C(Method) * METHOD(Field, getLength);
extern int M_VTBLID(Field, getName);
#define Field_getName(__i) \
   VMETHOD(CO(Field), Field, getName, __i, constString, \
      C(Field), \
      __i)
extern C(Method) * METHOD(Field, getName);
extern int M_VTBLID(Field, getNext);
#define Field_getNext(__i) \
   VMETHOD(CO(Field), Field, getNext, __i, C(Field), \
      C(Field), \
      __i)
extern C(Method) * METHOD(Field, getNext);
extern int M_VTBLID(Field, getPrev);
#define Field_getPrev(__i) \
   VMETHOD(CO(Field), Field, getPrev, __i, C(Field), \
      C(Field), \
      __i)
extern C(Method) * METHOD(Field, getPrev);
extern int M_VTBLID(Field, getTable);
#define Field_getTable(__i) \
   VMETHOD(CO(Field), Field, getTable, __i, C(Table), \
      C(Field), \
      __i)
extern C(Method) * METHOD(Field, getTable);
extern int M_VTBLID(Field, getType);
#define Field_getType(__i) \
   VMETHOD(CO(Field), Field, getType, __i, C(Class) *, \
      C(Field), \
      __i)
extern C(Method) * METHOD(Field, getType);
extern C(bool) (* Field_setData)(C(Field) __this, C(Row) row, C(Class) * class_data, void * data);

extern C(Property) * PROPERTY(Field, name);
extern constString (* Field_get_name)(C(Field) f);

extern C(Property) * PROPERTY(Field, type);
extern C(Class) * (* Field_get_type)(C(Field) f);

extern C(Property) * PROPERTY(Field, length);
extern int (* Field_get_length)(C(Field) f);

extern C(Property) * PROPERTY(Field, prev);
extern C(Field) (* Field_get_prev)(C(Field) f);

extern C(Property) * PROPERTY(Field, next);
extern C(Field) (* Field_get_next)(C(Field) f);

extern C(Property) * PROPERTY(Field, table);
extern C(Table) (* Field_get_table)(C(Field) f);

extern C(Property) * PROPERTY(FieldBox, editor);
extern void (* FieldBox_set_editor)(C(FieldBox) f, C(TableEditor) value);

extern C(Property) * PROPERTY(FieldBox, field);
extern void (* FieldBox_set_field)(C(FieldBox) f, C(Field) value);

extern void (* FieldDataBox_clear)(C(FieldDataBox) __this);

extern void (* FieldDataBox_init)(C(FieldDataBox) __this);

extern void (* FieldDataBox_load)(C(FieldDataBox) __this);

extern int M_VTBLID(FieldDataBox, save);
#define FieldDataBox_save(__i) \
   VMETHOD(CO(FieldDataBox), FieldDataBox, save, __i, void, \
      C(FieldDataBox), \
      __i)
extern C(Method) * METHOD(FieldDataBox, save);
extern C(Property) * PROPERTY(FieldDataBox, row);
extern void (* FieldDataBox_set_row)(C(FieldDataBox) f, C(Row) value);
extern C(Row) (* FieldDataBox_get_row)(C(FieldDataBox) f);

extern C(Property) * PROPERTY(FieldDataBox, editor);
extern void (* FieldDataBox_set_editor)(C(FieldDataBox) f, C(EditSection) value);

extern C(Property) * PROPERTY(FieldDataBox, field);
extern void (* FieldDataBox_set_field)(C(FieldDataBox) f, C(Field) value);

extern void (* FieldDropDataBox_refill)(C(FieldDropDataBox) __this);

extern int M_VTBLID(FieldDropDataBox, refillFunction);
#define FieldDropDataBox_refillFunction(__i, __t) \
   VMETHOD(CO(FieldDropDataBox), FieldDropDataBox, refillFunction, __i, void, \
      C(TableDropBox), \
      __t)
extern C(Method) * METHOD(FieldDropDataBox, refillFunction);
extern C(Property) * PROPERTY(FieldDropDataBox, filter);
extern void (* FieldDropDataBox_set_filter)(C(FieldDropDataBox) f, C(Id) value);
extern C(Id) (* FieldDropDataBox_get_filter)(C(FieldDropDataBox) f);

extern C(Property) * PROPERTY(FieldDropDataBox, filtered);
extern void (* FieldDropDataBox_set_filtered)(C(FieldDropDataBox) f, C(bool) value);

extern C(Property) * PROPERTY(FieldDropDataBox, exclusion);
extern void (* FieldDropDataBox_set_exclusion)(C(FieldDropDataBox) f, C(Id) value);

extern C(Property) * PROPERTY(FieldDropDataBox, filterField);
extern void (* FieldDropDataBox_set_filterField)(C(FieldDropDataBox) f, C(Field) value);

extern C(Property) * PROPERTY(FieldDropDataBox, nameField);
extern void (* FieldDropDataBox_set_nameField)(C(FieldDropDataBox) f, C(Field) value);

extern C(Property) * PROPERTY(FieldDropDataBox, showNone);
extern void (* FieldDropDataBox_set_showNone)(C(FieldDropDataBox) f, C(bool) value);

struct C(FieldFindData)
{
   C(Field) field;
   C(DataValue) value;
};
struct C(FieldIndex)
{
   C(Field) field;
   C(IndexOrder) order;
   C(Field) memberField;
   C(Table) memberTable;
   C(Field) memberIdField;
};
extern C(String) (* GetMemberString_function)(C(GetMemberString) __this, TP(GetMemberString, NT) pn);

struct CM(Group)
{
   C(Label) title;
};
extern int M_VTBLID(Grouping, advance);
#define Grouping_advance(__i, groupings, level, dontAdvance) \
   VMETHOD(CO(Grouping), Grouping, advance, __i, C(bool), \
      C(Grouping) _ARG C(Array) _ARG int _ARG C(bool) *, \
      __i _ARG groupings _ARG level _ARG dontAdvance)
extern C(Method) * METHOD(Grouping, advance);
extern int M_VTBLID(Grouping, shouldSkip);
#define Grouping_shouldSkip(__i) \
   VMETHOD(CO(Grouping), Grouping, shouldSkip, __i, C(bool), \
      C(Grouping), \
      __i)
extern C(Method) * METHOD(Grouping, shouldSkip);
struct C(IdFilter)
{
   C(Id) id;
   C(Field) field;
};
extern C(bool) (* IdFilter_rowMatch)(C(IdFilter) * __this, C(Row) row);

struct CM(IdList)
{
   int count;
   C(Id) * ids;
};
extern C(bool) (* IdList_add)(C(IdList) __this, C(Id) id);

extern void (* IdList_clear)(C(IdList) __this);

extern C(bool) (* IdList_delete)(C(IdList) __this, C(Id) id);

extern C(bool) (* IdList_includes)(C(IdList) __this, C(Id) id);

extern C(bool) (* IdList32Includes_function)(C(IdList32Includes) __this, C(IdList32) list, C(Id) id);

extern C(bool) (* IdListIncludes_function)(C(IdListIncludes) __this, C(IdList) list, C(Id) id);

struct C(ListField)
{
   C(Field) field;
   C(DataField) dataField;
   C(Field) lookupFindField;
   C(Field) lookupValueField;
   C(Table) lookupFindIndex;
   C(String) (* CustomLookup)(C(Id));
};
extern C(bool) (* ListSection_filterNotifyChanged)(C(ListSection) __this, C(DataBox) dataBox, C(bool) closeDropDown);

extern int M_VTBLID(ListSection, notifyDeleteConfirmation);
#define ListSection_notifyDeleteConfirmation(__i, __t, listSection) \
   VMETHOD(CO(ListSection), ListSection, notifyDeleteConfirmation, __i, C(bool), \
      C(Window) _ARG C(ListSection), \
      __t _ARG listSection)
extern C(Method) * METHOD(ListSection, notifyDeleteConfirmation);
extern int M_VTBLID(ListSection, notifyDeleted);
#define ListSection_notifyDeleted(__i, __t, listSection) \
   VMETHOD(CO(ListSection), ListSection, notifyDeleted, __i, void, \
      C(Window) _ARG C(ListSection), \
      __t _ARG listSection)
extern C(Method) * METHOD(ListSection, notifyDeleted);
extern int M_VTBLID(ListSection, notifyDeleting);
#define ListSection_notifyDeleting(__i, __t, listSection) \
   VMETHOD(CO(ListSection), ListSection, notifyDeleting, __i, void, \
      C(Window) _ARG C(ListSection), \
      __t _ARG listSection)
extern C(Method) * METHOD(ListSection, notifyDeleting);
extern int M_VTBLID(ListSection, notifyNew);
#define ListSection_notifyNew(__i, __t, listSection, r) \
   VMETHOD(CO(ListSection), ListSection, notifyNew, __i, C(bool), \
      C(Window) _ARG C(ListSection) _ARG C(Row), \
      __t _ARG listSection _ARG r)
extern C(Method) * METHOD(ListSection, notifyNew);
extern int M_VTBLID(ListSection, notifyRefillList);
#define ListSection_notifyRefillList(__i, __t, listSection, r) \
   VMETHOD(CO(ListSection), ListSection, notifyRefillList, __i, void, \
      C(Window) _ARG C(ListSection) _ARG C(Row), \
      __t _ARG listSection _ARG r)
extern C(Method) * METHOD(ListSection, notifyRefillList);
extern int M_VTBLID(ListSection, notifySaveConfirmation);
#define ListSection_notifySaveConfirmation(__i, __t, listSection) \
   VMETHOD(CO(ListSection), ListSection, notifySaveConfirmation, __i, C(DialogResult), \
      C(Window) _ARG C(ListSection), \
      __t _ARG listSection)
extern C(Method) * METHOD(ListSection, notifySaveConfirmation);
extern int M_VTBLID(ListSection, notifySelectListRow);
#define ListSection_notifySelectListRow(__i, __t, listSection, id) \
   VMETHOD(CO(ListSection), ListSection, notifySelectListRow, __i, void, \
      C(Window) _ARG C(ListSection) _ARG C(Id), \
      __t _ARG listSection _ARG id)
extern C(Method) * METHOD(ListSection, notifySelectListRow);
extern void (* ListSection_refillList)(C(ListSection) __this);

extern void (* ListSection_refreshState)(C(ListSection) __this);

extern void (* ListSection_selectFirst)(C(ListSection) __this);

extern void (* ListSection_selectListRow)(C(ListSection) __this, C(DataRow) row);

extern C(Property) * PROPERTY(ListSection, editor);
extern void (* ListSection_set_editor)(C(ListSection) l, C(EditSection) value);

extern C(Property) * PROPERTY(ListSection, table);
extern void (* ListSection_set_table)(C(ListSection) l, C(Table) value);

struct CM(Lookup)
{
   C(Field) valueField;
   C(Field) findField;
   C(Table) findIndex;
};
struct C(LookupEditor)
{
   subclass(TableEditor) editorClass;
   C(Window) parentWindow;
   C(Field) lookupValueField;
   C(Field) lookupFindField;
   C(Field) lookupIdField;
   C(Table) lookupFindIndex;
};
extern C(String) (* NoCaseAccent_function)(C(NoCaseAccent) __this, C(String) text);

#define OPENOPTIONS_type_SHIFT                           0
#define OPENOPTIONS_type_MASK                            0xFF
#define OPENOPTIONS_type(x)                              ((((OpenOptions)(x)) & OPENOPTIONS_type_MASK) >> OPENOPTIONS_type_SHIFT)
#define OPENOPTIONS_SET_type(x, type)                       (x) = ((OpenOptions)(x) & ~((OpenOptions)OPENOPTIONS_type_MASK)) | (((OpenOptions)(type)) << OPENOPTIONS_type_SHIFT)
#define OPENOPTIONS_create_SHIFT                         8
#define OPENOPTIONS_create_MASK                          0x300
#define OPENOPTIONS_create(x)                            ((((OpenOptions)(x)) & OPENOPTIONS_create_MASK) >> OPENOPTIONS_create_SHIFT)
#define OPENOPTIONS_SET_create(x, create)                     (x) = ((OpenOptions)(x) & ~((OpenOptions)OPENOPTIONS_create_MASK)) | (((OpenOptions)(create)) << OPENOPTIONS_create_SHIFT)
#define OPENOPTIONS_access_SHIFT                         10
#define OPENOPTIONS_access_MASK                          0xC00
#define OPENOPTIONS_access(x)                            ((((OpenOptions)(x)) & OPENOPTIONS_access_MASK) >> OPENOPTIONS_access_SHIFT)
#define OPENOPTIONS_SET_access(x, access)                     (x) = ((OpenOptions)(x) & ~((OpenOptions)OPENOPTIONS_access_MASK)) | (((OpenOptions)(access)) << OPENOPTIONS_access_SHIFT)
#define OPENOPTIONS(type, create, access)                             (((((OpenOptions)(type)) << OPENOPTIONS_type_SHIFT) | ((OpenOptions)(create)) << OPENOPTIONS_create_SHIFT) | ((OpenOptions)(access)) << OPENOPTIONS_access_SHIFT)


struct CM(Page)
{
   C(Window) inside;
   int headerHeight;
};
extern C(Property) * PROPERTY(Page, report);
extern void (* Page_set_report)(C(Page) p, C(Report) value);
extern C(Report) (* Page_get_report)(C(Page) p);

extern int M_VTBLID(Report, advance);
#define Report_advance(__i, level, dontAdvance) \
   VMETHOD(CO(Report), Report, advance, __i, C(bool), \
      C(Report) _ARG int _ARG C(bool) *, \
      __i _ARG level _ARG dontAdvance)
extern C(Method) * METHOD(Report, advance);
extern int M_VTBLID(Report, executeData);
#define Report_executeData(__i, db) \
   VMETHOD(CO(Report), Report, executeData, __i, C(bool), \
      C(Report) _ARG C(Database), \
      __i _ARG db)
extern C(Method) * METHOD(Report, executeData);
extern int M_VTBLID(Report, executeRowData);
#define Report_executeRowData(__i, group) \
   VMETHOD(CO(Report), Report, executeRowData, __i, void, \
      C(Report) _ARG int, \
      __i _ARG group)
extern C(Method) * METHOD(Report, executeRowData);
extern int M_VTBLID(Report, onReset);
#define Report_onReset(__i) \
   VMETHOD(CO(Report), Report, onReset, __i, void, \
      C(Report), \
      __i)
extern C(Method) * METHOD(Report, onReset);
extern C(Property) * PROPERTY(Report, orientation);
extern void (* Report_set_orientation)(C(Report) r, C(Orientation) value);
extern C(Orientation) (* Report_get_orientation)(C(Report) r);

extern C(Property) * PROPERTY(Report, pageFormat);
extern void (* Report_set_pageFormat)(C(Report) r, C(PageFormat) value);
extern C(PageFormat) (* Report_get_pageFormat)(C(Report) r);

extern C(Property) * PROPERTY(Report, title);
extern void (* Report_set_title)(C(Report) r, constString value);

extern C(Property) * PROPERTY(Report, nil);
extern C(bool) (* Report_get_nil)(C(Report) r);

extern int M_VTBLID(ReportDestination, addPage);
#define ReportDestination_addPage(__i, page) \
   VMETHOD(CO(ReportDestination), ReportDestination, addPage, __i, void, \
      C(ReportDestination) _ARG C(Page), \
      __i _ARG page)
extern C(Method) * METHOD(ReportDestination, addPage);
extern int M_VTBLID(ReportDestination, endPage);
#define ReportDestination_endPage(__i, page) \
   VMETHOD(CO(ReportDestination), ReportDestination, endPage, __i, void, \
      C(ReportDestination) _ARG C(Page), \
      __i _ARG page)
extern C(Method) * METHOD(ReportDestination, endPage);
extern int M_VTBLID(ReportDestination, getReport);
#define ReportDestination_getReport(__i) \
   VMETHOD(CO(ReportDestination), ReportDestination, getReport, __i, C(Report), \
      C(ReportDestination), \
      __i)
extern C(Method) * METHOD(ReportDestination, getReport);
extern C(Property) * PROPERTY(ReportDestination, report);
extern void (* ReportDestination_set_report)(C(ReportDestination) r, C(Report) value);
extern C(Report) (* ReportDestination_get_report)(C(ReportDestination) r);

extern int M_VTBLID(ReportRender, getPageNumber);
#define ReportRender_getPageNumber(__i) \
   VMETHOD(CO(ReportRender), ReportRender, getPageNumber, __i, int, \
      C(ReportRender), \
      __i)
extern C(Method) * METHOD(ReportRender, getPageNumber);
extern int M_VTBLID(ReportRender, render);
#define ReportRender_render(__i, destination, report) \
   VMETHOD(CO(ReportRender), ReportRender, render, __i, void, \
      C(ReportRender) _ARG C(ReportDestination) _ARG C(Report), \
      __i _ARG destination _ARG report)
extern C(Method) * METHOD(ReportRender, render);
struct CM(ReportRenderNormal)
{
   int pageNumber;
   int level;
};
extern C(bool) (* Row_add)(C(Row) __this);

extern C(bool) (* Row_addID)(C(Row) __this, uint64 id);

extern C(bool) (* Row_bindQueryData)(C(Row) __this, int paramID, C(Field) fld, C(Class) * class_value, void * value);

extern C(bool) (* Row_delete)(C(Row) __this);

extern C(bool) (* Row_find)(C(Row) __this, C(Field) field, C(MoveOptions) move, C(MatchOptions) match, C(Class) * class_data, void * data);

extern C(bool) (* Row_findMultiple)(C(Row) __this, C(FieldFindData) * findData, C(MoveOptions) move, int numFields);

extern C(bool) (* Row_first)(C(Row) __this);

extern C(bool) (* Row_gUIDataRowSetData)(C(Row) __this, C(DataRow) dr, C(DataField) df, C(Field) fld);

extern const char * (* Row_getColumn)(C(Row) __this, int paramID);

extern C(bool) (* Row_getData)(C(Row) __this, C(Field) field, C(Class) * class_data, void * data);

extern C(bool) (* Row_getQueryData)(C(Row) __this, int paramID, C(Field) fld, C(Class) * class_value, void * value);

extern C(bool) (* Row_last)(C(Row) __this);

extern C(bool) (* Row_next)(C(Row) __this);

extern C(bool) (* Row_previous)(C(Row) __this);

extern C(bool) (* Row_query)(C(Row) __this, const char * query);

extern C(bool) (* Row_select)(C(Row) __this, C(MoveOptions) move);

extern C(bool) (* Row_setData)(C(Row) __this, C(Field) field, C(Class) * class_data, void * data);

extern C(bool) (* Row_setQueryParam)(C(Row) __this, int paramID, int value);

extern C(bool) (* Row_setQueryParam64)(C(Row) __this, int paramID, int64 value);

extern C(bool) (* Row_setQueryParamObject)(C(Row) __this, int paramID, void * value, C(Class) * type);

extern C(bool) (* Row_setQueryParamText)(C(Row) __this, int paramID, const char * value);

extern C(bool) (* Row_synch)(C(Row) __this, C(Row) to);

extern C(Property) * PROPERTY(Row, tbl);
extern void (* Row_set_tbl)(C(Row) r, C(Table) value);
extern C(Table) (* Row_get_tbl)(C(Row) r);

extern C(Property) * PROPERTY(Row, nil);
extern C(bool) (* Row_get_nil)(C(Row) r);

extern C(Property) * PROPERTY(Row, query);
extern void (* Row_set_query)(C(Row) r, const char * value);
extern const char * (* Row_get_query)(C(Row) r);

extern C(Property) * PROPERTY(Row, rowsCount);
extern uint (* Row_get_rowsCount)(C(Row) r);

extern C(Property) * PROPERTY(Row, sysID);
extern void (* Row_set_sysID)(C(Row) r, uint64 value);
extern uint64 (* Row_get_sysID)(C(Row) r);

struct CM(SQLCustomFunction)
{
   C(Method) * method;
   C(Class) * returnType;
   C(Array) args;
   struct _ffi_type * rType;
   C(Array) argTypes;
   C(ffi_cif) cif;
};
struct CM(SQLiteSearchField)
{
   C(Field) field;
};
struct CM(SQLiteSearchTable)
{
   C(Table) table;
   C(Field) idField;
   C(Array) searchFields;
};
struct CM(StringSearchField)
{
   C(Field) field;
   C(StringSearchIndexingMethod) method;
   C(Field) lookupFindField;
   C(Field) lookupValueField;
};
struct CM(StringSearchTable)
{
   C(Table) table;
   C(Field) idField;
   C(Array) searchFields;
};
extern int M_VTBLID(Table, addField);
#define Table_addField(__i, name, type, length) \
   VMETHOD(CO(Table), Table, addField, __i, C(Field), \
      C(Table) _ARG constString _ARG C(Class) * _ARG int, \
      __i _ARG name _ARG type _ARG length)
extern C(Method) * METHOD(Table, addField);
extern int M_VTBLID(Table, createRow);
#define Table_createRow(__i) \
   VMETHOD(CO(Table), Table, createRow, __i, C(DriverRow), \
      C(Table), \
      __i)
extern C(Method) * METHOD(Table, createRow);
extern int M_VTBLID(Table, findField);
#define Table_findField(__i, name) \
   VMETHOD(CO(Table), Table, findField, __i, C(Field), \
      C(Table) _ARG constString, \
      __i _ARG name)
extern C(Method) * METHOD(Table, findField);
extern void (* Table_gUIListBoxAddFields)(C(Table) __this, C(ListBox) list);

extern void (* Table_gUIListBoxAddRows)(C(Table) __this, C(ListBox) list);

extern void (* Table_gUIListBoxAddRowsField)(C(Table) __this, C(ListBox) list, constString fieldName);

extern int M_VTBLID(Table, generateIndex);
#define Table_generateIndex(__i, count, fieldIndexes, init) \
   VMETHOD(CO(Table), Table, generateIndex, __i, C(bool), \
      C(Table) _ARG int _ARG C(FieldIndex) * _ARG C(bool), \
      __i _ARG count _ARG fieldIndexes _ARG init)
extern C(Method) * METHOD(Table, generateIndex);
extern int M_VTBLID(Table, getFields);
#define Table_getFields(__i) \
   VMETHOD(CO(Table), Table, getFields, __i, C(Container), \
      C(Table), \
      __i)
extern C(Method) * METHOD(Table, getFields);
extern int M_VTBLID(Table, getFieldsCount);
#define Table_getFieldsCount(__i) \
   VMETHOD(CO(Table), Table, getFieldsCount, __i, uint, \
      C(Table), \
      __i)
extern C(Method) * METHOD(Table, getFieldsCount);
extern int M_VTBLID(Table, getFirstField);
#define Table_getFirstField(__i) \
   VMETHOD(CO(Table), Table, getFirstField, __i, C(Field), \
      C(Table), \
      __i)
extern C(Method) * METHOD(Table, getFirstField);
extern int M_VTBLID(Table, getName);
#define Table_getName(__i) \
   VMETHOD(CO(Table), Table, getName, __i, constString, \
      C(Table), \
      __i)
extern C(Method) * METHOD(Table, getName);
extern int M_VTBLID(Table, getPrimaryKey);
#define Table_getPrimaryKey(__i) \
   VMETHOD(CO(Table), Table, getPrimaryKey, __i, C(Field), \
      C(Table), \
      __i)
extern C(Method) * METHOD(Table, getPrimaryKey);
extern int M_VTBLID(Table, getRowsCount);
#define Table_getRowsCount(__i) \
   VMETHOD(CO(Table), Table, getRowsCount, __i, uint, \
      C(Table), \
      __i)
extern C(Method) * METHOD(Table, getRowsCount);
extern C(bool) (* Table_index)(C(Table) __this, int count, C(FieldIndex) * fieldIndexes);

extern C(Property) * PROPERTY(Table, name);
extern constString (* Table_get_name)(C(Table) t);

extern C(Property) * PROPERTY(Table, firstField);
extern C(Field) (* Table_get_firstField)(C(Table) t);

extern C(Property) * PROPERTY(Table, primaryKey);
extern C(Field) (* Table_get_primaryKey)(C(Table) t);

extern C(Property) * PROPERTY(Table, fieldsCount);
extern uint (* Table_get_fieldsCount)(C(Table) t);

extern C(Property) * PROPERTY(Table, rowsCount);
extern uint (* Table_get_rowsCount)(C(Table) t);

extern C(Property) * PROPERTY(Table, fields);
extern C(Container) (* Table_get_fields)(C(Table) t);

struct CM(TableDropBox)
{
   C(Id) filter;
   C(bool) filtered;
   C(Field) nameField;
   C(Id) exclusion;
   C(Table) table;
   C(Field) filterField;
};
extern void (* TableDropBox_editNotifyCharsAdded)(C(TableDropBox) __this);

extern void (* TableDropBox_editNotifyUpdate)(C(TableDropBox) __this, C(EditBox) editBox);

extern int M_VTBLID(TableDropBox, refill);
#define TableDropBox_refill(__i) \
   VMETHOD(CO(TableDropBox), TableDropBox, refill, __i, void, \
      C(TableDropBox), \
      __i)
extern C(Method) * METHOD(TableDropBox, refill);
extern C(Property) * PROPERTY(TableDropBox, filter);
extern void (* TableDropBox_set_filter)(C(TableDropBox) t, C(Id) value);
extern C(Id) (* TableDropBox_get_filter)(C(TableDropBox) t);

extern C(Property) * PROPERTY(TableDropBox, nameField);
extern void (* TableDropBox_set_nameField)(C(TableDropBox) t, C(Field) value);

extern C(Property) * PROPERTY(TableDropBox, exclusion);
extern void (* TableDropBox_set_exclusion)(C(TableDropBox) t, C(Id) value);

extern C(Property) * PROPERTY(TableDropBox, table);
extern void (* TableDropBox_set_table)(C(TableDropBox) t, C(Table) value);

extern C(Property) * PROPERTY(TableDropBox, filterField);
extern void (* TableDropBox_set_filterField)(C(TableDropBox) t, C(Field) value);

extern void (* TableEditor_createRow)(C(TableEditor) __this);

extern void (* TableEditor_enumerate)(C(TableEditor) __this);

extern C(bool) (* TableEditor_filter)(C(TableEditor) __this, C(Id) id);

extern C(bool) (* TableEditor_listSelect)(C(TableEditor) __this, C(DataRow) row);

extern void (* TableEditor_load)(C(TableEditor) __this);

extern C(bool) (* TableEditor_notifyClosing)(C(TableEditor) __this);

extern void (* TableEditor_notifyModifiedDocument)(C(TableEditor) __this);

extern int M_VTBLID(TableEditor, onCreateDynamicLookupEditors);
#define TableEditor_onCreateDynamicLookupEditors(__i) \
   VMETHOD(CO(TableEditor), TableEditor, onCreateDynamicLookupEditors, __i, void, \
      C(TableEditor), \
      __i)
extern C(Method) * METHOD(TableEditor, onCreateDynamicLookupEditors);
extern int M_VTBLID(TableEditor, onInitialize);
#define TableEditor_onInitialize(__i) \
   VMETHOD(CO(TableEditor), TableEditor, onInitialize, __i, void, \
      C(TableEditor), \
      __i)
extern C(Method) * METHOD(TableEditor, onInitialize);
extern int M_VTBLID(TableEditor, onLeavingModifiedDocument);
#define TableEditor_onLeavingModifiedDocument(__i) \
   VMETHOD(CO(TableEditor), TableEditor, onLeavingModifiedDocument, __i, C(DialogResult), \
      C(TableEditor), \
      __i)
extern C(Method) * METHOD(TableEditor, onLeavingModifiedDocument);
extern int M_VTBLID(TableEditor, onList);
#define TableEditor_onList(__i, r, matches) \
   VMETHOD(CO(TableEditor), TableEditor, onList, __i, void, \
      C(TableEditor) _ARG C(Row) _ARG C(Array), \
      __i _ARG r _ARG matches)
extern C(Method) * METHOD(TableEditor, onList);
extern int M_VTBLID(TableEditor, onLoad);
#define TableEditor_onLoad(__i) \
   VMETHOD(CO(TableEditor), TableEditor, onLoad, __i, void, \
      C(TableEditor), \
      __i)
extern C(Method) * METHOD(TableEditor, onLoad);
extern int M_VTBLID(TableEditor, onRemovalRequest);
#define TableEditor_onRemovalRequest(__i) \
   VMETHOD(CO(TableEditor), TableEditor, onRemovalRequest, __i, C(bool), \
      C(TableEditor), \
      __i)
extern C(Method) * METHOD(TableEditor, onRemovalRequest);
extern int M_VTBLID(TableEditor, onStateChanged);
#define TableEditor_onStateChanged(__i) \
   VMETHOD(CO(TableEditor), TableEditor, onStateChanged, __i, void, \
      C(TableEditor), \
      __i)
extern C(Method) * METHOD(TableEditor, onStateChanged);
extern void (* TableEditor_remove)(C(TableEditor) __this);

extern C(bool) (* TableEditor_select)(C(TableEditor) __this, C(Id) id);

extern void (* TableEditor_selectListRow)(C(TableEditor) __this, C(DataRow) row);

extern C(bool) (* TableEditor_selectNext)(C(TableEditor) __this, C(bool) loopAround);

extern C(bool) (* TableEditor_selectPrevious)(C(TableEditor) __this, C(bool) loopAround);

extern void (* TableEditor_write)(C(TableEditor) __this);

extern C(Property) * PROPERTY(TableEditor, table);
extern void (* TableEditor_set_table)(C(TableEditor) t, C(Table) value);
extern C(Table) (* TableEditor_get_table)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, index);
extern void (* TableEditor_set_index)(C(TableEditor) t, C(Table) value);
extern C(Table) (* TableEditor_get_index)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, list);
extern void (* TableEditor_set_list)(C(TableEditor) t, C(ListBox) value);

extern C(Property) * PROPERTY(TableEditor, listFields);
extern void (* TableEditor_set_listFields)(C(TableEditor) t, C(Array) value);

extern C(Property) * PROPERTY(TableEditor, listSortOrder);
extern void (* TableEditor_set_listSortOrder)(C(TableEditor) t, int value);
extern int (* TableEditor_get_listSortOrder)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, listSortField);
extern void (* TableEditor_set_listSortField)(C(TableEditor) t, C(DataField) value);
extern C(DataField) (* TableEditor_get_listSortField)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, disabledFullListing);
extern void (* TableEditor_set_disabledFullListing)(C(TableEditor) t, C(bool) value);
extern C(bool) (* TableEditor_get_disabledFullListing)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, searchFields);
extern void (* TableEditor_set_searchFields)(C(TableEditor) t, C(Array) value);

extern C(Property) * PROPERTY(TableEditor, searchTables);
extern void (* TableEditor_set_searchTables)(C(TableEditor) t, C(Array) value);

extern C(Property) * PROPERTY(TableEditor, sqliteSearchTables);
extern void (* TableEditor_set_sqliteSearchTables)(C(TableEditor) t, C(Array) value);

extern C(Property) * PROPERTY(TableEditor, searchString);
extern void (* TableEditor_set_searchString)(C(TableEditor) t, constString value);

extern C(Property) * PROPERTY(TableEditor, dynamicLookupEditors);
extern void (* TableEditor_set_dynamicLookupEditors)(C(TableEditor) t, C(Array) value);

extern C(Property) * PROPERTY(TableEditor, selectedId);
extern C(Id) (* TableEditor_get_selectedId)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, idField);
extern void (* TableEditor_set_idField)(C(TableEditor) t, C(Field) value);
extern C(Field) (* TableEditor_get_idField)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, stringField);
extern void (* TableEditor_set_stringField)(C(TableEditor) t, C(Field) value);
extern C(Field) (* TableEditor_get_stringField)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, indexFilterField);
extern void (* TableEditor_set_indexFilterField)(C(TableEditor) t, C(Field) value);
extern C(Field) (* TableEditor_get_indexFilterField)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, readOnly);
extern void (* TableEditor_set_readOnly)(C(TableEditor) t, C(bool) value);
extern C(bool) (* TableEditor_get_readOnly)(C(TableEditor) t);

extern C(Property) * PROPERTY(TableEditor, masterEditor);
extern void (* TableEditor_set_masterEditor)(C(TableEditor) t, C(TableEditor) value);
extern C(TableEditor) (* TableEditor_get_masterEditor)(C(TableEditor) t);

extern char * (* convertToASCII)(const char * string, char * newString, int * len, C(bool) lowerCase);
extern void (* eRSProgressAdvance)(void);
extern void (* eRSProgressAdvanceLevelCheck)(void);
extern void (* setDefaultIdField)(const char * value);
extern void (* setDefaultNameField)(const char * value);
extern void (* setEDBIndexOptions)(C(EDBIndexOptions) options);
extern char (* toASCII)(unichar ch);
extern C(Class) * CO(AccessOptions);
extern C(Class) * CO(ButtonStyle);
extern C(Class) * CO(CSVReport);
extern C(Class) * CO(CheckBool);
extern C(Class) * CO(CreateOptions);
extern C(Class) * CO(DataList);
extern C(Class) * CO(DataSource);
extern C(Class) * CO(DataSourceDriver);
extern C(Class) * CO(Database);
extern C(Class) * CO(Detail);
extern C(Class) * CO(DirFilesDataSourceDriver);
extern C(Class) * CO(DriverRow);
extern C(Class) * CO(DropDataBox);
extern C(Class) * CO(EDBIndexOptions);
extern C(Class) * CO(EditDropDataBox);
extern C(Class) * CO(EditFieldDropDataBox);
extern C(Class) * CO(EditSection);
extern C(Class) * CO(Field);
extern C(Class) * CO(FieldBox);
extern C(Class) * CO(FieldCheckButton);
extern C(Class) * CO(FieldDataBox);
extern C(Class) * CO(FieldDropDataBox);
extern C(Class) * CO(FieldFindData);
extern C(Class) * CO(FieldIndex);
extern C(Class) * CO(FixedMultiLineString);
extern C(Class) * CO(GetMemberString);
extern C(Class) * CO(Group);
extern C(Class) * CO(Grouping);
extern C(Class) * CO(Id);
extern C(Class) * CO(IdFilter);
extern C(Class) * CO(IdList);
extern C(Class) * CO(IdList32);
extern C(Class) * CO(IdList32Includes);
extern C(Class) * CO(IdListIncludes);
extern C(Class) * CO(IndexOrder);
extern C(Class) * CO(ListField);
extern C(Class) * CO(ListSection);
extern C(Class) * CO(Lookup);
extern C(Class) * CO(LookupEditor);
extern C(Class) * CO(MatchOptions);
extern C(Class) * CO(MemberStringSample);
extern C(Class) * CO(MoveOptions);
extern C(Class) * CO(NoCaseAccent);
extern C(Class) * CO(ObjectType);
extern C(Class) * CO(OpenOptions);
extern C(Class) * CO(OpenType);
extern C(Class) * CO(Orientation);
extern C(Class) * CO(Page);
extern C(Class) * CO(PageFormat);
extern C(Class) * CO(PrintedReport);
extern C(Class) * CO(RenderAction);
extern C(Class) * CO(Report);
extern C(Class) * CO(ReportDestination);
extern C(Class) * CO(ReportPreviewArea);
extern C(Class) * CO(ReportRender);
extern C(Class) * CO(ReportRenderNormal);
extern C(Class) * CO(ReportTitle);
extern C(Class) * CO(Row);
extern C(Class) * CO(SQLCustomFunction);
extern C(Class) * CO(SQLiteSearchField);
extern C(Class) * CO(SQLiteSearchTable);
extern C(Class) * CO(SeekOptions);
extern C(Class) * CO(State);
extern C(Class) * CO(StringList);
extern C(Class) * CO(StringSearchField);
extern C(Class) * CO(StringSearchIndexingMethod);
extern C(Class) * CO(StringSearchTable);
extern C(Class) * CO(Table);
extern C(Class) * CO(TableDropBox);
extern C(Class) * CO(TableEditor);

C(Module) EDA_init(C(Module) fromModule);



#ifdef __cplusplus

};

#endif

#endif // !defined(__EDA_H__)

