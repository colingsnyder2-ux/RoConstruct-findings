// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7600(int, const char*);
struct Descriptor_005b7600 { void attach(void*); };
extern Descriptor_005b7600 global_desc_005b7600;
extern void register_desc_005b7600(void (*)());
static const char name_005b7600[] = "DoubleConstrainedValue";
static const char callback_005b7600[] = "x";
struct Init_005b7600 { Init_005b7600() { void* p = make_desc_005b7600(0, name_005b7600); global_desc_005b7600.attach(p); register_desc_005b7600((void (*)())&callback_005b7600); } };
Init_005b7600* func_005b7600() { static Init_005b7600 init; return &init; }
