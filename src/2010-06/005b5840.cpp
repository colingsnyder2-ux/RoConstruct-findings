// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5840(int, const char*);
struct Descriptor_005b5840 { void attach(void*); };
extern Descriptor_005b5840 global_desc_005b5840;
extern void register_desc_005b5840(void (*)());
static const char name_005b5840[] = "StarterGui";
static const char callback_005b5840[] = "x";
struct Init_005b5840 { Init_005b5840() { void* p = make_desc_005b5840(0, name_005b5840); global_desc_005b5840.attach(p); register_desc_005b5840((void (*)())&callback_005b5840); } };
Init_005b5840* func_005b5840() { static Init_005b5840 init; return &init; }
