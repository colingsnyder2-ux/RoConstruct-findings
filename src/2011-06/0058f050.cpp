// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_0058f050(int, const char*);
struct Descriptor_0058f050 { void attach(void*); };
extern Descriptor_0058f050 global_desc_0058f050;
extern void register_desc_0058f050(void (*)());
static const char name_0058f050[] = "DebugSettings";
static const char callback_0058f050[] = "x";
struct Init_0058f050 { Init_0058f050() { void* p = make_desc_0058f050(0, name_0058f050); global_desc_0058f050.attach(p); register_desc_0058f050((void (*)())&callback_0058f050); } };
Init_0058f050* func_0058f050() { static Init_0058f050 init; return &init; }
