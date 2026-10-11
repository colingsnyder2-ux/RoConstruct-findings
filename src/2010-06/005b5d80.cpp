// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5d80(int, const char*);
struct Descriptor_005b5d80 { void attach(void*); };
extern Descriptor_005b5d80 global_desc_005b5d80;
extern void register_desc_005b5d80(void (*)());
static const char name_005b5d80[] = "D$$SUV";
static const char callback_005b5d80[] = "x";
struct Init_005b5d80 { Init_005b5d80() { void* p = make_desc_005b5d80(0, name_005b5d80); global_desc_005b5d80.attach(p); register_desc_005b5d80((void (*)())&callback_005b5d80); } };
Init_005b5d80* func_005b5d80() { static Init_005b5d80 init; return &init; }
