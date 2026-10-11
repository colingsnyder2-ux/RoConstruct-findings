// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5610(int, const char*);
struct Descriptor_005b5610 { void attach(void*); };
extern Descriptor_005b5610 global_desc_005b5610;
extern void register_desc_005b5610(void (*)());
static const char name_005b5610[] = "RootInstance";
static const char callback_005b5610[] = "x";
struct Init_005b5610 { Init_005b5610() { void* p = make_desc_005b5610(0, name_005b5610); global_desc_005b5610.attach(p); register_desc_005b5610((void (*)())&callback_005b5610); } };
Init_005b5610* func_005b5610() { static Init_005b5610 init; return &init; }
