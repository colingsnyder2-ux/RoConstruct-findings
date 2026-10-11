// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6640(int, const char*);
struct Descriptor_005b6640 { void attach(void*); };
extern Descriptor_005b6640 global_desc_005b6640;
extern void register_desc_005b6640(void (*)());
static const char name_005b6640[] = "GuiService";
static const char callback_005b6640[] = "x";
struct Init_005b6640 { Init_005b6640() { void* p = make_desc_005b6640(0, name_005b6640); global_desc_005b6640.attach(p); register_desc_005b6640((void (*)())&callback_005b6640); } };
Init_005b6640* func_005b6640() { static Init_005b6640 init; return &init; }
