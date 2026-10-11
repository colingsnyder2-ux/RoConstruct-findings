// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7280(int, const char*);
struct Descriptor_005b7280 { void attach(void*); };
extern Descriptor_005b7280 global_desc_005b7280;
extern void register_desc_005b7280(void (*)());
static const char name_005b7280[] = "BoolValue";
static const char callback_005b7280[] = "x";
struct Init_005b7280 { Init_005b7280() { void* p = make_desc_005b7280(0, name_005b7280); global_desc_005b7280.attach(p); register_desc_005b7280((void (*)())&callback_005b7280); } };
Init_005b7280* func_005b7280() { static Init_005b7280 init; return &init; }
