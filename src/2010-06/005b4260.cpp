// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4260(int, const char*);
struct Descriptor_005b4260 { void attach(void*); };
extern Descriptor_005b4260 global_desc_005b4260;
extern void register_desc_005b4260(void (*)());
static const char name_005b4260[] = "PyramidPart";
static const char callback_005b4260[] = "x";
struct Init_005b4260 { Init_005b4260() { void* p = make_desc_005b4260(0, name_005b4260); global_desc_005b4260.attach(p); register_desc_005b4260((void (*)())&callback_005b4260); } };
Init_005b4260* func_005b4260() { static Init_005b4260 init; return &init; }
