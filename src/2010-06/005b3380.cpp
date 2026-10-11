// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3380(int, const char*);
struct Descriptor_005b3380 { void attach(void*); };
extern Descriptor_005b3380 global_desc_005b3380;
extern void register_desc_005b3380(void (*)());
static const char name_005b3380[] = "BillboardGui";
static const char callback_005b3380[] = "x";
struct Init_005b3380 { Init_005b3380() { void* p = make_desc_005b3380(0, name_005b3380); global_desc_005b3380.attach(p); register_desc_005b3380((void (*)())&callback_005b3380); } };
Init_005b3380* func_005b3380() { static Init_005b3380 init; return &init; }
