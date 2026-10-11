// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b7520(int, const char*);
struct Descriptor_005b7520 { void attach(void*); };
extern Descriptor_005b7520 global_desc_005b7520;
extern void register_desc_005b7520(void (*)());
static const char name_005b7520[] = "BrickColorValue";
static const char callback_005b7520[] = "x";
struct Init_005b7520 { Init_005b7520() { void* p = make_desc_005b7520(0, name_005b7520); global_desc_005b7520.attach(p); register_desc_005b7520((void (*)())&callback_005b7520); } };
Init_005b7520* func_005b7520() { static Init_005b7520 init; return &init; }
