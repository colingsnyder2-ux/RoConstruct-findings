// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5760(int, const char*);
struct Descriptor_005b5760 { void attach(void*); };
extern Descriptor_005b5760 global_desc_005b5760;
extern void register_desc_005b5760(void (*)());
static const char name_005b5760[] = "Platform";
static const char callback_005b5760[] = "x";
struct Init_005b5760 { Init_005b5760() { void* p = make_desc_005b5760(0, name_005b5760); global_desc_005b5760.attach(p); register_desc_005b5760((void (*)())&callback_005b5760); } };
Init_005b5760* func_005b5760() { static Init_005b5760 init; return &init; }
