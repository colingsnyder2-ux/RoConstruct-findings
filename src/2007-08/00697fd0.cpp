// from server: 97% by colin
// roc 2007-08 00697fd0  unit: CPropertyGridItemBrickColor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697fd0
//
// 00697fd0  56                   push esi
// 00697fd1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00697fd5  8d442408             lea eax, [esp + 8]
// 00697fd9  50                   push eax
// 00697fda  66c7060000           mov word ptr [esi], 0
// 00697fdf  e8ec93fdff           call 0x6713d0
// 00697fe4  85c0                 test eax, eax
// 00697fe6  7510                 jne 0x697ff8
// 00697fe8  66c7060300           mov word ptr [esi], 3
// 00697fed  c746081c000000       mov dword ptr [esi + 8], 0x1c
// 00697ff4  5e                   pop esi
// 00697ff5  c21400               ret 0x14
// 00697ff8  b857000780           mov eax, 0x80070057
// 00697ffd  5e                   pop esi
// 00697ffe  c21400               ret 0x14

struct CPropertyGridItemBrickColor {
    short field_0;
    char pad_2[6];
    int field_8;
    int method(int, int, int, int, short*);
};

extern "C" int __stdcall sub_6713D0(short*);

int CPropertyGridItemBrickColor::method(int a, int b, int c, int d, short* out) {
    short local;
    *out = 0;
    int result = sub_6713D0(&local);
    if (result == 0) {
        *out = 3;
        *(int*)((char*)out + 8) = 0x1c;
        return 0;
    }
    return (int)0x80070057;
}
