// from server: 83% by colin
// roc 2008-06 00422220  unit: CSettingsExplorer  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422220
//
// 00422220  55                   push ebp
// 00422221  8bec                 mov ebp, esp
// 00422223  6aff                 push -1
// 00422225  6830428d00           push 0x8d4230
// 0042222a  6812156a00           push 0x6a1512
// 0042222f  64a100000000         mov eax, dword ptr fs:[0]
// 00422235  50                   push eax
// 00422236  64892500000000       mov dword ptr fs:[0], esp
// 0042223d  83ec18               sub esp, 0x18
// 00422240  53                   push ebx
// 00422241  56                   push esi
// 00422242  57                   push edi
// 00422243  8bf1                 mov esi, ecx
// 00422245  33db                 xor ebx, ebx
// 00422247  895de0               mov dword ptr [ebp - 0x20], ebx
// 0042224a  8d45e0               lea eax, [ebp - 0x20]
// 0042224d  50                   push eax
// 0042224e  e8d3e62700           call 0x6a0926
// 00422253  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 00422259  51                   push ecx
// 0042225a  e8d7eb2700           call 0x6a0e36
// 0042225f  8bf8                 mov edi, eax
// 00422261  897ddc               mov dword ptr [ebp - 0x24], edi
// 00422264  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00422267  3bfb                 cmp edi, ebx
// 00422269  7515                 jne 0x422280
// 0042226b  33c0                 xor eax, eax
// 0042226d  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00422270  64890d00000000       mov dword ptr fs:[0], ecx
// 00422277  5f                   pop edi
// 00422278  5e                   pop esi
// 00422279  5b                   pop ebx
// 0042227a  8be5                 mov esp, ebp
// 0042227c  5d                   pop ebp
// 0042227d  c20400               ret 4
// 00422280  895dfc               mov dword ptr [ebp - 4], ebx
// 00422283  8d55d8               lea edx, [ebp - 0x28]
// 00422286  52                   push edx
// 00422287  8bce                 mov ecx, esi
// 00422289  e862ffffff           call 0x4221f0
// 0042228e  8b7670               mov esi, dword ptr [esi + 0x70]
// 00422291  33c0                 xor eax, eax
// 00422293  3bf3                 cmp esi, ebx
// 00422295  0f95c0               setne al
// 00422298  3bc3                 cmp eax, ebx
// 0042229a  7505                 jne 0x4222a1
// 0042229c  e8a3e62700           call 0x6a0944
// 004222a1  8b4508               mov eax, dword ptr [ebp + 8]
// 004222a4  50                   push eax
// 004222a5  ffd6                 call esi
// 004222a7  8bd8                 mov ebx, eax
// 004222a9  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004222ac  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004222b3  e81b000000           call 0x4222d3
// 004222b8  8bc3                 mov eax, ebx
// 004222ba  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004222bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004222c4  5f                   pop edi
// 004222c5  5e                   pop esi
// 004222c6  5b                   pop ebx
// 004222c7  8be5                 mov esp, ebp
// 004222c9  5d                   pop ebp
// 004222ca  c20400               ret 4
// 004222cd  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 004222d0  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004222d3  83ff02               cmp edi, 2
// 004222d6  742f                 je 0x422307
// 004222d8  33c9                 xor ecx, ecx
// 004222da  85db                 test ebx, ebx
// 004222dc  0f94c1               sete cl
// 004222df  8bf1                 mov esi, ecx
// 004222e1  85f6                 test esi, esi
// 004222e3  740a                 je 0x4222ef
// 004222e5  ff15d8228000         call dword ptr [0x8022d8]
// 004222eb  8bf8                 mov edi, eax
// 004222ed  eb02                 jmp 0x4222f1
// 004222ef  33ff                 xor edi, edi
// 004222f1  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004222f4  52                   push edx
// 004222f5  6a00                 push 0
// 004222f7  e860e62700           call 0x6a095c
// 004222fc  85f6                 test esi, esi
// 004222fe  7407                 je 0x422307
// 00422300  57                   push edi
// 00422301  ff15d0218000         call dword ptr [0x8021d0]
// 00422307  c3                   ret 

// from server: 90% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* activationContext;
};

extern "C" ModuleState* __stdcall getModuleState();
extern "C" int __stdcall activateContext(void*, unsigned long*);
extern "C" void __stdcall deactivateContext(unsigned long);
extern "C" void __stdcall reportMissingProcedure();

struct CSettingsExplorer {
    char padding[0x70];
    void* procedure;

    void** getProcedure(void** result);
    int dragLeave(void* window);
};

int CSettingsExplorer::dragLeave(void* window)
{
    unsigned long cookie = 0;
    int activated = activateContext(getModuleState()->activationContext, &cookie);
    int result = 0;

    if (!activated)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);

        typedef int (__stdcall *Procedure)(void*);
        Procedure function = reinterpret_cast<Procedure>(procedure);
        int available = function != 0;
        if (!available)
            reportMissingProcedure();

        result = function(window);
    }
    __finally {
        if (activated)
            deactivateContext(cookie);
    }

    return result;
}
