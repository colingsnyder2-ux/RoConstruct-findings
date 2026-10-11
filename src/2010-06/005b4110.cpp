// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4110(int, const char*);
struct Descriptor_005b4110 { void attach(void*); };
extern Descriptor_005b4110 global_desc_005b4110;
extern void register_desc_005b4110(void (*)());
static const char name_005b4110[] = "PhysicsSettings";
static const char callback_005b4110[] = "x";
struct Init_005b4110 { Init_005b4110() { void* p = make_desc_005b4110(0, name_005b4110); global_desc_005b4110.attach(p); register_desc_005b4110((void (*)())&callback_005b4110); } };
Init_005b4110* func_005b4110() { static Init_005b4110 init; return &init; }
