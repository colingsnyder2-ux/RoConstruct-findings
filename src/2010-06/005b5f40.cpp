// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5f40(int, const char*);
struct Descriptor_005b5f40 { void attach(void*); };
extern Descriptor_005b5f40 global_desc_005b5f40;
extern void register_desc_005b5f40(void (*)());
static const char name_005b5f40[] = "SpecialMesh";
static const char callback_005b5f40[] = "x";
struct Init_005b5f40 { Init_005b5f40() { void* p = make_desc_005b5f40(0, name_005b5f40); global_desc_005b5f40.attach(p); register_desc_005b5f40((void (*)())&callback_005b5f40); } };
Init_005b5f40* func_005b5f40() { static Init_005b5f40 init; return &init; }
