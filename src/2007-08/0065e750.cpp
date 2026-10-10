// from server: 46% by colin
struct CXTPReportColumn
{
    void construct(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7);
};

extern "C" void __stdcall sub_73833A();
extern "C" void __stdcall sub_77DDB8();
extern "C" void __stdcall sub_77DDAC();
extern "C" void __stdcall sub_77EE14();
extern "C" void* __cdecl sub_62FEF6(int);
extern "C" void __stdcall sub_6549F0();

void CXTPReportColumn::construct(
    int a1,
    int a2,
    int a3,
    int a4,
    int a5,
    int a6,
    int a7)
{
    sub_73833A();

    *(int*)((char*)this + 0x00) = 0x7c8c3c;

    sub_77DDB8();
    *(int*)((char*)this + 0x20) = a1;

    sub_77DDAC();
    *(int*)((char*)this + 0x24) = a2;

    *(int*)((char*)this + 0x28) = a3;

    sub_77DDAC();
    *(int*)((char*)this + 0x2c) = a4;

    *(int*)((char*)this + 0x34) = 0;
    *(int*)((char*)this + 0x30) = 0x794a08;

    *(int*)((char*)this + 0x40) = a5;
    *(int*)((char*)this + 0x58) = a6;
    *(int*)((char*)this + 0x5c) = a7;
    *(int*)((char*)this + 0x88) = 10;
    *(int*)((char*)this + 0x44) = 1;
    *(int*)((char*)this + 0x48) = 1;
    *(int*)((char*)this + 0x60) = 1;
    *(int*)((char*)this + 0x64) = a1;

    sub_77EE14();
    *(int*)((char*)this + 0x94) = -1;
    *(int*)((char*)this + 0x98) = -1;

    *(int*)((char*)this + 0x54) = 0;
    *(int*)((char*)this + 0x3c) = 1;
    *(int*)((char*)this + 0x50) = 1;
    *(int*)((char*)this + 0x4c) = 1;
    *(int*)((char*)this + 0x8c) = 0;
    *(int*)((char*)this + 0x90) = 0;
    *(int*)((char*)this + 0x38) = 1;
    *(int*)((char*)this + 0xa4) = a1;
    *(int*)((char*)this + 0x9c) = a2;
    *(int*)((char*)this + 0xa0) = a2;
    *(int*)((char*)this + 0xa8) = 1;
    *(int*)((char*)this + 0xac) = 1;

    void* p = sub_62FEF6(0x4c);
    if (p != 0)
    {
        sub_6549F0();
        *(int*)((char*)this + 0xb0) = (int)p;
    }
    else
    {
        *(int*)((char*)this + 0xb0) = 0;
    }
}
