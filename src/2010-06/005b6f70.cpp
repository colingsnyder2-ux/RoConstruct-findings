// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6f70(int, const char*);
struct Descriptor_005b6f70 { void attach(void*); };
extern Descriptor_005b6f70 global_desc_005b6f70;
extern void register_desc_005b6f70(void (*)());
static const char name_005b6f70[] = "Animator";
static const char callback_005b6f70[] = "x";
struct Init_005b6f70 { Init_005b6f70() { void* p = make_desc_005b6f70(0, name_005b6f70); global_desc_005b6f70.attach(p); register_desc_005b6f70((void (*)())&callback_005b6f70); } };
Init_005b6f70* func_005b6f70() { static Init_005b6f70 init; return &init; }
