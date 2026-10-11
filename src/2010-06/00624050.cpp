// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_00624050(int, const char*);
struct Descriptor_00624050 { void attach(void*); };
extern Descriptor_00624050 global_desc_00624050;
extern void register_desc_00624050(void (*)());
static const char name_00624050[] = "SoundService";
static const char callback_00624050[] = "x";
struct Init_00624050 { Init_00624050() { void* p = make_desc_00624050(0, name_00624050); global_desc_00624050.attach(p); register_desc_00624050((void (*)())&callback_00624050); } };
Init_00624050* func_00624050() { static Init_00624050 init; return &init; }
