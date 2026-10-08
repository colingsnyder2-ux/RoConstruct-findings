// from server: 87% by colin
// roc 2007-08 00559c90  unit: RBX::DataModel  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559c90
//
// 00559c90  8b442408             mov eax, dword ptr [esp + 8]
// 00559c94  83f802               cmp eax, 2
// 00559c97  7519                 jne 0x559cb2
// 00559c99  56                   push esi
// 00559c9a  8b742408             mov esi, dword ptr [esp + 8]
// 00559c9e  56                   push esi
// 00559c9f  b968e38900           mov ecx, 0x89e368
// 00559ca4  ff1508e77700         call dword ptr [0x77e708]
// 00559caa  f6d8                 neg al
// 00559cac  1bc0                 sbb eax, eax
// 00559cae  23c6                 and eax, esi
// 00559cb0  5e                   pop esi
// 00559cb1  c3                   ret 
// 00559cb2  8b542404             mov edx, dword ptr [esp + 4]
// 00559cb6  c644240800           mov byte ptr [esp + 8], 0
// 00559cbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00559cbf  51                   push ecx
// 00559cc0  50                   push eax
// 00559cc1  52                   push edx
// 00559cc2  e849feffff           call 0x559b10
// 00559cc7  83c40c               add esp, 0xc
// 00559cca  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S_func_00559c90 {
    int f(int a1, int a2);
};

extern "C" int __cdecl sub_00559b10(int, int, int);

int S_func_00559c90::f(int a1, int a2)
{
    if (a2 == 2) {
        type_info* p = (type_info*)0x89e368;
        if (*p == *(type_info*)a1)
            return a1;
        return 0;
    }
    char b = 0;
    return sub_00559b10(a1, a2, *(int*)&b);
}
