// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005134c0(int, const char*);
struct Descriptor_005134c0 { void attach(void*); };
extern Descriptor_005134c0 global_desc_005134c0;
extern void register_desc_005134c0(void (*)());
static const char name_005134c0[] = "InstancePacketCache";
static const char callback_005134c0[] = "x";
struct Init_005134c0 { Init_005134c0() { void* p = make_desc_005134c0(0, name_005134c0); global_desc_005134c0.attach(p); register_desc_005134c0((void (*)())&callback_005134c0); } };
Init_005134c0* func_005134c0() { static Init_005134c0 init; return &init; }
