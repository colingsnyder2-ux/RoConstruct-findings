// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3d20(int, const char*);
struct Descriptor_005b3d20 { void attach(void*); };
extern Descriptor_005b3d20 global_desc_005b3d20;
extern void register_desc_005b3d20(void (*)());
static const char name_005b3d20[] = "Configuration";
static const char callback_005b3d20[] = "x";
struct Init_005b3d20 { Init_005b3d20() { void* p = make_desc_005b3d20(0, name_005b3d20); global_desc_005b3d20.attach(p); register_desc_005b3d20((void (*)())&callback_005b3d20); } };
Init_005b3d20* func_005b3d20() { static Init_005b3d20 init; return &init; }
