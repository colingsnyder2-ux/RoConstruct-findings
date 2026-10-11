// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4f80(int, const char*);
struct Descriptor_005b4f80 { void attach(void*); };
extern Descriptor_005b4f80 global_desc_005b4f80;
extern void register_desc_005b4f80(void (*)());
static const char name_005b4f80[] = "BodyVelocity";
static const char callback_005b4f80[] = "x";
struct Init_005b4f80 { Init_005b4f80() { void* p = make_desc_005b4f80(0, name_005b4f80); global_desc_005b4f80.attach(p); register_desc_005b4f80((void (*)())&callback_005b4f80); } };
Init_005b4f80* func_005b4f80() { static Init_005b4f80 init; return &init; }
