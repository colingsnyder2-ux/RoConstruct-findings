// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3690(int, const char*);
struct Descriptor_005b3690 { void attach(void*); };
extern Descriptor_005b3690 global_desc_005b3690;
extern void register_desc_005b3690(void (*)());
static const char name_005b3690[] = "StarterGear";
static const char callback_005b3690[] = "x";
struct Init_005b3690 { Init_005b3690() { void* p = make_desc_005b3690(0, name_005b3690); global_desc_005b3690.attach(p); register_desc_005b3690((void (*)())&callback_005b3690); } };
Init_005b3690* func_005b3690() { static Init_005b3690 init; return &init; }
