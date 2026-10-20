// from server: 94% by colin
// from server: 91% by king_originala
// roc 2008-06 00421f00  unit: CSettingsExplorer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421f00
//
// 00421f00  55                   push ebp
// 00421f01  8bec                 mov ebp, esp
// 00421f03  6aff                 push -1
// 00421f05  6800428d00           push 0x8d4200
// 00421f0a  6812156a00           push 0x6a1512
// 00421f0f  64a100000000         mov eax, dword ptr fs:[0]
// 00421f15  50                   push eax
// 00421f16  64892500000000       mov dword ptr fs:[0], esp
// 00421f1d  83ec18               sub esp, 0x18
// 00421f20  53                   push ebx
// 00421f21  56                   push esi
// 00421f22  57                   push edi
// 00421f23  8bf1                 mov esi, ecx
// 00421f25  33db                 xor ebx, ebx
// 00421f27  895de0               mov dword ptr [ebp - 0x20], ebx
// 00421f2a  8d45e0               lea eax, [ebp - 0x20]
// 00421f2d  50                   push eax
// 00421f2e  e8f3e92700           call 0x6a0926
// 00421f33  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 00421f39  51                   push ecx
// 00421f3a  e8f7ee2700           call 0x6a0e36
// 00421f3f  8bf8                 mov edi, eax
// 00421f41  897ddc               mov dword ptr [ebp - 0x24], edi
// 00421f44  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00421f47  3bfb                 cmp edi, ebx
// 00421f49  7515                 jne 0x421f60
// 00421f4b  33c0                 xor eax, eax
// 00421f4d  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00421f50  64890d00000000       mov dword ptr fs:[0], ecx
// 00421f57  5f                   pop edi
// 00421f58  5e                   pop esi
// 00421f59  5b                   pop ebx
// 00421f5a  8be5                 mov esp, ebp
// 00421f5c  5d                   pop ebp
// 00421f5d  c21000               ret 0x10
// 00421f60  895dfc               mov dword ptr [ebp - 4], ebx
// 00421f63  8d55d8               lea edx, [ebp - 0x28]
// 00421f66  52                   push edx
// 00421f67  8bce                 mov ecx, esi
// 00421f69  e862ffffff           call 0x421ed0
// 00421f6e  8b7664               mov esi, dword ptr [esi + 0x64]
// 00421f71  33c0                 xor eax, eax
// 00421f73  3bf3                 cmp esi, ebx
// 00421f75  0f95c0               setne al
// 00421f78  3bc3                 cmp eax, ebx
// 00421f7a  7505                 jne 0x421f81
// 00421f7c  e8c3e92700           call 0x6a0944
// 00421f81  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00421f84  50                   push eax
// 00421f85  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00421f88  51                   push ecx
// 00421f89  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00421f8c  52                   push edx
// 00421f8d  8b4508               mov eax, dword ptr [ebp + 8]
// 00421f90  50                   push eax
// 00421f91  ffd6                 call esi
// 00421f93  8bd8                 mov ebx, eax
// 00421f95  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00421f98  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00421f9f  e81b000000           call 0x421fbf
// 00421fa4  8bc3                 mov eax, ebx
// 00421fa6  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00421fa9  64890d00000000       mov dword ptr fs:[0], ecx
// 00421fb0  5f                   pop edi
// 00421fb1  5e                   pop esi
// 00421fb2  5b                   pop ebx
// 00421fb3  8be5                 mov esp, ebp
// 00421fb5  5d                   pop ebp
// 00421fb6  c21000               ret 0x10

struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall queryState(unsigned long*);
extern "C" unsigned long __stdcall activateContext(void*);
extern "C" void __stdcall reportFailure();
extern "C" void __stdcall releaseContext(unsigned long);

struct CSettingsExplorer {
    char padding[0x64];
    void* procedure;

    void** getProcedure(void** result);
    int beginDrag(void* imageList, int image, int x, int y);
};

int CSettingsExplorer::beginDrag(void* imageList, int image, int x, int y)
{
    unsigned long state = 0;
    unsigned long context = activateContext(queryState(&state)->context);
    int result = 0;

    if (!context)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);

        typedef int (__stdcall *Procedure)(void*, int, int, int);
        Procedure function = reinterpret_cast<Procedure>(procedure);

        int ok = (function != 0);
        if (ok == 0)
            reportFailure();

        result = function(imageList, image, x, y);
    }
    __finally {
        releaseContext(context);
    }

    return result;
}
