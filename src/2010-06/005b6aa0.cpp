// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6aa0(int, const char*);
struct Descriptor_005b6aa0 { void attach(void*); };
extern Descriptor_005b6aa0 global_desc_005b6aa0;
extern void register_desc_005b6aa0(void (*)());
static const char name_005b6aa0[] = "TextLabel";
static const char callback_005b6aa0[] = "x";
struct Init_005b6aa0 { Init_005b6aa0() { void* p = make_desc_005b6aa0(0, name_005b6aa0); global_desc_005b6aa0.attach(p); register_desc_005b6aa0((void (*)())&callback_005b6aa0); } };
Init_005b6aa0* func_005b6aa0() { static Init_005b6aa0 init; return &init; }
