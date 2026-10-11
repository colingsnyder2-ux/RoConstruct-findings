// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3930(int, const char*);
struct Descriptor_005b3930 { void attach(void*); };
extern Descriptor_005b3930 global_desc_005b3930;
extern void register_desc_005b3930(void (*)());
static const char name_005b3930[] = "Camera";
static const char callback_005b3930[] = "x";
struct Init_005b3930 { Init_005b3930() { void* p = make_desc_005b3930(0, name_005b3930); global_desc_005b3930.attach(p); register_desc_005b3930((void (*)())&callback_005b3930); } };
Init_005b3930* func_005b3930() { static Init_005b3930 init; return &init; }
