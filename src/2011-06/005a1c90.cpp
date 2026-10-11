// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005a1c90(int, const char*);
struct Descriptor_005a1c90 { void attach(void*); };
extern Descriptor_005a1c90 global_desc_005a1c90;
extern void register_desc_005a1c90(void (*)());
static const char name_005a1c90[] = "L$ WQ";
static const char callback_005a1c90[] = "x";
struct Init_005a1c90 { Init_005a1c90() { void* p = make_desc_005a1c90(0, name_005a1c90); global_desc_005a1c90.attach(p); register_desc_005a1c90((void (*)())&callback_005a1c90); } };
Init_005a1c90* func_005a1c90() { static Init_005a1c90 init; return &init; }
