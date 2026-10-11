// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5220(int, const char*);
struct Descriptor_005b5220 { void attach(void*); };
extern Descriptor_005b5220 global_desc_005b5220;
extern void register_desc_005b5220(void (*)());
static const char name_005b5220[] = "Lighting";
static const char callback_005b5220[] = "x";
struct Init_005b5220 { Init_005b5220() { void* p = make_desc_005b5220(0, name_005b5220); global_desc_005b5220.attach(p); register_desc_005b5220((void (*)())&callback_005b5220); } };
Init_005b5220* func_005b5220() { static Init_005b5220 init; return &init; }
