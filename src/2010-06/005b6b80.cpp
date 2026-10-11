// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6b80(int, const char*);
struct Descriptor_005b6b80 { void attach(void*); };
extern Descriptor_005b6b80 global_desc_005b6b80;
extern void register_desc_005b6b80(void (*)());
static const char name_005b6b80[] = "SelectionLasso";
static const char callback_005b6b80[] = "x";
struct Init_005b6b80 { Init_005b6b80() { void* p = make_desc_005b6b80(0, name_005b6b80); global_desc_005b6b80.attach(p); register_desc_005b6b80((void (*)())&callback_005b6b80); } };
Init_005b6b80* func_005b6b80() { static Init_005b6b80 init; return &init; }
