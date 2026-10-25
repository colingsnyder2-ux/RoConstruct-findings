// from server: 83% by colin
// roc 2008-06 00422340  unit: CSettingsExplorer  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422340
//
// 00422340  55                   push ebp
// 00422341  8bec                 mov ebp, esp
// 00422343  6aff                 push -1
// 00422345  6840428d00           push 0x8d4240
// 0042234a  6812156a00           push 0x6a1512
// 0042234f  64a100000000         mov eax, dword ptr fs:[0]
// 00422355  50                   push eax
// 00422356  64892500000000       mov dword ptr fs:[0], esp
// 0042235d  83ec18               sub esp, 0x18
// 00422360  53                   push ebx
// 00422361  56                   push esi
// 00422362  57                   push edi
// 00422363  8bf1                 mov esi, ecx
// 00422365  33db                 xor ebx, ebx
// 00422367  895de0               mov dword ptr [ebp - 0x20], ebx
// 0042236a  8d45e0               lea eax, [ebp - 0x20]
// 0042236d  50                   push eax
// 0042236e  e8b3e52700           call 0x6a0926
// 00422373  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 00422379  51                   push ecx
// 0042237a  e8b7ea2700           call 0x6a0e36
// 0042237f  8bf8                 mov edi, eax
// 00422381  897ddc               mov dword ptr [ebp - 0x24], edi
// 00422384  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00422387  3bfb                 cmp edi, ebx
// 00422389  7515                 jne 0x4223a0
// 0042238b  33c0                 xor eax, eax
// 0042238d  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00422390  64890d00000000       mov dword ptr fs:[0], ecx
// 00422397  5f                   pop edi
// 00422398  5e                   pop esi
// 00422399  5b                   pop ebx
// 0042239a  8be5                 mov esp, ebp
// 0042239c  5d                   pop ebp
// 0042239d  c20800               ret 8
// 004223a0  895dfc               mov dword ptr [ebp - 4], ebx
// 004223a3  8d55d8               lea edx, [ebp - 0x28]
// 004223a6  52                   push edx
// 004223a7  8bce                 mov ecx, esi
// 004223a9  e862ffffff           call 0x422310
// 004223ae  8b7674               mov esi, dword ptr [esi + 0x74]
// 004223b1  33c0                 xor eax, eax
// 004223b3  3bf3                 cmp esi, ebx
// 004223b5  0f95c0               setne al
// 004223b8  3bc3                 cmp eax, ebx
// 004223ba  7505                 jne 0x4223c1
// 004223bc  e883e52700           call 0x6a0944
// 004223c1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004223c4  50                   push eax
// 004223c5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004223c8  51                   push ecx
// 004223c9  ffd6                 call esi
// 004223cb  8bd8                 mov ebx, eax
// 004223cd  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004223d0  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004223d7  e81b000000           call 0x4223f7
// 004223dc  8bc3                 mov eax, ebx
// 004223de  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004223e1  64890d00000000       mov dword ptr fs:[0], ecx
// 004223e8  5f                   pop edi
// 004223e9  5e                   pop esi
// 004223ea  5b                   pop ebx
// 004223eb  8be5                 mov esp, ebp
// 004223ed  5d                   pop ebp
// 004223ee  c20800               ret 8
// 004223f1  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 004223f4  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004223f7  83ff02               cmp edi, 2
// 004223fa  742f                 je 0x42242b
// 004223fc  33d2                 xor edx, edx
// 004223fe  85db                 test ebx, ebx
// 00422400  0f94c2               sete dl
// 00422403  8bf2                 mov esi, edx
// 00422405  85f6                 test esi, esi
// 00422407  740a                 je 0x422413
// 00422409  ff15d8228000         call dword ptr [0x8022d8]
// 0042240f  8bf8                 mov edi, eax
// 00422411  eb02                 jmp 0x422415
// 00422413  33ff                 xor edi, edi
// 00422415  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00422418  50                   push eax
// 00422419  6a00                 push 0
// 0042241b  e83ce52700           call 0x6a095c
// 00422420  85f6                 test esi, esi
// 00422422  7407                 je 0x42242b
// 00422424  57                   push edi
// 00422425  ff15d0218000         call dword ptr [0x8021d0]
// 0042242b  c3                   ret 

// from server: 90% by king_originala
struct ModuleState
{
    char padding[0x9c];
    void* activationContext;
};

extern ModuleState* __cdecl getModuleState();
extern "C" int __stdcall activateContext(void*, unsigned long*);
extern "C" int __stdcall deactivateContext(unsigned long, unsigned long);
extern void __cdecl invalidCallback();

struct CSettingsExplorer
{
    char padding[0x74];
    int (__stdcall *callback)(unsigned long, unsigned long);

    void prepare(unsigned long*);
    int invoke(unsigned long, unsigned long);
};

int CSettingsExplorer::invoke(unsigned long a, unsigned long b)
{
    unsigned long cookie = 0;
    int active = activateContext(getModuleState()->activationContext, &cookie);
    int result = 0;

    if (!active)
        return 0;

    __try
    {
        unsigned long state;
        prepare(&state);

        int (__stdcall *fn)(unsigned long, unsigned long) = callback;
        int valid = fn != 0;
        if (!valid)
            invalidCallback();

        result = fn(a, b);
    }
    __finally
    {
        if (active)
            deactivateContext(0, cookie);
    }

    return result;
}
