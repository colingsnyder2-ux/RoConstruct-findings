// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_004493a0(int, const char*);
struct Descriptor_004493a0 { void attach(void*); };
extern Descriptor_004493a0 global_desc_004493a0;
extern void register_desc_004493a0(void (*)());
static const char name_004493a0[] = "RenderSettings";
static const char callback_004493a0[] = "x";
struct Init_004493a0 { Init_004493a0() { void* p = make_desc_004493a0(0, name_004493a0); global_desc_004493a0.attach(p); register_desc_004493a0((void (*)())&callback_004493a0); } };
Init_004493a0* func_004493a0() { static Init_004493a0 init; return &init; }
