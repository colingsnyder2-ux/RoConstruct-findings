// from server: 90% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Descriptor { void make(int, const char*, int); };
extern Descriptor global_desc;
extern void register_desc(void (*)());
extern void callback();
struct Init { Init(){ global_desc.make(0,"Object",0); register_desc(&callback); } };
Init* func_005e58a0(){ static Init init; return &init; }
