// from server: 54% by tester
struct CXTColorSelectorCtrl
{
    char pad0[0x54];
    char field_54[0x7c];
    int field_d0;
    char field_d4[0x8];
    char field_dc[0xb0];
    int field_18c;

    void sub_69f5a0();
};

extern "C" void __cdecl sub_6305da();
extern "C" void __cdecl sub_6304c0();
extern "C" void __cdecl sub_69f1e0();
extern "C" void __cdecl sub_69f1a0();
extern "C" void* __cdecl sub_6978f0();
extern "C" void __stdcall sub_692160(void*);
extern "C" unsigned long __stdcall GetSysColor(int);
extern "C" void* __stdcall sub_77ee58(int);

void CXTColorSelectorCtrl::sub_69f5a0()
{
    sub_6305da();
    *(int*)this = 0x7cc674;
    *(int*)((char*)this + 0x1c) = 0;
    sub_69f1e0();
    sub_692160((char*)this + 0x54);
    *(int*)((char*)this + 0x54) = 0x7d2e84;
    *(int*)this = 0x7d2e94;
    GetSysColor(0);
    sub_6304c0();
    sub_69f1a0();
    *(char*)((char*)this + 0x81) = 0;
    *(char*)((char*)this + 0x80) = 0;
    *(int*)((char*)this + 0xcc) = 0;
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0x88) = 0;
    *(int*)((char*)this + 0x8c) = 0;
    *(int*)((char*)this + 0x18c) = 0;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x6c) = 0;
    void* p = sub_6978f0();
    int v = *(int*)((char*)p + 0xc0);
    if (v < 0x10)
    {
        p = sub_6978f0();
        v = *(int*)((char*)p + 0xc0);
    }
    else
    {
        v = 0x10;
    }
    *(int*)((char*)this + 0x90) = v;
    p = sub_6978f0();
    v = *(int*)((char*)p + 0xc4);
    if (v < 0x10)
    {
        p = sub_6978f0();
        v = *(int*)((char*)p + 0xc4);
    }
    else
    {
        v = 0x10;
    }
    *(int*)((char*)this + 0x94) = v;
    *(int*)((char*)this + 0xc8) = 0;
    *(int*)((char*)this + 0x78) = (int)sub_77ee58(0x12);
    *(int*)((char*)this + 0x70) = (int)sub_77ee58(0xf);
    *(int*)((char*)this + 0x74) = (int)sub_77ee58(0xf);
}
