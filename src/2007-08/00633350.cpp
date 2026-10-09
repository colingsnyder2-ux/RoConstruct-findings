// from server: 93% by colin
// roc 2007-08 00633350  unit: CXTPCommandBars  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00633350
//
// 00633350  53                   push ebx
// 00633351  57                   push edi
// 00633352  8bd9                 mov ebx, ecx
// 00633354  33ff                 xor edi, edi
// 00633356  39bb84000000         cmp dword ptr [ebx + 0x84], edi
// 0063335c  7e3e                 jle 0x63339c
// 0063335e  56                   push esi
// 0063335f  90                   nop 
// 00633360  57                   push edi
// 00633361  8bcb                 mov ecx, ebx
// 00633363  e8a8f5ffff           call 0x632910
// 00633368  8bf0                 mov esi, eax
// 0063336a  8b06                 mov eax, dword ptr [esi]
// 0063336c  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00633372  8bce                 mov ecx, esi
// 00633374  ffd2                 call edx
// 00633376  85c0                 test eax, eax
// 00633378  7416                 je 0x633390
// 0063337a  837e2000             cmp dword ptr [esi + 0x20], 0
// 0063337e  7410                 je 0x633390
// 00633380  8b06                 mov eax, dword ptr [esi]
// 00633382  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00633388  6a01                 push 1
// 0063338a  6a00                 push 0
// 0063338c  8bce                 mov ecx, esi
// 0063338e  ffd2                 call edx
// 00633390  83c701               add edi, 1
// 00633393  3bbb84000000         cmp edi, dword ptr [ebx + 0x84]
// 00633399  7cc5                 jl 0x633360
// 0063339b  5e                   pop esi
// 0063339c  5f                   pop edi
// 0063339d  5b                   pop ebx
// 0063339e  c3                   ret 

struct CXTPCommandBars {
    char pad[0x84];
    int field_0x84;
    void* GetAt(int index);
    void Process();
};

void CXTPCommandBars::Process() {
    int i = 0;
    if (field_0x84 > 0) {
        do {
            void* item = GetAt(i);
            int (__thiscall *fn1)(void*) = *(int (__thiscall **)(void*))((*(int*)item) + 0x160);
            if (fn1(item) != 0) {
                if (*(int*)((char*)item + 0x20) != 0) {
                    void (__thiscall *fn2)(void*, int, int) = *(void (__thiscall **)(void*, int, int))((*(int*)item) + 0x19c);
                    fn2(item, 0, 1);
                }
            }
            i++;
        } while (i < field_0x84);
    }
}
