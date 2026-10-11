// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3cb0(int, const char*);
struct Descriptor_005b3cb0 { void attach(void*); };
extern Descriptor_005b3cb0 global_desc_005b3cb0;
extern void register_desc_005b3cb0(void (*)());
static const char name_005b3cb0[] = "ContentProvider";
static const char callback_005b3cb0[] = "x";
struct Init_005b3cb0 { Init_005b3cb0() { void* p = make_desc_005b3cb0(0, name_005b3cb0); global_desc_005b3cb0.attach(p); register_desc_005b3cb0((void (*)())&callback_005b3cb0); } };
Init_005b3cb0* func_005b3cb0() { static Init_005b3cb0 init; return &init; }
