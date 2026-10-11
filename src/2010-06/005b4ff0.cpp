// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4ff0(int, const char*);
struct Descriptor_005b4ff0 { void attach(void*); };
extern Descriptor_005b4ff0 global_desc_005b4ff0;
extern void register_desc_005b4ff0(void (*)());
static const char name_005b4ff0[] = "BodyAngularVelocity";
static const char callback_005b4ff0[] = "x";
struct Init_005b4ff0 { Init_005b4ff0() { void* p = make_desc_005b4ff0(0, name_005b4ff0); global_desc_005b4ff0.attach(p); register_desc_005b4ff0((void (*)())&callback_005b4ff0); } };
Init_005b4ff0* func_005b4ff0() { static Init_005b4ff0 init; return &init; }
