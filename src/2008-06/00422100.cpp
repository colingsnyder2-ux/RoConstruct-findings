// from server: 86% by colin
// roc 2008-06 00422100  unit: CSettingsExplorer  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422100
//
// 00422100  55                   push ebp
// 00422101  8bec                 mov ebp, esp
// 00422103  6aff                 push -1
// 00422105  6820428d00           push 0x8d4220
// 0042210a  6812156a00           push 0x6a1512
// 0042210f  64a100000000         mov eax, dword ptr fs:[0]
// 00422115  50                   push eax
// 00422116  64892500000000       mov dword ptr fs:[0], esp
// 0042211d  83ec18               sub esp, 0x18
// 00422120  53                   push ebx
// 00422121  56                   push esi
// 00422122  57                   push edi
// 00422123  8bf1                 mov esi, ecx
// 00422125  33db                 xor ebx, ebx
// 00422127  895de0               mov dword ptr [ebp - 0x20], ebx
// 0042212a  8d45e0               lea eax, [ebp - 0x20]
// 0042212d  50                   push eax
// 0042212e  e8f3e72700           call 0x6a0926
// 00422133  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 00422139  51                   push ecx
// 0042213a  e8f7ec2700           call 0x6a0e36
// 0042213f  8bf8                 mov edi, eax
// 00422141  897ddc               mov dword ptr [ebp - 0x24], edi
// 00422144  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00422147  3bfb                 cmp edi, ebx
// 00422149  7515                 jne 0x422160
// 0042214b  33c0                 xor eax, eax
// 0042214d  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00422150  64890d00000000       mov dword ptr fs:[0], ecx
// 00422157  5f                   pop edi
// 00422158  5e                   pop esi
// 00422159  5b                   pop ebx
// 0042215a  8be5                 mov esp, ebp
// 0042215c  5d                   pop ebp
// 0042215d  c20c00               ret 0xc
// 00422160  895dfc               mov dword ptr [ebp - 4], ebx
// 00422163  8d55d8               lea edx, [ebp - 0x28]
// 00422166  52                   push edx
// 00422167  8bce                 mov ecx, esi
// 00422169  e862ffffff           call 0x4220d0
// 0042216e  8b766c               mov esi, dword ptr [esi + 0x6c]
// 00422171  33c0                 xor eax, eax
// 00422173  3bf3                 cmp esi, ebx
// 00422175  0f95c0               setne al
// 00422178  3bc3                 cmp eax, ebx
// 0042217a  7505                 jne 0x422181
// 0042217c  e8c3e72700           call 0x6a0944
// 00422181  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00422184  50                   push eax
// 00422185  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00422188  51                   push ecx
// 00422189  8b5508               mov edx, dword ptr [ebp + 8]
// 0042218c  52                   push edx
// 0042218d  ffd6                 call esi
// 0042218f  8bd8                 mov ebx, eax
// 00422191  895de4               mov dword ptr [ebp - 0x1c], ebx
// 00422194  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0042219b  e81b000000           call 0x4221bb
// 004221a0  8bc3                 mov eax, ebx
// 004221a2  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004221a5  64890d00000000       mov dword ptr fs:[0], ecx
// 004221ac  5f                   pop edi
// 004221ad  5e                   pop esi
// 004221ae  5b                   pop ebx
// 004221af  8be5                 mov esp, ebp
// 004221b1  5d                   pop ebp
// 004221b2  c20c00               ret 0xc
// 004221b5  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 004221b8  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004221bb  83ff02               cmp edi, 2
// 004221be  742f                 je 0x4221ef
// 004221c0  33c0                 xor eax, eax
// 004221c2  85db                 test ebx, ebx
// 004221c4  0f94c0               sete al
// 004221c7  8bf0                 mov esi, eax
// 004221c9  85f6                 test esi, esi
// 004221cb  740a                 je 0x4221d7
// 004221cd  ff15d8228000         call dword ptr [0x8022d8]
// 004221d3  8bf8                 mov edi, eax
// 004221d5  eb02                 jmp 0x4221d9
// 004221d7  33ff                 xor edi, edi
// 004221d9  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004221dc  51                   push ecx
// 004221dd  6a00                 push 0
// 004221df  e878e72700           call 0x6a095c
// 004221e4  85f6                 test esi, esi
// 004221e6  7407                 je 0x4221ef
// 004221e8  57                   push edi
// 004221e9  ff15d0218000         call dword ptr [0x8021d0]
// 004221ef  c3                   ret 

// from server: 94% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall acquireState(unsigned long*);
extern "C" void* __stdcall acquireContext(void*);
extern "C" void __cdecl reportMissingProcedure();
extern "C" void __stdcall finishContext(void*);

struct CSettingsExplorer {
    char padding[0x6c];
    void* procedure;
    void** getProcedure(void** result);
    int dragEnter(void* window, int x, int y);
};

int CSettingsExplorer::dragEnter(void* window, int x, int y) {
    unsigned long cookie = 0;
    void* context = acquireContext(acquireState(&cookie)->context);
    int result = 0;
    if (!context)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);
        typedef int (__stdcall *Procedure)(void*, int, int);
        Procedure function = reinterpret_cast<Procedure>(procedure);
        int available = function != 0;
        if (available == 0)
            reportMissingProcedure();
        result = function(window, x, y);
    }
    __finally {
        finishContext(context);
    }
    return result;
}
