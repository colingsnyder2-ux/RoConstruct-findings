// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6e90(int, const char*);
struct Descriptor_005b6e90 { void attach(void*); };
extern Descriptor_005b6e90 global_desc_005b6e90;
extern void register_desc_005b6e90(void (*)());
static const char name_005b6e90[] = "Keyframe";
static const char callback_005b6e90[] = "x";
struct Init_005b6e90 { Init_005b6e90() { void* p = make_desc_005b6e90(0, name_005b6e90); global_desc_005b6e90.attach(p); register_desc_005b6e90((void (*)())&callback_005b6e90); } };
Init_005b6e90* func_005b6e90() { static Init_005b6e90 init; return &init; }
