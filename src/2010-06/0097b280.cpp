// roc 2010-06 0097b280  unit: seg_00970000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0097b280
//
// 0097b280  83ec60               sub esp, 0x60
// 0097b283  53                   push ebx
// 0097b284  56                   push esi
// 0097b285  57                   push edi
// 0097b286  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0097b28a  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0097b28e  8d7704               lea esi, [edi + 4]
// 0097b291  7204                 jb 0x97b297
// 0097b293  8b06                 mov eax, dword ptr [esi]
// 0097b295  eb02                 jmp 0x97b299
// 0097b297  8bc6                 mov eax, esi
// 0097b299  8b1db8a79e00         mov ebx, dword ptr [0x9ea7b8]
// 0097b29f  8d4c240c             lea ecx, [esp + 0xc]
// 0097b2a3  51                   push ecx
// 0097b2a4  50                   push eax
// 0097b2a5  ffd3                 call ebx
// 0097b2a7  83c408               add esp, 8
// 0097b2aa  85c0                 test eax, eax
// 0097b2ac  7409                 je 0x97b2b7
// 0097b2ae  5f                   pop edi
// 0097b2af  5e                   pop esi
// 0097b2b0  32c0                 xor al, al
// 0097b2b2  5b                   pop ebx
// 0097b2b3  83c460               add esp, 0x60
// 0097b2b6  c3                   ret 
// 0097b2b7  8b442474             mov eax, dword ptr [esp + 0x74]
// 0097b2bb  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0097b2bf  7205                 jb 0x97b2c6
// 0097b2c1  8b4004               mov eax, dword ptr [eax + 4]
// 0097b2c4  eb03                 jmp 0x97b2c9
// 0097b2c6  83c004               add eax, 4
// 0097b2c9  8d54243c             lea edx, [esp + 0x3c]
// 0097b2cd  52                   push edx
// 0097b2ce  50                   push eax
// 0097b2cf  ffd3                 call ebx
// 0097b2d1  8b442438             mov eax, dword ptr [esp + 0x38]
// 0097b2d5  83c408               add esp, 8
// 0097b2d8  3b442460             cmp eax, dword ptr [esp + 0x60]
// 0097b2dc  7c17                 jl 0x97b2f5
// 0097b2de  7f0a                 jg 0x97b2ea
// 0097b2e0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0097b2e4  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 0097b2e8  720b                 jb 0x97b2f5
// 0097b2ea  5f                   pop edi
// 0097b2eb  b301                 mov bl, 1
// 0097b2ed  5e                   pop esi
// 0097b2ee  8ac3                 mov al, bl
// 0097b2f0  5b                   pop ebx
// 0097b2f1  83c460               add esp, 0x60
// 0097b2f4  c3                   ret 
// 0097b2f5  32db                 xor bl, bl
// 0097b2f7  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0097b2fb  7202                 jb 0x97b2ff
// 0097b2fd  8b36                 mov esi, dword ptr [esi]
// 0097b2ff  56                   push esi
// 0097b300  ff1538a99e00         call dword ptr [0x9ea938]
// 0097b306  83c404               add esp, 4
// 0097b309  5f                   pop edi
// 0097b30a  5e                   pop esi
// 0097b30b  8ac3                 mov al, bl
// 0097b30d  5b                   pop ebx
// 0097b30e  83c460               add esp, 0x60
// 0097b311  c3                   ret 
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