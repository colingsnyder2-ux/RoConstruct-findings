// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5920(int, const char*);
struct Descriptor_005b5920 { void attach(void*); };
extern Descriptor_005b5920 global_desc_005b5920;
extern void register_desc_005b5920(void (*)());
static const char name_005b5920[] = "PseudoPlayer";
static const char callback_005b5920[] = "x";
struct Init_005b5920 { Init_005b5920() { void* p = make_desc_005b5920(0, name_005b5920); global_desc_005b5920.attach(p); register_desc_005b5920((void (*)())&callback_005b5920); } };
Init_005b5920* func_005b5920() { static Init_005b5920 init; return &init; }
