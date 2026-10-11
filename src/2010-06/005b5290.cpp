// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5290(int, const char*);
struct Descriptor_005b5290 { void attach(void*); };
extern Descriptor_005b5290 global_desc_005b5290;
extern void register_desc_005b5290(void (*)());
static const char name_005b5290[] = "LocalBackpackTool";
static const char callback_005b5290[] = "x";
struct Init_005b5290 { Init_005b5290() { void* p = make_desc_005b5290(0, name_005b5290); global_desc_005b5290.attach(p); register_desc_005b5290((void (*)())&callback_005b5290); } };
Init_005b5290* func_005b5290() { static Init_005b5290 init; return &init; }
