// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5140(int, const char*);
struct Descriptor_005b5140 { void attach(void*); };
extern Descriptor_005b5140 global_desc_005b5140;
extern void register_desc_005b5140(void (*)());
static const char name_005b5140[] = "Handles";
static const char callback_005b5140[] = "x";
struct Init_005b5140 { Init_005b5140() { void* p = make_desc_005b5140(0, name_005b5140); global_desc_005b5140.attach(p); register_desc_005b5140((void (*)())&callback_005b5140); } };
Init_005b5140* func_005b5140() { static Init_005b5140 init; return &init; }
