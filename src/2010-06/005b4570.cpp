// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b4570(int, const char*);
struct Descriptor_005b4570 { void attach(void*); };
extern Descriptor_005b4570 global_desc_005b4570;
extern void register_desc_005b4570(void (*)());
static const char name_005b4570[] = "D$$SUV";
static const char callback_005b4570[] = "x";
struct Init_005b4570 { Init_005b4570() { void* p = make_desc_005b4570(0, name_005b4570); global_desc_005b4570.attach(p); register_desc_005b4570((void (*)())&callback_005b4570); } };
Init_005b4570* func_005b4570() { static Init_005b4570 init; return &init; }
