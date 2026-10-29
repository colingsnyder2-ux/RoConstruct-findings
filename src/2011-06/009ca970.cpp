// roc 2011-06 009ca970  unit: RBX::XVGfxBinding::XV?$mf2::V?$bind_t::?$callable_slot  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009ca970
//
// 009ca970  83ec60               sub esp, 0x60
// 009ca973  53                   push ebx
// 009ca974  56                   push esi
// 009ca975  57                   push edi
// 009ca976  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 009ca97a  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 009ca97e  8d7704               lea esi, [edi + 4]
// 009ca981  7204                 jb 0x9ca987
// 009ca983  8b06                 mov eax, dword ptr [esi]
// 009ca985  eb02                 jmp 0x9ca989
// 009ca987  8bc6                 mov eax, esi
// 009ca989  8b1db808a400         mov ebx, dword ptr [0xa408b8]
// 009ca98f  8d4c240c             lea ecx, [esp + 0xc]
// 009ca993  51                   push ecx
// 009ca994  50                   push eax
// 009ca995  ffd3                 call ebx
// 009ca997  83c408               add esp, 8
// 009ca99a  85c0                 test eax, eax
// 009ca99c  7409                 je 0x9ca9a7
// 009ca99e  5f                   pop edi
// 009ca99f  5e                   pop esi
// 009ca9a0  32c0                 xor al, al
// 009ca9a2  5b                   pop ebx
// 009ca9a3  83c460               add esp, 0x60
// 009ca9a6  c3                   ret 
// 009ca9a7  8b442474             mov eax, dword ptr [esp + 0x74]
// 009ca9ab  83781810             cmp dword ptr [eax + 0x18], 0x10
// 009ca9af  7205                 jb 0x9ca9b6
// 009ca9b1  8b4004               mov eax, dword ptr [eax + 4]
// 009ca9b4  eb03                 jmp 0x9ca9b9
// 009ca9b6  83c004               add eax, 4
// 009ca9b9  8d54243c             lea edx, [esp + 0x3c]
// 009ca9bd  52                   push edx
// 009ca9be  50                   push eax
// 009ca9bf  ffd3                 call ebx
// 009ca9c1  8b442438             mov eax, dword ptr [esp + 0x38]
// 009ca9c5  83c408               add esp, 8
// 009ca9c8  3b442460             cmp eax, dword ptr [esp + 0x60]
// 009ca9cc  7c17                 jl 0x9ca9e5
// 009ca9ce  7f0a                 jg 0x9ca9da
// 009ca9d0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009ca9d4  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 009ca9d8  720b                 jb 0x9ca9e5
// 009ca9da  5f                   pop edi
// 009ca9db  b301                 mov bl, 1
// 009ca9dd  5e                   pop esi
// 009ca9de  8ac3                 mov al, bl
// 009ca9e0  5b                   pop ebx
// 009ca9e1  83c460               add esp, 0x60
// 009ca9e4  c3                   ret 
// 009ca9e5  32db                 xor bl, bl
// 009ca9e7  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 009ca9eb  7202                 jb 0x9ca9ef
// 009ca9ed  8b36                 mov esi, dword ptr [esi]
// 009ca9ef  56                   push esi
// 009ca9f0  ff152407a400         call dword ptr [0xa40724]
// 009ca9f6  83c404               add esp, 4
// 009ca9f9  5f                   pop edi
// 009ca9fa  5e                   pop esi
// 009ca9fb  8ac3                 mov al, bl
// 009ca9fd  5b                   pop ebx
// 009ca9fe  83c460               add esp, 0x60
// 009caa01  c3                   ret 
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