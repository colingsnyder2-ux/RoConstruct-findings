// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3a80(int, const char*);
struct Descriptor_005b3a80 { void attach(void*); };
extern Descriptor_005b3a80 global_desc_005b3a80;
extern void register_desc_005b3a80(void (*)());
static const char name_005b3a80[] = "BodyColors";
static const char callback_005b3a80[] = "x";
struct Init_005b3a80 { Init_005b3a80() { void* p = make_desc_005b3a80(0, name_005b3a80); global_desc_005b3a80.attach(p); register_desc_005b3a80((void (*)())&callback_005b3a80); } };
Init_005b3a80* func_005b3a80() { static Init_005b3a80 init; return &init; }
