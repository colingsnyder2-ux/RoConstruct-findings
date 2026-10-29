// roc 2009-12 006bbec0  unit: RBX::Decal  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bbec0
//
// 006bbec0  56                   push esi
// 006bbec1  8b742408             mov esi, dword ptr [esp + 8]
// 006bbec5  57                   push edi
// 006bbec6  8b3dacb69800         mov edi, dword ptr [0x98b6ac]
// 006bbecc  6804299c00           push 0x9c2904
// 006bbed1  56                   push esi
// 006bbed2  ffd7                 call edi
// 006bbed4  83c408               add esp, 8
// 006bbed7  84c0                 test al, al
// 006bbed9  755a                 jne 0x6bbf35
// 006bbedb  68b8b39b00           push 0x9bb3b8
// 006bbee0  56                   push esi
// 006bbee1  ffd7                 call edi
// 006bbee3  83c408               add esp, 8
// 006bbee6  84c0                 test al, al
// 006bbee8  754b                 jne 0x6bbf35
// 006bbeea  68086a9d00           push 0x9d6a08
// 006bbeef  56                   push esi
// 006bbef0  ffd7                 call edi
// 006bbef2  83c408               add esp, 8
// 006bbef5  84c0                 test al, al
// 006bbef7  753c                 jne 0x6bbf35
// 006bbef9  68f4559b00           push 0x9b55f4
// 006bbefe  56                   push esi
// 006bbeff  ffd7                 call edi
// 006bbf01  83c408               add esp, 8
// 006bbf04  84c0                 test al, al
// 006bbf06  7521                 jne 0x6bbf29
// 006bbf08  68006a9d00           push 0x9d6a00
// 006bbf0d  56                   push esi
// 006bbf0e  ffd7                 call edi
// 006bbf10  83c408               add esp, 8
// 006bbf13  84c0                 test al, al
// 006bbf15  7512                 jne 0x6bbf29
// 006bbf17  68f8699d00           push 0x9d69f8
// 006bbf1c  56                   push esi
// 006bbf1d  ffd7                 call edi
// 006bbf1f  83c408               add esp, 8
// 006bbf22  84c0                 test al, al
// 006bbf24  7503                 jne 0x6bbf29
// 006bbf26  5f                   pop edi
// 006bbf27  5e                   pop esi
// 006bbf28  c3                   ret 
// 006bbf29  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bbf2d  5f                   pop edi
// 006bbf2e  c60000               mov byte ptr [eax], 0
// 006bbf31  b001                 mov al, 1
// 006bbf33  5e                   pop esi
// 006bbf34  c3                   ret 
// 006bbf35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006bbf39  5f                   pop edi
// 006bbf3a  c60101               mov byte ptr [ecx], 1
// 006bbf3d  b001                 mov al, 1
// 006bbf3f  5e                   pop esi
// 006bbf40  c3                   ret 
// copied from an identical function in another client (function ?ParseBool@@YA_NPBDPA_N@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" __declspec(dllimport) bool __cdecl std_string_eq_cstr(const void* str, const char* cstr);

bool ParseBool(const char* value, bool* out);

bool ParseBool(const char* value, bool* out)
{
    bool (__cdecl *eq)(const void*, const char*) = std_string_eq_cstr;

    if (eq(value, "true") || eq(value, "True") || eq(value, "TRUE"))
    {
        *out = true;
        return true;
    }
    if (eq(value, "false") || eq(value, "False") || eq(value, "FALSE"))
    {
        *out = false;
        return true;
    }
    return false;
}