// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_00444150(int, const char*);
struct Descriptor_00444150 { void attach(void*); };
extern Descriptor_00444150 global_desc_00444150;
extern void register_desc_00444150(void (*)());
static const char name_00444150[] = "ReflectionMetadata";
static const char callback_00444150[] = "x";
struct Init_00444150 { Init_00444150() { void* p = make_desc_00444150(0, name_00444150); global_desc_00444150.attach(p); register_desc_00444150((void (*)())&callback_00444150); } };
Init_00444150* func_00444150() { static Init_00444150 init; return &init; }
