// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7130(int, const char*);
struct Descriptor_005b7130 { void attach(void*); };
extern Descriptor_005b7130 global_desc_005b7130;
extern void register_desc_005b7130(void (*)());
static const char name_005b7130[] = "Dragger";
static const char callback_005b7130[] = "x";
struct Init_005b7130 { Init_005b7130() { void* p = make_desc_005b7130(0, name_005b7130); global_desc_005b7130.attach(p); register_desc_005b7130((void (*)())&callback_005b7130); } };
Init_005b7130* func_005b7130() { static Init_005b7130 init; return &init; }
