// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6cd0(int, const char*);
struct Descriptor_005b6cd0 { void attach(void*); };
extern Descriptor_005b6cd0 global_desc_005b6cd0;
extern void register_desc_005b6cd0(void (*)());
static const char name_005b6cd0[] = "Animation";
static const char callback_005b6cd0[] = "x";
struct Init_005b6cd0 { Init_005b6cd0() { void* p = make_desc_005b6cd0(0, name_005b6cd0); global_desc_005b6cd0.attach(p); register_desc_005b6cd0((void (*)())&callback_005b6cd0); } };
Init_005b6cd0* func_005b6cd0() { static Init_005b6cd0 init; return &init; }
