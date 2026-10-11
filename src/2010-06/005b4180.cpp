// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4180(int, const char*);
struct Descriptor_005b4180 { void attach(void*); };
extern Descriptor_005b4180 global_desc_005b4180;
extern void register_desc_005b4180(void (*)());
static const char name_005b4180[] = "TrussPart";
static const char callback_005b4180[] = "x";
struct Init_005b4180 { Init_005b4180() { void* p = make_desc_005b4180(0, name_005b4180); global_desc_005b4180.attach(p); register_desc_005b4180((void (*)())&callback_005b4180); } };
Init_005b4180* func_005b4180() { static Init_005b4180 init; return &init; }
