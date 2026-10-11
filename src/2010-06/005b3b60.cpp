// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3b60(int, const char*);
struct Descriptor_005b3b60 { void attach(void*); };
extern Descriptor_005b3b60 global_desc_005b3b60;
extern void register_desc_005b3b60(void (*)());
static const char name_005b3b60[] = "CharacterMesh";
static const char callback_005b3b60[] = "x";
struct Init_005b3b60 { Init_005b3b60() { void* p = make_desc_005b3b60(0, name_005b3b60); global_desc_005b3b60.attach(p); register_desc_005b3b60((void (*)())&callback_005b3b60); } };
Init_005b3b60* func_005b3b60() { static Init_005b3b60 init; return &init; }
