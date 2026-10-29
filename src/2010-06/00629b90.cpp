// roc 2010-06 00629b90  unit: RBX::VTexture::?$FactoryProduct  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00629b90
//
// 00629b90  56                   push esi
// 00629b91  8b742408             mov esi, dword ptr [esp + 8]
// 00629b95  57                   push edi
// 00629b96  8b3d58a49e00         mov edi, dword ptr [0x9ea458]
// 00629b9c  68c408a200           push 0xa208c4
// 00629ba1  56                   push esi
// 00629ba2  ffd7                 call edi
// 00629ba4  83c408               add esp, 8
// 00629ba7  84c0                 test al, al
// 00629ba9  755a                 jne 0x629c05
// 00629bab  68c491a100           push 0xa191c4
// 00629bb0  56                   push esi
// 00629bb1  ffd7                 call edi
// 00629bb3  83c408               add esp, 8
// 00629bb6  84c0                 test al, al
// 00629bb8  754b                 jne 0x629c05
// 00629bba  687855a300           push 0xa35578
// 00629bbf  56                   push esi
// 00629bc0  ffd7                 call edi
// 00629bc2  83c408               add esp, 8
// 00629bc5  84c0                 test al, al
// 00629bc7  753c                 jne 0x629c05
// 00629bc9  68a432a100           push 0xa132a4
// 00629bce  56                   push esi
// 00629bcf  ffd7                 call edi
// 00629bd1  83c408               add esp, 8
// 00629bd4  84c0                 test al, al
// 00629bd6  7521                 jne 0x629bf9
// 00629bd8  687055a300           push 0xa35570
// 00629bdd  56                   push esi
// 00629bde  ffd7                 call edi
// 00629be0  83c408               add esp, 8
// 00629be3  84c0                 test al, al
// 00629be5  7512                 jne 0x629bf9
// 00629be7  686855a300           push 0xa35568
// 00629bec  56                   push esi
// 00629bed  ffd7                 call edi
// 00629bef  83c408               add esp, 8
// 00629bf2  84c0                 test al, al
// 00629bf4  7503                 jne 0x629bf9
// 00629bf6  5f                   pop edi
// 00629bf7  5e                   pop esi
// 00629bf8  c3                   ret 
// 00629bf9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00629bfd  5f                   pop edi
// 00629bfe  c60000               mov byte ptr [eax], 0
// 00629c01  b001                 mov al, 1
// 00629c03  5e                   pop esi
// 00629c04  c3                   ret 
// 00629c05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00629c09  5f                   pop edi
// 00629c0a  c60101               mov byte ptr [ecx], 1
// 00629c0d  b001                 mov al, 1
// 00629c0f  5e                   pop esi
// 00629c10  c3                   ret 
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