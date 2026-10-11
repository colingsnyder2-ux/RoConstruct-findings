// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3850(int, const char*);
struct Descriptor_005b3850 { void attach(void*); };
extern Descriptor_005b3850 global_desc_005b3850;
extern void register_desc_005b3850(void (*)());
static const char name_005b3850[] = "D$$SUV";
static const char callback_005b3850[] = "x";
struct Init_005b3850 { Init_005b3850() { void* p = make_desc_005b3850(0, name_005b3850); global_desc_005b3850.attach(p); register_desc_005b3850((void (*)())&callback_005b3850); } };
Init_005b3850* func_005b3850() { static Init_005b3850 init; return &init; }
