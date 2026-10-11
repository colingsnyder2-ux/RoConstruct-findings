// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3e70(int, const char*);
struct Descriptor_005b3e70 { void attach(void*); };
extern Descriptor_005b3e70 global_desc_005b3e70;
extern void register_desc_005b3e70(void (*)());
static const char name_005b3e70[] = "VirtualUser";
static const char callback_005b3e70[] = "x";
struct Init_005b3e70 { Init_005b3e70() { void* p = make_desc_005b3e70(0, name_005b3e70); global_desc_005b3e70.attach(p); register_desc_005b3e70((void (*)())&callback_005b3e70); } };
Init_005b3e70* func_005b3e70() { static Init_005b3e70 init; return &init; }
