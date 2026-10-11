// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3e00(int, const char*);
struct Descriptor_005b3e00 { void attach(void*); };
extern Descriptor_005b3e00 global_desc_005b3e00;
extern void register_desc_005b3e00(void (*)());
static const char name_005b3e00[] = "CylinderMesh";
static const char callback_005b3e00[] = "x";
struct Init_005b3e00 { Init_005b3e00() { void* p = make_desc_005b3e00(0, name_005b3e00); global_desc_005b3e00.attach(p); register_desc_005b3e00((void (*)())&callback_005b3e00); } };
Init_005b3e00* func_005b3e00() { static Init_005b3e00 init; return &init; }
