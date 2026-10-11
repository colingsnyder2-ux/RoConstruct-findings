// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4340(int, const char*);
struct Descriptor_005b4340 { void attach(void*); };
extern Descriptor_005b4340 global_desc_005b4340;
extern void register_desc_005b4340(void (*)());
static const char name_005b4340[] = "RightAngleRampPart";
static const char callback_005b4340[] = "x";
struct Init_005b4340 { Init_005b4340() { void* p = make_desc_005b4340(0, name_005b4340); global_desc_005b4340.attach(p); register_desc_005b4340((void (*)())&callback_005b4340); } };
Init_005b4340* func_005b4340() { static Init_005b4340 init; return &init; }
