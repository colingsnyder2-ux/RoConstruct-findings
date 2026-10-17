// from server: 47% by colin
extern "C" void* __stdcall G_string_ctor(void*, const char*);
extern "C" double __cdecl G_time();
extern "C" void __cdecl G_init_5833e0(void*, int);

extern char g_str_TogglePlayMode[];
extern void* g_vtable_8190c4;
extern void* g_vtable_8190d8;

struct InsertModelFromRobloxVerb
{
    void* vtable;
    char pad[0xc];
    double field10;

    void* init(int);
};

void* InsertModelFromRobloxVerb::init(int arg)
{
    char buf[0x1c];
    G_string_ctor(buf, g_str_TogglePlayMode);
    G_init_5833e0(this, arg);
    this->vtable = &g_vtable_8190c4;
    this->field10 = G_time();

    return this;
}
