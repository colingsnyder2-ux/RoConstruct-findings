// from server: 93% by colin
struct CXTPReportControlLocale
{
    char pad_0000[0xa0];
    void* field_a0;
    void* field_a4;
    void* field_a8;
    char pad_00ac[0x14];
    void* field_c0;
    char pad_00c4[0x0c];
    void* field_d0;
    char pad_00d4[0xec];
    void* field_1c0;
    void func_00655ee0();
    void func_00657410();
    void func_0065a610(int);
};

struct Sub641b0
{
    void func_006641b0();
};

struct Sub617e0
{
    void func_006617e0();
};

void CXTPReportControlLocale::func_0065a610(int arg)
{
    void* p = field_1c0;
    if (p)
    {
        (*(void (__thiscall**)(void*, int))(*(int*)p + 0x58))(p, 1);
    }
    if (field_a0)
    {
        (*(void (__thiscall**)(void*, int))(*(int*)field_a0 + 0x58))(field_a0, 1);
    }
    if (field_a4)
    {
        (*(void (__thiscall**)(void*, int))(*(int*)field_a4 + 0x58))(field_a4, 1);
    }
    if (field_d0)
    {
        ((Sub641b0*)field_d0)->func_006641b0();
    }
    if (field_a8)
    {
        ((Sub617e0*)field_a8)->func_006617e0();
    }
    if (arg)
    {
        func_00655ee0();
        (*(void (__thiscall**)(CXTPReportControlLocale*))(*(int*)this + 0x154))(this);
        func_00657410();
    }
}
