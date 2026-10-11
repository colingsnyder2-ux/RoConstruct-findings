// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5530(int, const char*);
struct Descriptor_005b5530 { void attach(void*); };
extern Descriptor_005b5530 global_desc_005b5530;
extern void register_desc_005b5530(void (*)());
static const char name_005b5530[] = "WedgePart";
static const char callback_005b5530[] = "x";
struct Init_005b5530 { Init_005b5530() { void* p = make_desc_005b5530(0, name_005b5530); global_desc_005b5530.attach(p); register_desc_005b5530((void (*)())&callback_005b5530); } };
Init_005b5530* func_005b5530() { static Init_005b5530 init; return &init; }
