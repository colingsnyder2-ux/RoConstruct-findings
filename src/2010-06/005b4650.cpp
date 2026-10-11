// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4650(int, const char*);
struct Descriptor_005b4650 { void attach(void*); };
extern Descriptor_005b4650 global_desc_005b4650;
extern void register_desc_005b4650(void (*)());
static const char name_005b4650[] = "DynamicRotate";
static const char callback_005b4650[] = "x";
struct Init_005b4650 { Init_005b4650() { void* p = make_desc_005b4650(0, name_005b4650); global_desc_005b4650.attach(p); register_desc_005b4650((void (*)())&callback_005b4650); } };
Init_005b4650* func_005b4650() { static Init_005b4650 init; return &init; }
