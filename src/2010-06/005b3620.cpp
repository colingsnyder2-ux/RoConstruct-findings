// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3620(int, const char*);
struct Descriptor_005b3620 { void attach(void*); };
extern Descriptor_005b3620 global_desc_005b3620;
extern void register_desc_005b3620(void (*)());
static const char name_005b3620[] = "D$$SUV";
static const char callback_005b3620[] = "x";
struct Init_005b3620 { Init_005b3620() { void* p = make_desc_005b3620(0, name_005b3620); global_desc_005b3620.attach(p); register_desc_005b3620((void (*)())&callback_005b3620); } };
Init_005b3620* func_005b3620() { static Init_005b3620 init; return &init; }
