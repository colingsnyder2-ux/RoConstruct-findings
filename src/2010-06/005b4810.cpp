// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4810(int, const char*);
struct Descriptor_005b4810 { void attach(void*); };
extern Descriptor_005b4810 global_desc_005b4810;
extern void register_desc_005b4810(void (*)());
static const char name_005b4810[] = "Motor6D";
static const char callback_005b4810[] = "x";
struct Init_005b4810 { Init_005b4810() { void* p = make_desc_005b4810(0, name_005b4810); global_desc_005b4810.attach(p); register_desc_005b4810((void (*)())&callback_005b4810); } };
Init_005b4810* func_005b4810() { static Init_005b4810 init; return &init; }
