// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6170(int, const char*);
struct Descriptor_005b6170 { void attach(void*); };
extern Descriptor_005b6170 global_desc_005b6170;
extern void register_desc_005b6170(void (*)());
static const char name_005b6170[] = "TouchTransmitter";
static const char callback_005b6170[] = "x";
struct Init_005b6170 { Init_005b6170() { void* p = make_desc_005b6170(0, name_005b6170); global_desc_005b6170.attach(p); register_desc_005b6170((void (*)())&callback_005b6170); } };
Init_005b6170* func_005b6170() { static Init_005b6170 init; return &init; }
