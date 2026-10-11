// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b3d90(int, const char*);
struct Descriptor_005b3d90 { void attach(void*); };
extern Descriptor_005b3d90 global_desc_005b3d90;
extern void register_desc_005b3d90(void (*)());
static const char name_005b3d90[] = "CollectionService";
static const char callback_005b3d90[] = "x";
struct Init_005b3d90 { Init_005b3d90() { void* p = make_desc_005b3d90(0, name_005b3d90); global_desc_005b3d90.attach(p); register_desc_005b3d90((void (*)())&callback_005b3d90); } };
Init_005b3d90* func_005b3d90() { static Init_005b3d90 init; return &init; }
