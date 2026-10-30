// roc 2009-12 00720050  unit: RBX::VInstance::?$NonFactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00720050
//
// 00720050  83ec60               sub esp, 0x60
// 00720053  53                   push ebx
// 00720054  56                   push esi
// 00720055  57                   push edi
// 00720056  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0072005a  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0072005e  8d7704               lea esi, [edi + 4]
// 00720061  7204                 jb 0x720067
// 00720063  8b06                 mov eax, dword ptr [esi]
// 00720065  eb02                 jmp 0x720069
// 00720067  8bc6                 mov eax, esi
// 00720069  8b1d48b89800         mov ebx, dword ptr [0x98b848]
// 0072006f  8d4c240c             lea ecx, [esp + 0xc]
// 00720073  51                   push ecx
// 00720074  50                   push eax
// 00720075  ffd3                 call ebx
// 00720077  83c408               add esp, 8
// 0072007a  85c0                 test eax, eax
// 0072007c  7409                 je 0x720087
// 0072007e  5f                   pop edi
// 0072007f  5e                   pop esi
// 00720080  32c0                 xor al, al
// 00720082  5b                   pop ebx
// 00720083  83c460               add esp, 0x60
// 00720086  c3                   ret 
// 00720087  8b442474             mov eax, dword ptr [esp + 0x74]
// 0072008b  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0072008f  7205                 jb 0x720096
// 00720091  8b4004               mov eax, dword ptr [eax + 4]
// 00720094  eb03                 jmp 0x720099
// 00720096  83c004               add eax, 4
// 00720099  8d54243c             lea edx, [esp + 0x3c]
// 0072009d  52                   push edx
// 0072009e  50                   push eax
// 0072009f  ffd3                 call ebx
// 007200a1  8b442438             mov eax, dword ptr [esp + 0x38]
// 007200a5  83c408               add esp, 8
// 007200a8  3b442460             cmp eax, dword ptr [esp + 0x60]
// 007200ac  7c17                 jl 0x7200c5
// 007200ae  7f0a                 jg 0x7200ba
// 007200b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007200b4  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 007200b8  720b                 jb 0x7200c5
// 007200ba  5f                   pop edi
// 007200bb  b301                 mov bl, 1
// 007200bd  5e                   pop esi
// 007200be  8ac3                 mov al, bl
// 007200c0  5b                   pop ebx
// 007200c1  83c460               add esp, 0x60
// 007200c4  c3                   ret 
// 007200c5  32db                 xor bl, bl
// 007200c7  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 007200cb  7202                 jb 0x7200cf
// 007200cd  8b36                 mov esi, dword ptr [esi]
// 007200cf  56                   push esi
// 007200d0  ff1530b79800         call dword ptr [0x98b730]
// 007200d6  83c404               add esp, 4
// 007200d9  5f                   pop edi
// 007200da  5e                   pop esi
// 007200db  8ac3                 mov al, bl
// 007200dd  5b                   pop ebx
// 007200de  83c460               add esp, 0x60
// 007200e1  c3                   ret 
// copied from an identical function in another client (function ?compareFiles@@YA_NABUString@@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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