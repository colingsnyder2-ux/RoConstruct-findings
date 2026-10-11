// from server: 99% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" void* __stdcall make_desc_005b5a70(int, const char*);
struct Descriptor_005b5a70 { void attach(void*); };
extern Descriptor_005b5a70 global_desc_005b5a70;
extern void register_desc_005b5a70(void (*)());
static const char name_005b5a70[] = ".?AV?$FactoryProduct@VSky@RBX@@VInstance@2@$1?sSky@2@3PADA@RBX@@";
static const char callback_005b5a70[] = "x";
struct Init_005b5a70 { Init_005b5a70() { void* p = make_desc_005b5a70(0, name_005b5a70); global_desc_005b5a70.attach(p); register_desc_005b5a70((void (*)())&callback_005b5a70); } };
Init_005b5a70* func_005b5a70() { static Init_005b5a70 init; return &init; }
