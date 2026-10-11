// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5ae0(int, const char*);
struct Descriptor_005b5ae0 { void attach(void*); };
extern Descriptor_005b5ae0 global_desc_005b5ae0;
extern void register_desc_005b5ae0(void (*)());
static const char name_005b5ae0[] = "SkateboardPlatform";
static const char callback_005b5ae0[] = "x";
struct Init_005b5ae0 { Init_005b5ae0() { void* p = make_desc_005b5ae0(0, name_005b5ae0); global_desc_005b5ae0.attach(p); register_desc_005b5ae0((void (*)())&callback_005b5ae0); } };
Init_005b5ae0* func_005b5ae0() { static Init_005b5ae0 init; return &init; }
