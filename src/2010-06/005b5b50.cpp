// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5b50(int, const char*);
struct Descriptor_005b5b50 { void attach(void*); };
extern Descriptor_005b5b50 global_desc_005b5b50;
extern void register_desc_005b5b50(void (*)());
static const char name_005b5b50[] = "ControllerService";
static const char callback_005b5b50[] = "x";
struct Init_005b5b50 { Init_005b5b50() { void* p = make_desc_005b5b50(0, name_005b5b50); global_desc_005b5b50.attach(p); register_desc_005b5b50((void (*)())&callback_005b5b50); } };
Init_005b5b50* func_005b5b50() { static Init_005b5b50 init; return &init; }
