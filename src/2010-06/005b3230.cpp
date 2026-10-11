// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3230(int, const char*);
struct Descriptor_005b3230 { void attach(void*); };
extern Descriptor_005b3230 global_desc_005b3230;
extern void register_desc_005b3230(void (*)());
static const char name_005b3230[] = "GuiBase";
static const char callback_005b3230[] = "x";
struct Init_005b3230 { Init_005b3230() { void* p = make_desc_005b3230(0, name_005b3230); global_desc_005b3230.attach(p); register_desc_005b3230((void (*)())&callback_005b3230); } };
Init_005b3230* func_005b3230() { static Init_005b3230 init; return &init; }
