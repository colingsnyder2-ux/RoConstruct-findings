// roc 2009-06 006835a0  unit: RBX::Sky  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006835a0
//
// 006835a0  83ec60               sub esp, 0x60
// 006835a3  53                   push ebx
// 006835a4  56                   push esi
// 006835a5  57                   push edi
// 006835a6  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 006835aa  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 006835ae  8d7704               lea esi, [edi + 4]
// 006835b1  7204                 jb 0x6835b7
// 006835b3  8b06                 mov eax, dword ptr [esi]
// 006835b5  eb02                 jmp 0x6835b9
// 006835b7  8bc6                 mov eax, esi
// 006835b9  8b1dd0e88900         mov ebx, dword ptr [0x89e8d0]
// 006835bf  8d4c240c             lea ecx, [esp + 0xc]
// 006835c3  51                   push ecx
// 006835c4  50                   push eax
// 006835c5  ffd3                 call ebx
// 006835c7  83c408               add esp, 8
// 006835ca  85c0                 test eax, eax
// 006835cc  7409                 je 0x6835d7
// 006835ce  5f                   pop edi
// 006835cf  5e                   pop esi
// 006835d0  32c0                 xor al, al
// 006835d2  5b                   pop ebx
// 006835d3  83c460               add esp, 0x60
// 006835d6  c3                   ret 
// 006835d7  8b442474             mov eax, dword ptr [esp + 0x74]
// 006835db  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006835df  7205                 jb 0x6835e6
// 006835e1  8b4004               mov eax, dword ptr [eax + 4]
// 006835e4  eb03                 jmp 0x6835e9
// 006835e6  83c004               add eax, 4
// 006835e9  8d54243c             lea edx, [esp + 0x3c]
// 006835ed  52                   push edx
// 006835ee  50                   push eax
// 006835ef  ffd3                 call ebx
// 006835f1  8b442438             mov eax, dword ptr [esp + 0x38]
// 006835f5  83c408               add esp, 8
// 006835f8  3b442460             cmp eax, dword ptr [esp + 0x60]
// 006835fc  7c17                 jl 0x683615
// 006835fe  7f0a                 jg 0x68360a
// 00683600  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00683604  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 00683608  720b                 jb 0x683615
// 0068360a  5f                   pop edi
// 0068360b  b301                 mov bl, 1
// 0068360d  5e                   pop esi
// 0068360e  8ac3                 mov al, bl
// 00683610  5b                   pop ebx
// 00683611  83c460               add esp, 0x60
// 00683614  c3                   ret 
// 00683615  32db                 xor bl, bl
// 00683617  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0068361b  7202                 jb 0x68361f
// 0068361d  8b36                 mov esi, dword ptr [esi]
// 0068361f  56                   push esi
// 00683620  ff1500e78900         call dword ptr [0x89e700]
// 00683626  83c404               add esp, 4
// 00683629  5f                   pop edi
// 0068362a  5e                   pop esi
// 0068362b  8ac3                 mov al, bl
// 0068362d  5b                   pop ebx
// 0068362e  83c460               add esp, 0x60
// 00683631  c3                   ret 
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