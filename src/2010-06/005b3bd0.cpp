// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3bd0(int, const char*);
struct Descriptor_005b3bd0 { void attach(void*); };
extern Descriptor_005b3bd0 global_desc_005b3bd0;
extern void register_desc_005b3bd0(void (*)());
static const char name_005b3bd0[] = "D$$SUV";
static const char callback_005b3bd0[] = "x";
struct Init_005b3bd0 { Init_005b3bd0() { void* p = make_desc_005b3bd0(0, name_005b3bd0); global_desc_005b3bd0.attach(p); register_desc_005b3bd0((void (*)())&callback_005b3bd0); } };
Init_005b3bd0* func_005b3bd0() { static Init_005b3bd0 init; return &init; }
