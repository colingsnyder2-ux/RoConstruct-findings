// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3700(int, const char*);
struct Descriptor_005b3700 { void attach(void*); };
extern Descriptor_005b3700 global_desc_005b3700;
extern void register_desc_005b3700(void (*)());
static const char name_005b3700[] = "Backpack";
static const char callback_005b3700[] = "x";
struct Init_005b3700 { Init_005b3700() { void* p = make_desc_005b3700(0, name_005b3700); global_desc_005b3700.attach(p); register_desc_005b3700((void (*)())&callback_005b3700); } };
Init_005b3700* func_005b3700() { static Init_005b3700 init; return &init; }
