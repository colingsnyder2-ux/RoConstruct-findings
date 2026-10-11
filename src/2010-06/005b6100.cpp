// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6100(int, const char*);
struct Descriptor_005b6100 { void attach(void*); };
extern Descriptor_005b6100 global_desc_005b6100;
extern void register_desc_005b6100(void (*)());
static const char name_005b6100[] = "StudioTool";
static const char callback_005b6100[] = "x";
struct Init_005b6100 { Init_005b6100() { void* p = make_desc_005b6100(0, name_005b6100); global_desc_005b6100.attach(p); register_desc_005b6100((void (*)())&callback_005b6100); } };
Init_005b6100* func_005b6100() { static Init_005b6100 init; return &init; }
