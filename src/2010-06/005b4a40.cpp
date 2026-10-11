// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4a40(int, const char*);
struct Descriptor_005b4a40 { void attach(void*); };
extern Descriptor_005b4a40 global_desc_005b4a40;
extern void register_desc_005b4a40(void (*)());
static const char name_005b4a40[] = "FileMesh";
static const char callback_005b4a40[] = "x";
struct Init_005b4a40 { Init_005b4a40() { void* p = make_desc_005b4a40(0, name_005b4a40); global_desc_005b4a40.attach(p); register_desc_005b4a40((void (*)())&callback_005b4a40); } };
Init_005b4a40* func_005b4a40() { static Init_005b4a40 init; return &init; }
