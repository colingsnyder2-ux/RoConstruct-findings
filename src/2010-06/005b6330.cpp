// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6330(int, const char*);
struct Descriptor_005b6330 { void attach(void*); };
extern Descriptor_005b6330 global_desc_005b6330;
extern void register_desc_005b6330(void (*)());
static const char name_005b6330[] = "LocalWorkspace";
static const char callback_005b6330[] = "x";
struct Init_005b6330 { Init_005b6330() { void* p = make_desc_005b6330(0, name_005b6330); global_desc_005b6330.attach(p); register_desc_005b6330((void (*)())&callback_005b6330); } };
Init_005b6330* func_005b6330() { static Init_005b6330 init; return &init; }
