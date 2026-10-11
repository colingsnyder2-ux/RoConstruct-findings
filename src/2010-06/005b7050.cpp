// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7050(int, const char*);
struct Descriptor_005b7050 { void attach(void*); };
extern Descriptor_005b7050 global_desc_005b7050;
extern void register_desc_005b7050(void (*)());
static const char name_005b7050[] = "PlayerHUD";
static const char callback_005b7050[] = "x";
struct Init_005b7050 { Init_005b7050() { void* p = make_desc_005b7050(0, name_005b7050); global_desc_005b7050.attach(p); register_desc_005b7050((void (*)())&callback_005b7050); } };
Init_005b7050* func_005b7050() { static Init_005b7050 init; return &init; }
