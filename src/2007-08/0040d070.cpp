// from server: 68% by colin
struct CGdiObject {
    char pad0[0x20];
    void* m_hObject;
    char pad1[0x70];
    int m_brush;
    int f(int);
};

extern "C" void* __stdcall CreateSolidBrush(unsigned int);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern "C" void* __stdcall sub_630238(void*, void*);
extern "C" int __stdcall sub_630256(void*, int);
extern "C" void __stdcall sub_63dcb0(int);
extern "C" void __stdcall sub_630016(void*, void*);

extern void* g_77d0d0;
extern void* g_77ecd8;
extern void* g_881dd8;
extern void* g_8c86d8;

int CGdiObject::f(int a)
{
    void* brush = CreateSolidBrush(0x404040);
    sub_630238(&m_brush, brush);
    int r = sub_630256(this, a);
    if (r != -1)
        return 0;
    if (g_8c86d8 == 0)
        sub_63dcb0(0);
    void* p = (char*)g_8c86d8 + 0xe0;
    void* q;
    if (p == 0)
        q = 0;
    else
        q = *(void**)((char*)p + 4);
    SendMessageA(m_hObject, 0x30, (unsigned int)q, 1);
    sub_630016(this, g_881dd8);
    return 0;
}
