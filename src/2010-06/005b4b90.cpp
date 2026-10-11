// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4b90(int, const char*);
struct Descriptor_005b4b90 { void attach(void*); };
extern Descriptor_005b4b90 global_desc_005b4b90;
extern void register_desc_005b4b90(void (*)());
static const char name_005b4b90[] = "FlagStand";
static const char callback_005b4b90[] = "x";
struct Init_005b4b90 { Init_005b4b90() { void* p = make_desc_005b4b90(0, name_005b4b90); global_desc_005b4b90.attach(p); register_desc_005b4b90((void (*)())&callback_005b4b90); } };
Init_005b4b90* func_005b4b90() { static Init_005b4b90 init; return &init; }
