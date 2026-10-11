// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7210(int, const char*);
struct Descriptor_005b7210 { void attach(void*); };
extern Descriptor_005b7210 global_desc_005b7210;
extern void register_desc_005b7210(void (*)());
static const char name_005b7210[] = "NumberValue";
static const char callback_005b7210[] = "x";
struct Init_005b7210 { Init_005b7210() { void* p = make_desc_005b7210(0, name_005b7210); global_desc_005b7210.attach(p); register_desc_005b7210((void (*)())&callback_005b7210); } };
Init_005b7210* func_005b7210() { static Init_005b7210 init; return &init; }
