// from server: 100% by colin
// roc 2007-08 005594f0  unit: RBX::DataModel  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005594f0
//
// 005594f0  56                   push esi
// 005594f1  57                   push edi
// 005594f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005594f6  8b07                 mov eax, dword ptr [edi]
// 005594f8  8bf1                 mov esi, ecx
// 005594fa  8906                 mov dword ptr [esi], eax
// 005594fc  33c0                 xor eax, eax
// 005594fe  894604               mov dword ptr [esi + 4], eax
// 00559501  894608               mov dword ptr [esi + 8], eax
// 00559504  89460c               mov dword ptr [esi + 0xc], eax
// 00559507  394704               cmp dword ptr [edi + 4], eax
// 0055950a  741c                 je 0x559528
// 0055950c  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0055950f  894e0c               mov dword ptr [esi + 0xc], ecx
// 00559512  8b5704               mov edx, dword ptr [edi + 4]
// 00559515  895604               mov dword ptr [esi + 4], edx
// 00559518  8b4f04               mov ecx, dword ptr [edi + 4]
// 0055951b  50                   push eax
// 0055951c  8b4708               mov eax, dword ptr [edi + 8]
// 0055951f  50                   push eax
// 00559520  ffd1                 call ecx
// 00559522  83c408               add esp, 8
// 00559525  894608               mov dword ptr [esi + 8], eax
// 00559528  8b5710               mov edx, dword ptr [edi + 0x10]
// 0055952b  895610               mov dword ptr [esi + 0x10], edx
// 0055952e  8a4714               mov al, byte ptr [edi + 0x14]
// 00559531  884614               mov byte ptr [esi + 0x14], al
// 00559534  5f                   pop edi
// 00559535  8bc6                 mov eax, esi
// 00559537  5e                   pop esi
// 00559538  c20400               ret 4

struct S_func_005594f0 {
    int m0;
    int m4;
    int m8;
    int mC;
    int m10;
    char m14;
    S_func_005594f0* f(S_func_005594f0* a1);
};

S_func_005594f0* S_func_005594f0::f(S_func_005594f0* a1)
{
    m0 = a1->m0;
    m4 = 0;
    m8 = 0;
    mC = 0;
    if (a1->m4 != 0) {
        mC = a1->mC;
        m4 = a1->m4;
        m8 = ((int (__cdecl *)(int, int))a1->m4)(a1->m8, 0);
    }
    m10 = a1->m10;
    m14 = a1->m14;
    return this;
}
