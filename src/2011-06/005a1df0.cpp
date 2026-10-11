// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005a1df0(int, const char*);
struct Descriptor_005a1df0 { void attach(void*); };
extern Descriptor_005a1df0 global_desc_005a1df0;
extern void register_desc_005a1df0(void (*)());
static const char name_005a1df0[] = "StockSound";
static const char callback_005a1df0[] = "x";
struct Init_005a1df0 { Init_005a1df0() { void* p = make_desc_005a1df0(0, name_005a1df0); global_desc_005a1df0.attach(p); register_desc_005a1df0((void (*)())&callback_005a1df0); } };
Init_005a1df0* func_005a1df0() { static Init_005a1df0 init; return &init; }
