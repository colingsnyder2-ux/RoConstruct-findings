// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5060(int, const char*);
struct Descriptor_005b5060 { void attach(void*); };
extern Descriptor_005b5060 global_desc_005b5060;
extern void register_desc_005b5060(void (*)());
static const char name_005b5060[] = "RocketPropulsion";
static const char callback_005b5060[] = "x";
struct Init_005b5060 { Init_005b5060() { void* p = make_desc_005b5060(0, name_005b5060); global_desc_005b5060.attach(p); register_desc_005b5060((void (*)())&callback_005b5060); } };
Init_005b5060* func_005b5060() { static Init_005b5060 init; return &init; }
