// from server: 100% by king_originala
// roc 2008-06 004cca10  unit: RBX::VInstance::?$NonFactoryProduct  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cca10
//
// 004cca10  55                   push ebp
// 004cca11  8bec                 mov ebp, esp
// 004cca13  6aff                 push -1
// 004cca15  6820997c00           push 0x7c9920
// 004cca1a  64a100000000         mov eax, dword ptr fs:[0]
// 004cca20  50                   push eax
// 004cca21  64892500000000       mov dword ptr fs:[0], esp
// 004cca28  83ec08               sub esp, 8
// 004cca2b  53                   push ebx
// 004cca2c  56                   push esi
// 004cca2d  57                   push edi
// 004cca2e  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004cca31  8965f0               mov dword ptr [ebp - 0x10], esp
// 004cca34  8bf1                 mov esi, ecx
// 004cca36  57                   push edi
// 004cca37  8975ec               mov dword ptr [ebp - 0x14], esi
// 004cca3a  ff5508               call dword ptr [ebp + 8]
// 004cca3d  83c404               add esp, 4
// 004cca40  57                   push edi
// 004cca41  8d4e0c               lea ecx, [esi + 0xc]
// 004cca44  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004cca4b  e890fdffff           call 0x4cc7e0
// 004cca50  84c0                 test al, al
// 004cca52  7521                 jne 0x4cca75
// 004cca54  57                   push edi
// 004cca55  e8203c1d00           call 0x6a067a
// 004cca5a  ff4e30               dec dword ptr [esi + 0x30]
// 004cca5d  83c404               add esp, 4
// 004cca60  32c0                 xor al, al
// 004cca62  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cca65  64890d00000000       mov dword ptr fs:[0], ecx
// 004cca6c  5f                   pop edi
// 004cca6d  5e                   pop esi
// 004cca6e  5b                   pop ebx
// 004cca6f  8be5                 mov esp, ebp
// 004cca71  5d                   pop ebp
// 004cca72  c20c00               ret 0xc
// 004cca75  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cca78  5f                   pop edi
// 004cca79  5e                   pop esi
// 004cca7a  b001                 mov al, 1
// 004cca7c  64890d00000000       mov dword ptr fs:[0], ecx
// 004cca83  5b                   pop ebx
// 004cca84  8be5                 mov esp, ebp
// 004cca86  5d                   pop ebp
// 004cca87  c20c00               ret 0xc

void __cdecl operator delete(void *) throw();

struct Pool {
    char data[36];
    bool release(void *);
};

struct S {
    char data[12];
    Pool pool;
    int count;

    bool release(void (__cdecl *callback)(void *), unsigned int, void *);
};

bool S::release(void (__cdecl *callback)(void *), unsigned int, void *p)
{
    callback(p);
    try {
        if (!pool.release(p)) {
            operator delete(p);
            --count;
            return false;
        }
        return true;
    }
    catch (...) {
        operator delete(p);
        --count;
        throw;
    }
}
