// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7590(int, const char*);
struct Descriptor_005b7590 { void attach(void*); };
extern Descriptor_005b7590 global_desc_005b7590;
extern void register_desc_005b7590(void (*)());
static const char name_005b7590[] = "IntConstrainedValue";
static const char callback_005b7590[] = "x";
struct Init_005b7590 { Init_005b7590() { void* p = make_desc_005b7590(0, name_005b7590); global_desc_005b7590.attach(p); register_desc_005b7590((void (*)())&callback_005b7590); } };
Init_005b7590* func_005b7590() { static Init_005b7590 init; return &init; }
