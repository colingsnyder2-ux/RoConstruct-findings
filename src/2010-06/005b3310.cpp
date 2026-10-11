// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3310(int, const char*);
struct Descriptor_005b3310 { void attach(void*); };
extern Descriptor_005b3310 global_desc_005b3310;
extern void register_desc_005b3310(void (*)());
static const char name_005b3310[] = "BasePart";
static const char callback_005b3310[] = "x";
struct Init_005b3310 { Init_005b3310() { void* p = make_desc_005b3310(0, name_005b3310); global_desc_005b3310.attach(p); register_desc_005b3310((void (*)())&callback_005b3310); } };
Init_005b3310* func_005b3310() { static Init_005b3310 init; return &init; }
