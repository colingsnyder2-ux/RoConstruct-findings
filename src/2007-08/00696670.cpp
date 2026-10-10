// from server: 39% by colin
struct CXTPToolTipContext_COffice2007ToolTip
{
    void Init(int, int, int, int, int, int);
};

extern "C" void* __stdcall sub_77DDB8(void*);
extern "C" void* __cdecl sub_710F20();
extern "C" void* __cdecl sub_710820(void*);
extern "C" void* __cdecl sub_682240(void*, void*, int, int, int);
extern "C" void* __cdecl sub_682270(void*);
extern "C" void* __cdecl sub_6308AA(void*, void*, int, int);

void CXTPToolTipContext_COffice2007ToolTip::Init(int a1, int a2, int a3, int a4, int a5, int a6)
{
    void* p1;
    void* p2;
    void* p3;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;

    p1 = sub_77DDB8((void*)0x7d1450);
    p2 = sub_77DDB8((void*)0x787950);
    v1 = (int)sub_710820(sub_710F20());

    p3 = sub_77DDB8((void*)0x7d1444);
    v2 = (int)sub_710820(sub_710F20());

    sub_77DDB8((void*)0x7d1434);
    sub_77DDB8((void*)0x787950);
    v3 = (int)sub_710820(sub_710F20());

    if (v1 == -1)
        v1 = 0xffffff;
    if (v2 == -1)
        v2 = 0xefd9c9;
    if (v3 == -1)
        v3 = 0x767676;

    v4 = (int)sub_682240((void*)a1, (void*)a2, v1, v2, 0);
    sub_682270((void*)v4);

    v5 = v3;
    v6 = v3;
    sub_6308AA((void*)a1, (void*)&v5, v6, v5);
}
