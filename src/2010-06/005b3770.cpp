// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3770(int, const char*);
struct Descriptor_005b3770 { void attach(void*); };
extern Descriptor_005b3770 global_desc_005b3770;
extern void register_desc_005b3770(void (*)());
static const char name_005b3770[] = "BadgeService";
static const char callback_005b3770[] = "x";
struct Init_005b3770 { Init_005b3770() { void* p = make_desc_005b3770(0, name_005b3770); global_desc_005b3770.attach(p); register_desc_005b3770((void (*)())&callback_005b3770); } };
Init_005b3770* func_005b3770() { static Init_005b3770 init; return &init; }
