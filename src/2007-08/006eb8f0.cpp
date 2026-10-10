// from server: 50% by colin
extern "C" void __stdcall SetRect(int*, int, int, int, int);
extern void __cdecl sub_0062fef6_helper();
extern void __cdecl sub_006ae110_helper();
extern void __cdecl sub_006eb7d0_helper();
extern void __cdecl sub_006ff8d0_helper(void*, void*);
extern void __cdecl sub_00700b60_helper(void*, void*);
extern void __cdecl sub_007038a0_helper();

extern void* __cdecl operator_new(unsigned int);

struct XTPDockingPanePaintThemes_CXTPDockingPaneNativeXPTheme
{
    void func_006eb8f0();
};

void XTPDockingPanePaintThemes_CXTPDockingPaneNativeXPTheme::func_006eb8f0()
{
    sub_006eb7d0_helper();
    *(int*)this = 0x7dabfc;

    void* p1 = operator_new(0x2c);
    if (p1)
    {
        sub_007038a0_helper();
        *(int*)p1 = 0x7d56bc;
        SetRect((int*)((char*)p1 + 4), 2, 2, 4, 0);
        *(int*)p1 = 0x7d5704;
        *(int*)((char*)p1 + 0x24) = 1;
        *(int*)((char*)p1 + 0x28) = 0;
    }
    else
    {
        p1 = 0;
    }
    *(int*)((char*)p1 + 0x24) = 0;
    sub_00700b60_helper(*(void**)((char*)this + 0xa0), p1);

    void* p2 = operator_new(0x224);
    if (p2)
    {
        sub_006ae110_helper();
        *(int*)((char*)p2 + 0x220) = 0;
        *(int*)((char*)p2 + 0x218) = 0;
        *(int*)p2 = 0x7da68c;
        *(int*)((char*)p2 + 0x21c) = 1;
    }
    else
    {
        p2 = 0;
    }
    sub_006ff8d0_helper(*(void**)((char*)this + 0xa0), p2);
    *(int*)(*(int*)((char*)this + 0xa0) + 0xc0) = 1;

    void* p3 = operator_new(0x2c);
    if (p3)
    {
        sub_007038a0_helper();
        *(int*)p3 = 0x7d56bc;
        SetRect((int*)((char*)p3 + 4), 2, 2, 4, 0);
        *(int*)p3 = 0x7d5704;
        *(int*)((char*)p3 + 0x24) = 1;
        *(int*)((char*)p3 + 0x28) = 0;
    }
    else
    {
        p3 = 0;
    }
    *(int*)((char*)p3 + 0x24) = 0;
    *(int*)((char*)p3 + 0x28) = 1;
    sub_00700b60_helper(*(void**)((char*)this + 0x9c), p3);

    void* p4 = operator_new(0x224);
    if (p4)
    {
        sub_006ae110_helper();
        *(int*)((char*)p4 + 0x220) = 1;
        *(int*)((char*)p4 + 0x218) = 0;
        *(int*)p4 = 0x7da68c;
        *(int*)((char*)p4 + 0x21c) = 1;
    }
    else
    {
        p4 = 0;
    }
    sub_006ff8d0_helper(*(void**)((char*)this + 0x9c), p4);
    *(int*)(*(int*)((char*)this + 0x9c) + 0x38) = 1;
    *(int*)(*(int*)((char*)this + 0x9c) + 0x44) = 1;
}
