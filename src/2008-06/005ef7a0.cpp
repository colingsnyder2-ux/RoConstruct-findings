// from server: 100% by king_originala
// roc 2008-06 005ef7a0  unit: RBX::FaceInstance  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef7a0
//
// 005ef7a0  83ec60               sub esp, 0x60
// 005ef7a3  53                   push ebx
// 005ef7a4  56                   push esi
// 005ef7a5  57                   push edi
// 005ef7a6  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 005ef7aa  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005ef7ae  8d7704               lea esi, [edi + 4]
// 005ef7b1  7204                 jb 0x5ef7b7
// 005ef7b3  8b06                 mov eax, dword ptr [esi]
// 005ef7b5  eb02                 jmp 0x5ef7b9
// 005ef7b7  8bc6                 mov eax, esi
// 005ef7b9  8b1d70278000         mov ebx, dword ptr [0x802770]
// 005ef7bf  8d4c240c             lea ecx, [esp + 0xc]
// 005ef7c3  51                   push ecx
// 005ef7c4  50                   push eax
// 005ef7c5  ffd3                 call ebx
// 005ef7c7  83c408               add esp, 8
// 005ef7ca  85c0                 test eax, eax
// 005ef7cc  7409                 je 0x5ef7d7
// 005ef7ce  5f                   pop edi
// 005ef7cf  5e                   pop esi
// 005ef7d0  32c0                 xor al, al
// 005ef7d2  5b                   pop ebx
// 005ef7d3  83c460               add esp, 0x60
// 005ef7d6  c3                   ret 
// 005ef7d7  8b442474             mov eax, dword ptr [esp + 0x74]
// 005ef7db  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ef7df  7205                 jb 0x5ef7e6
// 005ef7e1  8b4004               mov eax, dword ptr [eax + 4]
// 005ef7e4  eb03                 jmp 0x5ef7e9
// 005ef7e6  83c004               add eax, 4
// 005ef7e9  8d54243c             lea edx, [esp + 0x3c]
// 005ef7ed  52                   push edx
// 005ef7ee  50                   push eax
// 005ef7ef  ffd3                 call ebx
// 005ef7f1  8b442438             mov eax, dword ptr [esp + 0x38]
// 005ef7f5  83c408               add esp, 8
// 005ef7f8  3b442460             cmp eax, dword ptr [esp + 0x60]
// 005ef7fc  7c17                 jl 0x5ef815
// 005ef7fe  7f0a                 jg 0x5ef80a
// 005ef800  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ef804  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 005ef808  720b                 jb 0x5ef815
// 005ef80a  5f                   pop edi
// 005ef80b  b301                 mov bl, 1
// 005ef80d  5e                   pop esi
// 005ef80e  8ac3                 mov al, bl
// 005ef810  5b                   pop ebx
// 005ef811  83c460               add esp, 0x60
// 005ef814  c3                   ret 
// 005ef815  32db                 xor bl, bl
// 005ef817  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005ef81b  7202                 jb 0x5ef81f
// 005ef81d  8b36                 mov esi, dword ptr [esi]
// 005ef81f  56                   push esi
// 005ef820  ff1534268000         call dword ptr [0x802634]
// 005ef826  83c404               add esp, 4
// 005ef829  5f                   pop edi
// 005ef82a  5e                   pop esi
// 005ef82b  8ac3                 mov al, bl
// 005ef82d  5b                   pop ebx
// 005ef82e  83c460               add esp, 0x60
// 005ef831  c3                   ret 

struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct StatData {
    char prefix[32];
    __int64 modificationTime;
    char suffix[8];
};

extern "C" {
    extern int (__cdecl *_stat64i32)(const char*, StatData*);
    extern int (__cdecl *_unlink)(const char*);
}

bool __cdecl compareFiles(const String& first, const String& second)
{
    StatData a, b;

    const char* path = first.capacity >= 16
        ? first.storage.pointer : first.storage.buffer;

    int (__cdecl *statFile)(const char*, StatData*) = _stat64i32;
    if (statFile(path, &a) != 0)
        return false;

    path = second.capacity >= 16
        ? second.storage.pointer : second.storage.buffer;
    statFile(path, &b);

    bool result;
    if (a.modificationTime >= b.modificationTime) {
        result = true;
    } else {
        result = false;
        path = first.capacity >= 16
            ? first.storage.pointer : first.storage.buffer;
        _unlink(path);
    }
    return result;
}
