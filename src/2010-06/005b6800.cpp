// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6800(int, const char*);
struct Descriptor_005b6800 { void attach(void*); };
extern Descriptor_005b6800 global_desc_005b6800;
extern void register_desc_005b6800(void (*)());
static const char name_005b6800[] = "ScreenGui";
static const char callback_005b6800[] = "x";
struct Init_005b6800 { Init_005b6800() { void* p = make_desc_005b6800(0, name_005b6800); global_desc_005b6800.attach(p); register_desc_005b6800((void (*)())&callback_005b6800); } };
Init_005b6800* func_005b6800() { static Init_005b6800 init; return &init; }
