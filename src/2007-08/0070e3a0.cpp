// from server: 60% by colin
struct CXTColorPageCustom
{
    char pad[0x88];
    int field_88;
    char pad2[0x110 - 0x88 - 4];
    int field_110;
    char pad3[0x794 - 0x110 - 4];
    int field_794;
    char pad4[0x7a0 - 0x794 - 4];
    int field_7a0;

    void func_70e3a0();
};

extern "C" void __stdcall func_62feea(int);
extern "C" void __stdcall func_68ee30(int, int);
extern "C" void __stdcall func_70c680();
extern "C" void __stdcall func_70d0e0(double);

extern double dbl_78d3a8;

void CXTColorPageCustom::func_70e3a0()
{
    func_62feea(1);
    double d = (double)field_794 / dbl_78d3a8;
    func_70d0e0(d);

    int v1 = (*(int (__thiscall **)(int *))(*(int *)((char *)this + 0x88) + 0x148))((int *)((char *)this + 0x88));
    int v2 = (*(int (__thiscall **)(int *))(*(int *)((char *)this + 0x110) + 0x148))((int *)((char *)this + 0x110));
    if (v1 != v2)
    {
        (*(void (__thiscall **)(int *, int, int))(*(int *)((char *)this + 0x110) + 0x144))((int *)((char *)this + 0x110), v1, 0);
    }
    int v3 = *(int *)((char *)this + 0x7a0);
    if (v1 != *(int *)(v3 + 0x124))
    {
        func_68ee30(v1, 0);
    }
    func_70c680();
}
