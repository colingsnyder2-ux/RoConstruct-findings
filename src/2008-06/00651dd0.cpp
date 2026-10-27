// from server: 100% by coldek
// roc 2008-06 00651dd0  unit: RBX::ScoreHud  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651dd0
//
// 00651dd0  55                   push ebp
// 00651dd1  8bec                 mov ebp, esp
// 00651dd3  6aff                 push -1
// 00651dd5  68f1b77d00           push 0x7db7f1
// 00651dda  64a100000000         mov eax, dword ptr fs:[0]
// 00651de0  50                   push eax
// 00651de1  64892500000000       mov dword ptr fs:[0], esp
// 00651de8  83ec0c               sub esp, 0xc
// 00651deb  53                   push ebx
// 00651dec  56                   push esi
// 00651ded  8b7508               mov esi, dword ptr [ebp + 8]
// 00651df0  57                   push edi
// 00651df1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00651df4  33db                 xor ebx, ebx
// 00651df6  8965f0               mov dword ptr [ebp - 0x10], esp
// 00651df9  8975ec               mov dword ptr [ebp - 0x14], esi
// 00651dfc  895dfc               mov dword ptr [ebp - 4], ebx
// 00651dff  90                   nop 
// 00651e00  3bfb                 cmp edi, ebx
// 00651e02  764a                 jbe 0x651e4e
// 00651e04  89750c               mov dword ptr [ebp + 0xc], esi
// 00651e07  8975e8               mov dword ptr [ebp - 0x18], esi
// 00651e0a  c645fc01             mov byte ptr [ebp - 4], 1
// 00651e0e  3bf3                 cmp esi, ebx
// 00651e10  740b                 je 0x651e1d
// 00651e12  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00651e15  50                   push eax
// 00651e16  8bce                 mov ecx, esi
// 00651e18  e8a37bddff           call 0x4299c0
// 00651e1d  4f                   dec edi
// 00651e1e  83c618               add esi, 0x18
// 00651e21  885dfc               mov byte ptr [ebp - 4], bl
// 00651e24  897508               mov dword ptr [ebp + 8], esi
// 00651e27  ebd7                 jmp 0x651e00
// 00651e29  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00651e2c  8b7d08               mov edi, dword ptr [ebp + 8]
// 00651e2f  3bf7                 cmp esi, edi
// 00651e31  7412                 je 0x651e45
// 00651e33  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00651e36  56                   push esi
// 00651e37  8bcb                 mov ecx, ebx
// 00651e39  e822faffff           call 0x651860
// 00651e3e  83c618               add esi, 0x18
// 00651e41  3bf7                 cmp esi, edi
// 00651e43  75f1                 jne 0x651e36
// 00651e45  33db                 xor ebx, ebx
// 00651e47  53                   push ebx
// 00651e48  53                   push ebx
// 00651e49  e83ef70400           call 0x6a158c
// 00651e4e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00651e51  5f                   pop edi
// 00651e52  5e                   pop esi
// 00651e53  64890d00000000       mov dword ptr fs:[0], ecx
// 00651e5a  5b                   pop ebx
// 00651e5b  8be5                 mov esp, ebp
// 00651e5d  5d                   pop ebp
// 00651e5e  c3                   ret 

// from server: 100% by colin
// roc 2008-06 00651dd0  unit: RBX::ScoreHud  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651dd0
//
// 00651dd0  55                   push ebp
// 00651dd1  8bec                 mov ebp, esp
// 00651dd3  6aff                 push -1
// 00651dd5  68f1b77d00           push 0x7db7f1
// 00651dda  64a100000000         mov eax, dword ptr fs:[0]
// 00651de0  50                   push eax
// 00651de1  64892500000000       mov dword ptr fs:[0], esp
// 00651de8  83ec0c               sub esp, 0xc
// 00651deb  53                   push ebx
// 00651dec  56                   push esi
// 00651ded  8b7508               mov esi, dword ptr [ebp + 8]
// 00651df0  57                   push edi
// 00651df1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00651df4  33db                 xor ebx, ebx
// 00651df6  8965f0               mov dword ptr [ebp - 0x10], esp
// 00651df9  8975ec               mov dword ptr [ebp - 0x14], esi
// 00651dfc  895dfc               mov dword ptr [ebp - 4], ebx
// 00651dff  90                   nop 
// 00651e00  3bfb                 cmp edi, ebx
// 00651e02  764a                 jbe 0x651e4e
// 00651e04  89750c               mov dword ptr [ebp + 0xc], esi
// 00651e07  8975e8               mov dword ptr [ebp - 0x18], esi
// 00651e0a  c645fc01             mov byte ptr [ebp - 4], 1
// 00651e0e  3bf3                 cmp esi, ebx
// 00651e10  740b                 je 0x651e1d
// 00651e12  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00651e15  50                   push eax
// 00651e16  8bce                 mov ecx, esi
// 00651e18  e8a37bddff           call 0x4299c0
// 00651e1d  4f                   dec edi
// 00651e1e  83c618               add esi, 0x18
// 00651e21  885dfc               mov byte ptr [ebp - 4], bl
// 00651e24  897508               mov dword ptr [ebp + 8], esi
// 00651e27  ebd7                 jmp 0x651e00





typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct S {
    unsigned char storage[24];
    S(const S&);
};

struct T {
    void destroy(S*);
};

void __cdecl fill_n(S* first, unsigned int count, const S& value, T* mgr)
{
    S* begin = first;
    try {
        for (; count > 0; --count, ++first) {
            S* cur = first;
            new (cur) S(value);
        }
    }
    catch (...) {
        for (; begin != first; ++begin)
            mgr->destroy(begin);
        throw;
    }

}
