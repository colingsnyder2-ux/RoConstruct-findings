// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_00590d30(int, const char*);
struct Descriptor_00590d30 { void attach(void*); };
extern Descriptor_00590d30 global_desc_00590d30;
extern void register_desc_00590d30(void (*)());
static const char name_00590d30[] = "DebugSettings";
static const char callback_00590d30[] = "x";
struct Init_00590d30 { Init_00590d30() { void* p = make_desc_00590d30(0, name_00590d30); global_desc_00590d30.attach(p); register_desc_00590d30((void (*)())&callback_00590d30); } };
Init_00590d30* func_00590d30() { static Init_00590d30 init; return &init; }
