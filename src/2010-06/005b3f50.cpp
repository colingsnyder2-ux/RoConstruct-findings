// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3f50(int, const char*);
struct Descriptor_005b3f50 { void attach(void*); };
extern Descriptor_005b3f50 global_desc_005b3f50;
extern void register_desc_005b3f50(void (*)());
static const char name_005b3f50[] = "D$$SUV";
static const char callback_005b3f50[] = "x";
struct Init_005b3f50 { Init_005b3f50() { void* p = make_desc_005b3f50(0, name_005b3f50); global_desc_005b3f50.attach(p); register_desc_005b3f50((void (*)())&callback_005b3f50); } };
Init_005b3f50* func_005b3f50() { static Init_005b3f50 init; return &init; }
