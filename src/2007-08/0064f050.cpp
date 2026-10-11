// from server: 100% by colin
// roc 2007-08 0064f050  unit: CXTPToolBar  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064f050
//
// 0064f050  56                   push esi
// 0064f051  8bf1                 mov esi, ecx
// 0064f053  8b06                 mov eax, dword ptr [esi]
// 0064f055  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 0064f05b  ffd2                 call edx
// 0064f05d  85c0                 test eax, eax
// 0064f05f  7504                 jne 0x64f065
// 0064f061  33c0                 xor eax, eax
// 0064f063  5e                   pop esi
// 0064f064  c3                   ret 
// 0064f065  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0064f06b  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 0064f06f  7409                 je 0x64f07a
// 0064f071  e8facd0200           call 0x67be70
// 0064f076  85c0                 test eax, eax
// 0064f078  74e7                 je 0x64f061
// 0064f07a  b801000000           mov eax, 1
// 0064f07f  5e                   pop esi
// 0064f080  c3                   ret 

struct CXTPToolBar {
    virtual int vfunc_0000();
    virtual int vfunc_0004();
    virtual int vfunc_0008();
    virtual int vfunc_000c();
    virtual int vfunc_0010();
    virtual int vfunc_0014();
    virtual int vfunc_0018();
    virtual int vfunc_001c();
    virtual int vfunc_0020();
    virtual int vfunc_0024();
    virtual int vfunc_0028();
    virtual int vfunc_002c();
    virtual int vfunc_0030();
    virtual int vfunc_0034();
    virtual int vfunc_0038();
    virtual int vfunc_003c();
    virtual int vfunc_0040();
    virtual int vfunc_0044();
    virtual int vfunc_0048();
    virtual int vfunc_004c();
    virtual int vfunc_0050();
    virtual int vfunc_0054();
    virtual int vfunc_0058();
    virtual int vfunc_005c();
    virtual int vfunc_0060();
    virtual int vfunc_0064();
    virtual int vfunc_0068();
    virtual int vfunc_006c();
    virtual int vfunc_0070();
    virtual int vfunc_0074();
    virtual int vfunc_0078();
    virtual int vfunc_007c();
    virtual int vfunc_0080();
    virtual int vfunc_0084();
    virtual int vfunc_0088();
    virtual int vfunc_008c();
    virtual int vfunc_0090();
    virtual int vfunc_0094();
    virtual int vfunc_0098();
    virtual int vfunc_009c();
    virtual int vfunc_00a0();
    virtual int vfunc_00a4();
    virtual int vfunc_00a8();
    virtual int vfunc_00ac();
    virtual int vfunc_00b0();
    virtual int vfunc_00b4();
    virtual int vfunc_00b8();
    virtual int vfunc_00bc();
    virtual int vfunc_00c0();
    virtual int vfunc_00c4();
    virtual int vfunc_00c8();
    virtual int vfunc_00cc();
    virtual int vfunc_00d0();
    virtual int vfunc_00d4();
    virtual int vfunc_00d8();
    virtual int vfunc_00dc();
    virtual int vfunc_00e0();
    virtual int vfunc_00e4();
    virtual int vfunc_00e8();
    virtual int vfunc_00ec();
    virtual int vfunc_00f0();
    virtual int vfunc_00f4();
    virtual int vfunc_00f8();
    virtual int vfunc_00fc();
    virtual int vfunc_0100();
    virtual int vfunc_0104();
    virtual int vfunc_0108();
    virtual int vfunc_010c();
    virtual int vfunc_0110();
    virtual int vfunc_0114();
    virtual int vfunc_0118();
    virtual int vfunc_011c();
    virtual int vfunc_0120();
    virtual int vfunc_0124();
    virtual int vfunc_0128();
    virtual int vfunc_012c();
    virtual int vfunc_0130();
    virtual int vfunc_0134();
    virtual int vfunc_0138();
    virtual int vfunc_013c();
    virtual int vfunc_0140();
    virtual int vfunc_0144();
    virtual int vfunc_0148();
    virtual int vfunc_014c();
    virtual int vfunc_0150();
    virtual int vfunc_0154();
    virtual int vfunc_0158();
    virtual int vfunc_015c();
    virtual int vfunc_0160();
    virtual int vfunc_0164();
    virtual int vfunc_0168();
    virtual int vfunc_016c();
    virtual int vfunc_0170();
    virtual int vfunc_0174();
    virtual int vfunc_0178();
    int field_0xf8;
    int method_0064f050();
};

extern int __fastcall func_0067be70(int);

int CXTPToolBar::method_0064f050()
{
    if (vfunc_0178() == 0)
        return 0;
    int* p = *(int**)((char*)this + 0xf8);
    if (p[0x3c / 4] != 0)
    {
        if (func_0067be70(*(int*)((char*)this + 0xf8)) == 0)
            return 0;
    }
    return 1;
}
