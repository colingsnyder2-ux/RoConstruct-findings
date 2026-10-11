// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_0064a1d0(int, const char*);
struct Descriptor_0064a1d0 { void attach(void*); };
extern Descriptor_0064a1d0 global_desc_0064a1d0;
extern void register_desc_0064a1d0(void (*)());
static const char name_0064a1d0[] = "RunningAverageItemInt";
static const char callback_0064a1d0[] = "x";
struct Init_0064a1d0 { Init_0064a1d0() { void* p = make_desc_0064a1d0(0, name_0064a1d0); global_desc_0064a1d0.attach(p); register_desc_0064a1d0((void (*)())&callback_0064a1d0); } };
Init_0064a1d0* func_0064a1d0() { static Init_0064a1d0 init; return &init; }
