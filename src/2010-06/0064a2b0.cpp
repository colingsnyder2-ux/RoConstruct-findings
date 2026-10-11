// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_0064a2b0(int, const char*);
struct Descriptor_0064a2b0 { void attach(void*); };
extern Descriptor_0064a2b0 global_desc_0064a2b0;
extern void register_desc_0064a2b0(void (*)());
static const char name_0064a2b0[] = "ProfilingItem";
static const char callback_0064a2b0[] = "x";
struct Init_0064a2b0 { Init_0064a2b0() { void* p = make_desc_0064a2b0(0, name_0064a2b0); global_desc_0064a2b0.attach(p); register_desc_0064a2b0((void (*)())&callback_0064a2b0); } };
Init_0064a2b0* func_0064a2b0() { static Init_0064a2b0 init; return &init; }
