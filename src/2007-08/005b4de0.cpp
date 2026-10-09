// from server: 86% by colin
// roc 2007-08 005b4de0  unit: RBX::Geometry  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4de0
//
// 005b4de0  56                   push esi
// 005b4de1  8bf1                 mov esi, ecx
// 005b4de3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b4de7  3b7108               cmp esi, dword ptr [ecx + 8]
// 005b4dea  7505                 jne 0x5b4df1
// 005b4dec  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005b4def  eb03                 jmp 0x5b4df4
// 005b4df1  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005b4df4  85c0                 test eax, eax
// 005b4df6  751c                 jne 0x5b4e14
// 005b4df8  8b01                 mov eax, dword ptr [ecx]
// 005b4dfa  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b4dfd  ffd2                 call edx
// 005b4dff  85c0                 test eax, eax
// 005b4e01  750f                 jne 0x5b4e12
// 005b4e03  8b4608               mov eax, dword ptr [esi + 8]
// 005b4e06  50                   push eax
// 005b4e07  8bce                 mov ecx, esi
// 005b4e09  e842ffffff           call 0x5b4d50
// 005b4e0e  5e                   pop esi
// 005b4e0f  c20400               ret 4
// 005b4e12  33c0                 xor eax, eax
// 005b4e14  50                   push eax
// 005b4e15  8bce                 mov ecx, esi
// 005b4e17  e834ffffff           call 0x5b4d50
// 005b4e1c  5e                   pop esi
// 005b4e1d  c20400               ret 4

struct Geometry {
    char pad0[8];
    int field8;
    char padC[4];
    int field10;
    int field14;
    int m(int);
    int f(int);
};

int Geometry::f(int a)
{
    int v;
    if (this == *(Geometry**)(a + 8))
        v = *(int*)(a + 0x10);
    else
        v = *(int*)(a + 0x14);
    if (v == 0) {
        int (*fn)(void) = *(int (**)(void))a;
        fn = *(int (**)(void))((char*)fn + 0xc);
        if (fn() == 0) {
            m(field8);
            return 0;
        }
        v = 0;
    }
    m(v);
    return 0;
}
