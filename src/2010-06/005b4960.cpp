// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4960(int, const char*);
struct Descriptor_005b4960 { void attach(void*); };
extern Descriptor_005b4960 global_desc_005b4960;
extern void register_desc_005b4960(void (*)());
static const char name_005b4960[] = "D$$SUV";
static const char callback_005b4960[] = "x";
struct Init_005b4960 { Init_005b4960() { void* p = make_desc_005b4960(0, name_005b4960); global_desc_005b4960.attach(p); register_desc_005b4960((void (*)())&callback_005b4960); } };
Init_005b4960* func_005b4960() { static Init_005b4960 init; return &init; }
