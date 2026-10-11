// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_0065c6b0(int, const char*);
struct Descriptor_0065c6b0 { void attach(void*); };
extern Descriptor_0065c6b0 global_desc_0065c6b0;
extern void register_desc_0065c6b0(void (*)());
static const char name_0065c6b0[] = "ProfilingItem";
static const char callback_0065c6b0[] = "x";
struct Init_0065c6b0 { Init_0065c6b0() { void* p = make_desc_0065c6b0(0, name_0065c6b0); global_desc_0065c6b0.attach(p); register_desc_0065c6b0((void (*)())&callback_0065c6b0); } };
Init_0065c6b0* func_0065c6b0() { static Init_0065c6b0 init; return &init; }
