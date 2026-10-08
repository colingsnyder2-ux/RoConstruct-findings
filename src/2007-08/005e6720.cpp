// from server: 74% by colin
// roc 2007-08 005e6720  unit: RBX::Flag  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e6720
//
// 005e6720  8b442408             mov eax, dword ptr [esp + 8]
// 005e6724  83f802               cmp eax, 2
// 005e6727  7519                 jne 0x5e6742
// 005e6729  56                   push esi
// 005e672a  8b742408             mov esi, dword ptr [esp + 8]
// 005e672e  56                   push esi
// 005e672f  b950e58a00           mov ecx, 0x8ae550
// 005e6734  ff1508e77700         call dword ptr [0x77e708]
// 005e673a  f6d8                 neg al
// 005e673c  1bc0                 sbb eax, eax
// 005e673e  23c6                 and eax, esi
// 005e6740  5e                   pop esi
// 005e6741  c3                   ret 
// 005e6742  8b542404             mov edx, dword ptr [esp + 4]
// 005e6746  c644240800           mov byte ptr [esp + 8], 0
// 005e674b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e674f  51                   push ecx
// 005e6750  50                   push eax
// 005e6751  52                   push edx
// 005e6752  e8a9befeff           call 0x5d2600
// 005e6757  83c40c               add esp, 0xc
// 005e675a  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info& rhs) const;
};

struct Flag {
    int m1(int a, int b);
};

int Flag::m1(int a, int b)
{
    if (b == 2) {
        extern type_info G1;
        extern type_info G2;
        return (G1 == G2) ? a : 0;
    }
    char tmp = 0;
    return ((int (__cdecl*)(int, int, int))0x5d2600)(a, b, *(int*)&tmp);
}
