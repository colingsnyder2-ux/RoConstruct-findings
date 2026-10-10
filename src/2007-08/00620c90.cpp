// from server: 26% by colin
struct ScoreHud {
    char pad0[4];
    int field4;
    int field8;
    char padC[4];
    char field10[12];
    char field1C[4];
    void func(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void __stdcall sub_61DAE0(int, int, int);
extern "C" void __stdcall sub_61F550();
extern "C" void __stdcall sub_6207A0();
extern "C" void __stdcall sub_5E2FA0();
extern "C" void __stdcall sub_429B20();
extern "C" void __stdcall sub_77E6D8();
extern "C" void __stdcall sub_77E6AC();

void ScoreHud::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16)
{
    int ebx = field8;
    int ebp;
    int edi;
    int local10;
    int local14;
    int local20;
    int local28;
    int local30;
    int local34;
    int local50;
    int local54;

    local28 = 1;
    if (field4 > ebx)
        sub_77E6D8();

    ebp = field8;
    if (field4 > ebp)
        sub_77E6D8();

    edi = field4;
    if (edi > field8)
        sub_77E6D8();

    sub_61DAE0(edi, ebp, (int)&local54);
    edi = (int)&local54;

    if (this != 0)
    {
        if (this != this)
            sub_77E6D8();
    }
    else
    {
        sub_77E6D8();
    }

    if (edi == ebx)
    {
        sub_429B20();
    }

    sub_61F550();
    local10 = *(int*)((char*)this + 0x10);
    local14 = *(int*)((char*)this + 0x14);

    sub_61F550();
    ebp = *(int*)((char*)this + 0x18);

    sub_61F550();
    ebx = (int)this;
    edi = *(int*)((char*)this + 0x1C);

    sub_61DAE0(edi, ebp, (int)&local34);
    edi = (int)&local34;

    if (ebx != 0)
    {
        if (ebx != local10)
            sub_77E6D8();
    }
    else
    {
        sub_77E6D8();
    }

    if (edi == local10)
    {
        sub_61F550();
        sub_429B20();
    }

    sub_6207A0();
    sub_5E2FA0();
    *(int*)0 = local20;

    sub_77E6AC();
    sub_77E6AC();
}
