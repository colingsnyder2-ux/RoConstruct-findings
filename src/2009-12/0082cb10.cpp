// from server: 64% by atomic.potato
typedef unsigned long DWORD;

extern "C" DWORD __stdcall G_0098de80();
extern "C" void __stdcall G_0098cfd4(void*, DWORD);
extern "C" void __stdcall G_0098de84(void*, DWORD);

struct S_func_0082cb10
{
    char m_padding[0x40];
    DWORD m_40;
    void __thiscall f(void*, void*);
};

void __thiscall S_func_0082cb10::f(void* a, void* b)
{
    if (m_40 == 0)
        G_0098cfd4(a, G_0098de80());
    else
        G_0098de84(a, G_0098de80());
}
