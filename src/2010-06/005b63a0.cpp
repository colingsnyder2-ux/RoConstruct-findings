// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b63a0(int, const char*);
struct Descriptor_005b63a0 { void attach(void*); };
extern Descriptor_005b63a0 global_desc_005b63a0;
extern void register_desc_005b63a0(void (*)());
static const char name_005b63a0[] = "ScriptContext";
static const char callback_005b63a0[] = "x";
struct Init_005b63a0 { Init_005b63a0() { void* p = make_desc_005b63a0(0, name_005b63a0); global_desc_005b63a0.attach(p); register_desc_005b63a0((void (*)())&callback_005b63a0); } };
Init_005b63a0* func_005b63a0() { static Init_005b63a0 init; return &init; }
