// from server: 51% by colin
// roc 2007-08 00682930  unit: CXTPPropertyGridToolBar  size: 231 bytes
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /MD

struct CXTPPropertyGridToolBar
{
    void Destructor();
};

extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_6305E0(void*);
extern "C" void __stdcall sub_6828F0(void*);

void CXTPPropertyGridToolBar::Destructor()
{
    *(void**)this = (void*)0x7cef54;

    void* p;

    p = *(void**)((char*)this + 0x144);
    if (p != 0)
    {
        (*(void(__thiscall**)(void*, int))*(void**)p)(p, 1);
    }

    p = *(void**)((char*)this + 0x130);
    if (p != 0)
    {
        sub_6301E4(p);
        *(void**)((char*)this + 0x130) = 0;
    }

    p = *(void**)((char*)this + 0x14c);
    if (p != 0)
    {
        sub_6301E4(p);
        *(void**)((char*)this + 0x14c) = 0;
    }

    p = *(void**)((char*)this + 0x158);
    if (p != 0)
    {
        (*(void(__thiscall**)(void*, int))*(void**)p)(p, 1);
        *(void**)((char*)this + 0x158) = 0;
    }

    p = *(void**)((char*)this + 0x15c);
    if (p != 0)
    {
        (*(void(__thiscall**)(void*, int))*(void**)p)(p, 1);
        *(void**)((char*)this + 0x15c) = 0;
    }

    p = *(void**)((char*)this + 0x13c);
    if (p != 0)
    {
        (*(void(__thiscall**)(void*, int))*(void**)p)(p, 1);
    }

    sub_6828F0((char*)this + 0x68);
    sub_6305E0(this);
}
