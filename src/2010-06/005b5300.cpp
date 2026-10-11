// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5300(int, const char*);
struct Descriptor_005b5300 { void attach(void*); };
extern Descriptor_005b5300 global_desc_005b5300;
extern void register_desc_005b5300(void (*)());
static const char name_005b5300[] = "LocalBackpackSwitcher";
static const char callback_005b5300[] = "x";
struct Init_005b5300 { Init_005b5300() { void* p = make_desc_005b5300(0, name_005b5300); global_desc_005b5300.attach(p); register_desc_005b5300((void (*)())&callback_005b5300); } };
Init_005b5300* func_005b5300() { static Init_005b5300 init; return &init; }
