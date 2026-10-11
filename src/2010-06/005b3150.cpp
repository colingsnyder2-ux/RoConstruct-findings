// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3150(int, const char*);
struct Descriptor_005b3150 { void attach(void*); };
extern Descriptor_005b3150 global_desc_005b3150;
extern void register_desc_005b3150(void (*)());
static const char name_005b3150[] = "PartAdornment";
static const char callback_005b3150[] = "x";
struct Init_005b3150 { Init_005b3150() { void* p = make_desc_005b3150(0, name_005b3150); global_desc_005b3150.attach(p); register_desc_005b3150((void (*)())&callback_005b3150); } };
Init_005b3150* func_005b3150() { static Init_005b3150 init; return &init; }
