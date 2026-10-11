// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6e20(int, const char*);
struct Descriptor_005b6e20 { void attach(void*); };
extern Descriptor_005b6e20 global_desc_005b6e20;
extern void register_desc_005b6e20(void (*)());
static const char name_005b6e20[] = "D$$SUV";
static const char callback_005b6e20[] = "x";
struct Init_005b6e20 { Init_005b6e20() { void* p = make_desc_005b6e20(0, name_005b6e20); global_desc_005b6e20.attach(p); register_desc_005b6e20((void (*)())&callback_005b6e20); } };
Init_005b6e20* func_005b6e20() { static Init_005b6e20 init; return &init; }
