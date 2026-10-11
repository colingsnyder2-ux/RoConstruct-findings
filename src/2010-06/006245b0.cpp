// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_006245b0(int, const char*);
struct Descriptor_006245b0 { void attach(void*); };
extern Descriptor_006245b0 global_desc_006245b0;
extern void register_desc_006245b0(void (*)());
static const char name_006245b0[] = "StockSound";
static const char callback_006245b0[] = "x";
struct Init_006245b0 { Init_006245b0() { void* p = make_desc_006245b0(0, name_006245b0); global_desc_006245b0.attach(p); register_desc_006245b0((void (*)())&callback_006245b0); } };
Init_006245b0* func_006245b0() { static Init_006245b0 init; return &init; }
