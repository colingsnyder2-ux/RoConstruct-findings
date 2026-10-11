// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5370(int, const char*);
struct Descriptor_005b5370 { void attach(void*); };
extern Descriptor_005b5370 global_desc_005b5370;
extern void register_desc_005b5370(void (*)());
static const char name_005b5370[] = "LocalBackpack";
static const char callback_005b5370[] = "x";
struct Init_005b5370 { Init_005b5370() { void* p = make_desc_005b5370(0, name_005b5370); global_desc_005b5370.attach(p); register_desc_005b5370((void (*)())&callback_005b5370); } };
Init_005b5370* func_005b5370() { static Init_005b5370 init; return &init; }
