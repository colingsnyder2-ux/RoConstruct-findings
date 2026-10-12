// from server: 54% by colin
struct ChangePropertyItem {
    void* vtable;
    int field4;
    void* f(void* arg);
};

extern "C" void* __cdecl sub_6A17C6(void* a, int b, void* c, void* d, int e);
extern "C" void* __cdecl sub_6A158C(void* a, void* b);
extern "C" void* __stdcall sub_802864(void* a);

extern void* g_9295B4;
extern void* g_93ADC0;
extern void* g_80BA34;
extern void* g_8D362C;

void* ChangePropertyItem::f(void* arg)
{
    void* result = sub_6A17C6(vtable, 0, &g_9295B4, &g_93ADC0, 0);
    if (result == 0) {
        char buffer[8];
        sub_802864(&g_80BA34);
        sub_6A158C(&g_8D362C, buffer);
    }
    int saved = field4;
    void* a = arg;
    return ((void* (__thiscall*)(void*, int, void*))0x4ACB30)(result, saved, a);
}
