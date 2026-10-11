// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5ed0(int, const char*);
struct Descriptor_005b5ed0 { void attach(void*); };
extern Descriptor_005b5ed0 global_desc_005b5ed0;
extern void register_desc_005b5ed0(void (*)());
static const char name_005b5ed0[] = "SpawnerService";
static const char callback_005b5ed0[] = "x";
struct Init_005b5ed0 { Init_005b5ed0() { void* p = make_desc_005b5ed0(0, name_005b5ed0); global_desc_005b5ed0.attach(p); register_desc_005b5ed0((void (*)())&callback_005b5ed0); } };
Init_005b5ed0* func_005b5ed0() { static Init_005b5ed0 init; return &init; }
