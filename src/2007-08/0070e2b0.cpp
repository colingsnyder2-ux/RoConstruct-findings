// from server: 85% by colin
struct CXTColorPageCustom
{
    char pad[0x88];
    char field_88[0x88];
    char field_110[0x684];
    char field_794[4];
    char field_798[4];
    char field_79c[4];
    char field_7a0[4];

    void func_0070e2b0();
};

extern void __stdcall G1_func_0070c6b0(char*, char*, char*, int);
extern void __stdcall G1_func_0070c680(int);
extern void __stdcall G1_func_007387ae();

void CXTColorPageCustom::func_0070e2b0()
{
    int edi = *(int*)(*(int*)((char*)this + 0x7a0) + 0x124);
    (*(void(__thiscall**)(char*, int, int))((*(int*)((char*)this + 0x88)) + 0x144))((char*)this + 0x88, edi, 1);
    (*(void(__thiscall**)(char*, int, int))((*(int*)((char*)this + 0x110)) + 0x144))((char*)this + 0x110, edi, 1);
    G1_func_0070c6b0((char*)this + 0x794, (char*)this + 0x79c, (char*)this + 0x798, edi);
    G1_func_0070c680(edi);
    G1_func_007387ae();
}
