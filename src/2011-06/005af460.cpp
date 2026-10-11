// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005af460(int, const char*);
struct Descriptor_005af460 { void attach(void*); };
extern Descriptor_005af460 global_desc_005af460;
extern void register_desc_005af460(void (*)());
static const char name_005af460[] = "Selection";
static const char callback_005af460[] = "x";
struct Init_005af460 { Init_005af460() { void* p = make_desc_005af460(0, name_005af460); global_desc_005af460.attach(p); register_desc_005af460((void (*)())&callback_005af460); } };
Init_005af460* func_005af460() { static Init_005af460 init; return &init; }
