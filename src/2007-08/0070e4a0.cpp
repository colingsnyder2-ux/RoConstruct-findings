// from server: 56% by colin
struct CXTColorPageCustom
{
    char pad[0x88];
    char field_88[0x88];
    char field_110[0x110];
    char pad2[0x794 - 0x110 - 0x88];
    int field_794;
    int field_798;
    int field_79c;
    void* field_7a0;

    void sub_70e4a0(int, int);
    void sub_70c6b0(int, int, int, int);
    int sub_70c620(double, double, double);
    void sub_70c680(int);
};

extern "C" void __stdcall sub_68ee30(int, int);

void CXTColorPageCustom::sub_70e4a0(int a, int b)
{
    int v8;
    int v12;
    int v16;
    int v20;

    if (b == *(int*)((char*)this + 0x88 + 0x20))
    {
        sub_70c6b0(a, (int)&v8, (int)&field_79c, (int)&field_794);
        double d1 = (double)field_79c / *(double*)0x78d3a8;
        double d2 = (double)field_798 / *(double*)0x78d3a8;
        double d3 = (double)field_794 / *(double*)0x78d3a8;
        int r = sub_70c620(d3, d2, d1);
        (*(void(__thiscall**)(char*, int, int))(*(int*)((char*)this + 0x110) + 0x144))((char*)this + 0x110, r, 0);
    }

    if (b == *(int*)((char*)this + 0x110 + 0x20))
    {
        sub_70c6b0(a, (int)&v8, (int)&field_798, (int)&v16);
        double d1 = (double)field_79c / *(double*)0x78d3a8;
        double d2 = (double)field_798 / *(double*)0x78d3a8;
        double d3 = (double)field_794 / *(double*)0x78d3a8;
        int r = sub_70c620(d3, d2, d1);
        (*(void(__thiscall**)(char*, int, int))(*(int*)((char*)this + 0x88) + 0x144))((char*)this + 0x88, r, 0);
    }

    if (b == 0)
    {
        sub_70c6b0(a, (int)&v8, (int)&field_798, (int)&field_79c);
        (*(void(__thiscall**)(char*, int, int))(*(int*)((char*)this + 0x88) + 0x144))((char*)this + 0x88, v8, 1);
        (*(void(__thiscall**)(char*, int, int))(*(int*)((char*)this + 0x110) + 0x144))((char*)this + 0x110, v8, 1);
    }

    if (v8 != *(int*)((char*)field_7a0 + 0x124))
    {
        sub_68ee30(v8, 0);
    }

    sub_70c680(v8);
}
