// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7440(int, const char*);
struct Descriptor_005b7440 { void attach(void*); };
extern Descriptor_005b7440 global_desc_005b7440;
extern void register_desc_005b7440(void (*)());
static const char name_005b7440[] = "CFrameValue";
static const char callback_005b7440[] = "x";
struct Init_005b7440 { Init_005b7440() { void* p = make_desc_005b7440(0, name_005b7440); global_desc_005b7440.attach(p); register_desc_005b7440((void (*)())&callback_005b7440); } };
Init_005b7440* func_005b7440() { static Init_005b7440 init; return &init; }
