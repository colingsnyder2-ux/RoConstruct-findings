// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4030(int, const char*);
struct Descriptor_005b4030 { void attach(void*); };
extern Descriptor_005b4030 global_desc_005b4030;
extern void register_desc_005b4030(void (*)());
static const char name_005b4030[] = "D$$SUV";
static const char callback_005b4030[] = "x";
struct Init_005b4030 { Init_005b4030() { void* p = make_desc_005b4030(0, name_005b4030); global_desc_005b4030.attach(p); register_desc_005b4030((void (*)())&callback_005b4030); } };
Init_005b4030* func_005b4030() { static Init_005b4030 init; return &init; }
