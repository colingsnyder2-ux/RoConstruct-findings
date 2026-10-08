// from server: 55% by colin
// roc 2007-08 005b3060  unit: RBX::Assembly  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3060
//
// 005b3060  53                   push ebx
// 005b3061  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005b3065  56                   push esi
// 005b3066  57                   push edi
// 005b3067  8bf9                 mov edi, ecx
// 005b3069  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005b306c  e8bf170000           call 0x5b4830
// 005b3071  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005b3074  8bf0                 mov esi, eax
// 005b3076  e8b5170000           call 0x5b4830
// 005b307b  3bf7                 cmp esi, edi
// 005b307d  7402                 je 0x5b3081
// 005b307f  8bc6                 mov eax, esi
// 005b3081  5f                   pop edi
// 005b3082  5e                   pop esi
// 005b3083  5b                   pop ebx
// 005b3084  c20400               ret 4

struct Assembly {
    int getAssembly(int);
};

int Assembly::getAssembly(int a) {
    int* p = (int*)a;
    int r1 = ((Assembly*)p[2])->getAssembly(0);
    int r2 = ((Assembly*)p[3])->getAssembly(0);
    if (r1 == (int)this) return r2;
    return r1;
}
