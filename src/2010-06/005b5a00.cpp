// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5a00(int, const char*);
struct Descriptor_005b5a00 { void attach(void*); };
extern Descriptor_005b5a00 global_desc_005b5a00;
extern void register_desc_005b5a00(void (*)());
static const char name_005b5a00[] = "SelectionBox";
static const char callback_005b5a00[] = "x";
struct Init_005b5a00 { Init_005b5a00() { void* p = make_desc_005b5a00(0, name_005b5a00); global_desc_005b5a00.attach(p); register_desc_005b5a00((void (*)())&callback_005b5a00); } };
Init_005b5a00* func_005b5a00() { static Init_005b5a00 init; return &init; }
