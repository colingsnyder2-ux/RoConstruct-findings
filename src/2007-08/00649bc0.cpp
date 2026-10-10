// from server: 87% by colin
struct CXTPCommandBar
{
    char pad0[0x24];
    int field_24;
    int field_28;
    int field_2c;
    char field_30[0x10];
    char field_40[0x10];
    char field_50[0x10];
    char field_60[0x10];
    char field_70[0x10];
    char field_80[0x10];
    char field_90[0x10];
    char field_a0[0x10];
    int field_b0;
    int field_b4;
    int field_b8;

    CXTPCommandBar *construct(int a, int b, int c, int d);
};

extern "C" void __fastcall sub_0073833a(void *p);
extern "C" void __fastcall sub_00648580(void *p);

CXTPCommandBar *CXTPCommandBar::construct(int a, int b, int c, int d)
{
    sub_0073833a(this);
    field_28 = c;
    field_24 = a;
    field_2c = b;
    *(void **)this = (void *)0x7c6bfc;
    sub_00648580(&field_30);
    sub_00648580(&field_40);
    sub_00648580(&field_50);
    sub_00648580(&field_60);
    sub_00648580(&field_70);
    sub_00648580(&field_80);
    sub_00648580(&field_90);
    sub_00648580(&field_a0);
    field_b4 = 0;
    field_b0 = 0;
    field_b8 = d;
    return this;
}
