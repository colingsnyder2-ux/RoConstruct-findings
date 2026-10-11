// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b6a30(int, const char*);
struct Descriptor_005b6a30 { void attach(void*); };
extern Descriptor_005b6a30 global_desc_005b6a30;
extern void register_desc_005b6a30(void (*)());
static const char name_005b6a30[] = "TextButton";
static const char callback_005b6a30[] = "x";
struct Init_005b6a30 { Init_005b6a30() { void* p = make_desc_005b6a30(0, name_005b6a30); global_desc_005b6a30.attach(p); register_desc_005b6a30((void (*)())&callback_005b6a30); } };
Init_005b6a30* func_005b6a30() { static Init_005b6a30 init; return &init; }
