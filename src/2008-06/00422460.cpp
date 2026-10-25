// from server: 83% by colin
// roc 2008-06 00422460  unit: CSettingsExplorer  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422460
//
// 00422460  55                   push ebp
// 00422461  8bec                 mov ebp, esp
// 00422463  6aff                 push -1
// 00422465  6850428d00           push 0x8d4250
// 0042246a  6812156a00           push 0x6a1512
// 0042246f  64a100000000         mov eax, dword ptr fs:[0]
// 00422475  50                   push eax
// 00422476  64892500000000       mov dword ptr fs:[0], esp
// 0042247d  83ec18               sub esp, 0x18
// 00422480  53                   push ebx
// 00422481  56                   push esi
// 00422482  57                   push edi
// 00422483  8bf1                 mov esi, ecx
// 00422485  33db                 xor ebx, ebx
// 00422487  895de0               mov dword ptr [ebp - 0x20], ebx
// 0042248a  8d45e0               lea eax, [ebp - 0x20]
// 0042248d  50                   push eax
// 0042248e  e893e42700           call 0x6a0926
// 00422493  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 00422499  51                   push ecx
// 0042249a  e897e92700           call 0x6a0e36
// 0042249f  8bf8                 mov edi, eax
// 004224a1  897ddc               mov dword ptr [ebp - 0x24], edi
// 004224a4  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004224a7  3bfb                 cmp edi, ebx
// 004224a9  7515                 jne 0x4224c0
// 004224ab  33c0                 xor eax, eax
// 004224ad  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004224b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004224b7  5f                   pop edi
// 004224b8  5e                   pop esi
// 004224b9  5b                   pop ebx
// 004224ba  8be5                 mov esp, ebp
// 004224bc  5d                   pop ebp
// 004224bd  c20400               ret 4
// 004224c0  895dfc               mov dword ptr [ebp - 4], ebx
// 004224c3  8d55d8               lea edx, [ebp - 0x28]
// 004224c6  52                   push edx
// 004224c7  8bce                 mov ecx, esi
// 004224c9  e862ffffff           call 0x422430
// 004224ce  8b767c               mov esi, dword ptr [esi + 0x7c]
// 004224d1  33c0                 xor eax, eax
// 004224d3  3bf3                 cmp esi, ebx
// 004224d5  0f95c0               setne al
// 004224d8  3bc3                 cmp eax, ebx
// 004224da  7505                 jne 0x4224e1
// 004224dc  e863e42700           call 0x6a0944
// 004224e1  8b4508               mov eax, dword ptr [ebp + 8]
// 004224e4  50                   push eax
// 004224e5  ffd6                 call esi
// 004224e7  8bd8                 mov ebx, eax
// 004224e9  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004224ec  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004224f3  e81b000000           call 0x422513
// 004224f8  8bc3                 mov eax, ebx
// 004224fa  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004224fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00422504  5f                   pop edi
// 00422505  5e                   pop esi
// 00422506  5b                   pop ebx
// 00422507  8be5                 mov esp, ebp
// 00422509  5d                   pop ebp
// 0042250a  c20400               ret 4
// 0042250d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00422510  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 00422513  83ff02               cmp edi, 2
// 00422516  742f                 je 0x422547
// 00422518  33c9                 xor ecx, ecx
// 0042251a  85db                 test ebx, ebx
// 0042251c  0f94c1               sete cl
// 0042251f  8bf1                 mov esi, ecx
// 00422521  85f6                 test esi, esi
// 00422523  740a                 je 0x42252f
// 00422525  ff15d8228000         call dword ptr [0x8022d8]
// 0042252b  8bf8                 mov edi, eax
// 0042252d  eb02                 jmp 0x422531
// 0042252f  33ff                 xor edi, edi
// 00422531  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00422534  52                   push edx
// 00422535  6a00                 push 0
// 00422537  e820e42700           call 0x6a095c
// 0042253c  85f6                 test esi, esi
// 0042253e  7407                 je 0x422547
// 00422540  57                   push edi
// 00422541  ff15d0218000         call dword ptr [0x8021d0]
// 00422547  c3                   ret 

// from server: 90% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall getState(unsigned long* cookie);
extern "C" int __stdcall activateContext(void* context);
extern "C" void __cdecl missingProcedure();
extern "C" void __stdcall cleanupContext(unsigned long cookie);

struct CSettingsExplorer {
    char padding[0x7c];
    void* procedure;

    void** getProcedure(void** result);
    int dragShowNolock(int show);
};

int CSettingsExplorer::dragShowNolock(int show)
{
    unsigned long cookie = 0;
    int active = activateContext(getState(&cookie)->context);
    int result = 0;

    if (!active)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);

        int (__stdcall *callback)(int) =
            reinterpret_cast<int (__stdcall *)(int)>(procedure);

        int present = callback != 0;
        if (!present)
            missingProcedure();

        result = callback(show);
    }
    __finally {
        if (active)
            cleanupContext(cookie);
    }

    return result;
}
