// from server: 81% by colin
// roc 2007-08 005bee70  unit: boost::detail::H::?$sp_counted_impl_p  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bee70
//
// 005bee70  56                   push esi
// 005bee71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bee75  833e00               cmp dword ptr [esi], 0
// 005bee78  7417                 je 0x5bee91
// 005bee7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bee7e  c70600000000         mov dword ptr [esi], 0
// 005bee84  c70001000000         mov dword ptr [eax], 1
// 005bee8a  b8588e7900           mov eax, 0x798e58
// 005bee8f  5e                   pop esi
// 005bee90  c3                   ret 
// 005bee91  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bee94  51                   push ecx
// 005bee95  ff1544e87700         call dword ptr [0x77e844]
// 005bee9b  83c404               add esp, 4
// 005bee9e  85c0                 test eax, eax
// 005beea0  7404                 je 0x5beea6
// 005beea2  33c0                 xor eax, eax
// 005beea4  5e                   pop esi
// 005beea5  c3                   ret 
// 005beea6  8b5604               mov edx, dword ptr [esi + 4]
// 005beea9  57                   push edi
// 005beeaa  52                   push edx
// 005beeab  6800020000           push 0x200
// 005beeb0  8d7e08               lea edi, [esi + 8]
// 005beeb3  6a01                 push 1
// 005beeb5  57                   push edi
// 005beeb6  ff1500e97700         call dword ptr [0x77e900]
// 005beebc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005beec0  83c410               add esp, 0x10
// 005beec3  33d2                 xor edx, edx
// 005beec5  3bd0                 cmp edx, eax
// 005beec7  8901                 mov dword ptr [ecx], eax
// 005beec9  1bc0                 sbb eax, eax
// 005beecb  23c7                 and eax, edi
// 005beecd  5f                   pop edi
// 005beece  5e                   pop esi
// 005beecf  c3                   ret 

extern "C" int __cdecl feof(void*);
extern "C" unsigned int __cdecl fread(void*, unsigned int, unsigned int, void*);

struct S {
    int __cdecl f(int* a, int* b);
};

int S::f(int* a, int* b)
{
    if (*a != 0) {
        *a = 0;
        *b = 1;
        return 0x798e58;
    }
    if (feof((void*)a[1]) != 0) {
        return 0;
    }
    unsigned int n = fread((void*)(a + 2), 1, 0x200, (void*)a[1]);
    *b = n;
    return (n == 0) ? 0 : (int)(a + 2);
}
