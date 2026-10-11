// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6950(int, const char*);
struct Descriptor_005b6950 { void attach(void*); };
extern Descriptor_005b6950 global_desc_005b6950;
extern void register_desc_005b6950(void (*)());
static const char name_005b6950[] = "ImageButton";
static const char callback_005b6950[] = "x";
struct Init_005b6950 { Init_005b6950() { void* p = make_desc_005b6950(0, name_005b6950); global_desc_005b6950.attach(p); register_desc_005b6950((void (*)())&callback_005b6950); } };
Init_005b6950* func_005b6950() { static Init_005b6950 init; return &init; }
