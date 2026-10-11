// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_00624470(int, const char*);
struct Descriptor_00624470 { void attach(void*); };
extern Descriptor_00624470 global_desc_00624470;
extern void register_desc_00624470(void (*)());
static const char name_00624470[] = "D$$SUV";
static const char callback_00624470[] = "x";
struct Init_00624470 { Init_00624470() { void* p = make_desc_00624470(0, name_00624470); global_desc_00624470.attach(p); register_desc_00624470((void (*)())&callback_00624470); } };
Init_00624470* func_00624470() { static Init_00624470 init; return &init; }
