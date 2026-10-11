// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3460(int, const char*);
struct Descriptor_005b3460 { void attach(void*); };
extern Descriptor_005b3460 global_desc_005b3460;
extern void register_desc_005b3460(void (*)());
static const char name_005b3460[] = "BackendAccoutrementState";
static const char callback_005b3460[] = "x";
struct Init_005b3460 { Init_005b3460() { void* p = make_desc_005b3460(0, name_005b3460); global_desc_005b3460.attach(p); register_desc_005b3460((void (*)())&callback_005b3460); } };
Init_005b3460* func_005b3460() { static Init_005b3460 init; return &init; }
