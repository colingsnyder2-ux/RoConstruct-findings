// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_00590e10(int, const char*);
struct Descriptor_00590e10 { void attach(void*); };
extern Descriptor_00590e10 global_desc_00590e10;
extern void register_desc_00590e10(void (*)());
static const char name_00590e10[] = "TaskScheduler";
static const char callback_00590e10[] = "x";
struct Init_00590e10 { Init_00590e10() { void* p = make_desc_00590e10(0, name_00590e10); global_desc_00590e10.attach(p); register_desc_00590e10((void (*)())&callback_00590e10); } };
Init_00590e10* func_00590e10() { static Init_00590e10 init; return &init; }
