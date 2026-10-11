// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6480(int, const char*);
struct Descriptor_005b6480 { void attach(void*); };
extern Descriptor_005b6480 global_desc_005b6480;
extern void register_desc_005b6480(void (*)());
static const char name_005b6480[] = "BaseScript";
static const char callback_005b6480[] = "x";
struct Init_005b6480 { Init_005b6480() { void* p = make_desc_005b6480(0, name_005b6480); global_desc_005b6480.attach(p); register_desc_005b6480((void (*)())&callback_005b6480); } };
Init_005b6480* func_005b6480() { static Init_005b6480 init; return &init; }
