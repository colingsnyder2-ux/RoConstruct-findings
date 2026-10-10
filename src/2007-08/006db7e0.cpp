// from server: 59% by colin
struct CXTPDockingPaneAutoHideWnd
{
    void dtor();
};

extern "C" void __stdcall sub_006dae80(int);
extern "C" void __stdcall sub_0062fcec();
extern "C" void __stdcall sub_006305e0();
extern "C" void __stdcall sub_0071fac0();

void CXTPDockingPaneAutoHideWnd::dtor()
{
    *(int*)((char*)this + 0x00) = 0x7d91ec;
    *(int*)((char*)this + 0x54) = 0x7d918c;

    int* p = *(int**)((char*)this + 0xa8);
    if (p != 0)
    {
        *(int*)((char*)p + 0xe4) = 0;
        p = *(int**)((char*)this + 0xa8);
        *(int*)((char*)p + 0xe8) = 0;
        sub_006dae80(0);
    }

    if (*(int*)((char*)this + 0x20) != 0)
    {
        sub_0062fcec();
    }

    int* q = *(int**)((char*)this + 0xb0);
    if (q != 0)
    {
        (*(void(__thiscall**)(int*, int))(*(int*)q + 4))(q, 1);
    }

    q = *(int**)((char*)this + 0xb4);
    if (q != 0)
    {
        (*(void(__thiscall**)(int*, int))(*(int*)q + 4))(q, 1);
    }

    sub_0071fac0();
    sub_006305e0();
}
