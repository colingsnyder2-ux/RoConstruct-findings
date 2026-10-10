// from server: 91% by colin
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
void* __stdcall make_desc(int, const char*, int);
struct Descriptor { void attach(void*); };
extern Descriptor global_desc;
extern void register_desc(void (*)());
extern void callback();
struct Init { Init() {
    void* p = make_desc(0, "Authoring", 0);
    global_desc.attach(p);
    register_desc(&callback);
} };
Init* func_0040a780() { static Init init; return &init; }
