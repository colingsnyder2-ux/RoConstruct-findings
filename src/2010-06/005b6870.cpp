// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6870(int, const char*);
struct Descriptor_005b6870 { void attach(void*); };
extern Descriptor_005b6870 global_desc_005b6870;
extern void register_desc_005b6870(void (*)());
static const char name_005b6870[] = "GuiMain";
static const char callback_005b6870[] = "x";
struct Init_005b6870 { Init_005b6870() { void* p = make_desc_005b6870(0, name_005b6870); global_desc_005b6870.attach(p); register_desc_005b6870((void (*)())&callback_005b6870); } };
Init_005b6870* func_005b6870() { static Init_005b6870 init; return &init; }
