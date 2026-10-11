// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4730(int, const char*);
struct Descriptor_005b4730 { void attach(void*); };
extern Descriptor_005b4730 global_desc_005b4730;
extern void register_desc_005b4730(void (*)());
static const char name_005b4730[] = "RotateV";
static const char callback_005b4730[] = "x";
struct Init_005b4730 { Init_005b4730() { void* p = make_desc_005b4730(0, name_005b4730); global_desc_005b4730.attach(p); register_desc_005b4730((void (*)())&callback_005b4730); } };
Init_005b4730* func_005b4730() { static Init_005b4730 init; return &init; }
