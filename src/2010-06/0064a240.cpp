// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_0064a240(int, const char*);
struct Descriptor_0064a240 { void attach(void*); };
extern Descriptor_0064a240 global_desc_0064a240;
extern void register_desc_0064a240(void (*)());
static const char name_0064a240[] = "RunningAverageItemDouble";
static const char callback_0064a240[] = "x";
struct Init_0064a240 { Init_0064a240() { void* p = make_desc_0064a240(0, name_0064a240); global_desc_0064a240.attach(p); register_desc_0064a240((void (*)())&callback_0064a240); } };
Init_0064a240* func_0064a240() { static Init_0064a240 init; return &init; }
