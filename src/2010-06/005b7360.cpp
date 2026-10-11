// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7360(int, const char*);
struct Descriptor_005b7360 { void attach(void*); };
extern Descriptor_005b7360 global_desc_005b7360;
extern void register_desc_005b7360(void (*)());
static const char name_005b7360[] = "Vector3Value";
static const char callback_005b7360[] = "x";
struct Init_005b7360 { Init_005b7360() { void* p = make_desc_005b7360(0, name_005b7360); global_desc_005b7360.attach(p); register_desc_005b7360((void (*)())&callback_005b7360); } };
Init_005b7360* func_005b7360() { static Init_005b7360 init; return &init; }
