// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4420(int, const char*);
struct Descriptor_005b4420 { void attach(void*); };
extern Descriptor_005b4420 global_desc_005b4420;
extern void register_desc_005b4420(void (*)());
static const char name_005b4420[] = "JointInstance";
static const char callback_005b4420[] = "x";
struct Init_005b4420 { Init_005b4420() { void* p = make_desc_005b4420(0, name_005b4420); global_desc_005b4420.attach(p); register_desc_005b4420((void (*)())&callback_005b4420); } };
Init_005b4420* func_005b4420() { static Init_005b4420 init; return &init; }
