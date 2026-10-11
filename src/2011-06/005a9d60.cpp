// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005a9d60(int, const char*);
struct Descriptor_005a9d60 { void attach(void*); };
extern Descriptor_005a9d60 global_desc_005a9d60;
extern void register_desc_005a9d60(void (*)());
static const char name_005a9d60[] = "FriendService";
static const char callback_005a9d60[] = "x";
struct Init_005a9d60 { Init_005a9d60() { void* p = make_desc_005a9d60(0, name_005a9d60); global_desc_005a9d60.attach(p); register_desc_005a9d60((void (*)())&callback_005a9d60); } };
Init_005a9d60* func_005a9d60() { static Init_005a9d60 init; return &init; }
