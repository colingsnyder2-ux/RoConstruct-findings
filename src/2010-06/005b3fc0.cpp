// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3fc0(int, const char*);
struct Descriptor_005b3fc0 { void attach(void*); };
extern Descriptor_005b3fc0 global_desc_005b3fc0;
extern void register_desc_005b3fc0(void (*)());
static const char name_005b3fc0[] = "FaceInstance";
static const char callback_005b3fc0[] = "x";
struct Init_005b3fc0 { Init_005b3fc0() { void* p = make_desc_005b3fc0(0, name_005b3fc0); global_desc_005b3fc0.attach(p); register_desc_005b3fc0((void (*)())&callback_005b3fc0); } };
Init_005b3fc0* func_005b3fc0() { static Init_005b3fc0 init; return &init; }
