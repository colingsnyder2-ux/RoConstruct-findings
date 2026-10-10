// from server: 56% by colin
struct CXTPDockingPaneMiniWnd
{
    void* vfptr;
    char pad[0xdc];
    void* field_e0;
    char pad2[0x2c];
    void* field_110;
    char pad3[0x0c];
    int field_120;
    int field_124;
    int field_128;
    int field_12c;
    int field_130;
    int field_134;
    int field_138;
    int field_13c;
    int field_140;

    CXTPDockingPaneMiniWnd(void* param);
};

extern "C" void __stdcall sub_738C22();
extern "C" void __stdcall sub_6E0730(void* p, int n, void* arg);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __stdcall sub_6D2910(void* p1, void* p2);
extern "C" void __stdcall sub_6DF100(void* p);
extern "C" void __stdcall SetRectEmpty(void* p);

extern void* g_8b5188;
extern int g_8b8888;
extern int g_8b888c;
extern void* g_77ee14;

CXTPDockingPaneMiniWnd::CXTPDockingPaneMiniWnd(void* param)
{
    sub_738C22();
    sub_6E0730(&field_e0, 3, param);
    vfptr = (void*)0x7d97b4;
    field_e0 = (void*)0x7d9754;
    field_110 = 0;
    field_120 = 0;

    void* p1 = sub_62FEF6(0x14);
    if (p1 == 0)
    {
        sub_6DF100(p1);
        *(void**)p1 = (void*)0x7d9968;
    }
    else
    {
        p1 = 0;
    }
    field_110 = p1;

    void* p2 = sub_62FEF6(0x24);
    if (p2 != 0)
    {
        *(int*)((char*)p2 + 0x14) = 0x24f1;
        *(void**)((char*)p2 + 0x10) = &field_e0;
        *(int*)((char*)p2 + 0x1c) = 0;
        *(int*)((char*)p2 + 0x18) = 0;
        *(int*)((char*)p2 + 0x20) = 0;
        ((void (__stdcall*)(void*))g_77ee14)(p2);
    }
    else
    {
        p2 = 0;
    }
    sub_6D2910(*(void**)((char*)field_110 + 8), p2);

    void* p3 = sub_62FEF6(0x24);
    if (p3 != 0)
    {
        *(int*)((char*)p3 + 0x14) = 0x24f0;
        *(void**)((char*)p3 + 0x10) = &field_e0;
        *(int*)((char*)p3 + 0x1c) = 0;
        *(int*)((char*)p3 + 0x18) = 0;
        *(int*)((char*)p3 + 0x20) = 0;
        ((void (__stdcall*)(void*))g_77ee14)(p3);
    }
    else
    {
        p3 = 0;
    }
    sub_6D2910(*(void**)((char*)field_110 + 8), p3);

    void* p4 = sub_62FEF6(0x24);
    if (p4 != 0)
    {
        *(int*)((char*)p4 + 0x14) = 0x24f4;
        *(void**)((char*)p4 + 0x10) = &field_e0;
        *(int*)((char*)p4 + 0x1c) = 0;
        *(int*)((char*)p4 + 0x18) = 0;
        *(int*)((char*)p4 + 0x20) = 0;
        ((void (__stdcall*)(void*))g_77ee14)(p4);
    }
    else
    {
        p4 = 0;
    }
    sub_6D2910(*(void**)((char*)field_110 + 8), p4);

    field_134 = 0;
    field_138 = 0;
    field_13c = 0;
    field_124 = 0;
    field_12c = 0;

    int val;
    if (g_8b8888 != 0)
    {
        val = g_8b888c / g_8b8888;
        if (val < 1)
            val = 1;
    }
    else
    {
        val = 1;
    }
    field_128 = val;
    field_140 = 0;
}
