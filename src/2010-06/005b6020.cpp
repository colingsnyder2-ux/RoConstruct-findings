// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6020(int, const char*);
struct Descriptor_005b6020 { void attach(void*); };
extern Descriptor_005b6020 global_desc_005b6020;
extern void register_desc_005b6020(void (*)());
static const char name_005b6020[] = "D$$SUV";
static const char callback_005b6020[] = "x";
struct Init_005b6020 { Init_005b6020() { void* p = make_desc_005b6020(0, name_005b6020); global_desc_005b6020.attach(p); register_desc_005b6020((void (*)())&callback_005b6020); } };
Init_005b6020* func_005b6020() { static Init_005b6020 init; return &init; }
