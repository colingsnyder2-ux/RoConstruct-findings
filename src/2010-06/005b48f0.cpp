// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b48f0(int, const char*);
struct Descriptor_005b48f0 { void attach(void*); };
extern Descriptor_005b48f0 global_desc_005b48f0;
extern void register_desc_005b48f0(void (*)());
static const char name_005b48f0[] = "MotorFeature";
static const char callback_005b48f0[] = "x";
struct Init_005b48f0 { Init_005b48f0() { void* p = make_desc_005b48f0(0, name_005b48f0); global_desc_005b48f0.attach(p); register_desc_005b48f0((void (*)())&callback_005b48f0); } };
Init_005b48f0* func_005b48f0() { static Init_005b48f0 init; return &init; }
