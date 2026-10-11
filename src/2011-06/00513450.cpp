// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_00513450(int, const char*);
struct Descriptor_00513450 { void attach(void*); };
extern Descriptor_00513450 global_desc_00513450;
extern void register_desc_00513450(void (*)());
static const char name_00513450[] = "PhysicsPacketCache";
static const char callback_00513450[] = "x";
struct Init_00513450 { Init_00513450() { void* p = make_desc_00513450(0, name_00513450); global_desc_00513450.attach(p); register_desc_00513450((void (*)())&callback_00513450); } };
Init_00513450* func_00513450() { static Init_00513450 init; return &init; }
