// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6b10(int, const char*);
struct Descriptor_005b6b10 { void attach(void*); };
extern Descriptor_005b6b10 global_desc_005b6b10;
extern void register_desc_005b6b10(void (*)());
static const char name_005b6b10[] = "TextBox";
static const char callback_005b6b10[] = "x";
struct Init_005b6b10 { Init_005b6b10() { void* p = make_desc_005b6b10(0, name_005b6b10); global_desc_005b6b10.attach(p); register_desc_005b6b10((void (*)())&callback_005b6b10); } };
Init_005b6b10* func_005b6b10() { static Init_005b6b10 init; return &init; }
