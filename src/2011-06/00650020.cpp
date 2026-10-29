// roc 2011-06 00650020  unit: RBX::DropperTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00650020
//
// 00650020  56                   push esi
// 00650021  8b742408             mov esi, dword ptr [esp + 8]
// 00650025  57                   push edi
// 00650026  8b3d3404a400         mov edi, dword ptr [0xa40434]
// 0065002c  6878f2a600           push 0xa6f278
// 00650031  56                   push esi
// 00650032  ffd7                 call edi
// 00650034  83c408               add esp, 8
// 00650037  84c0                 test al, al
// 00650039  755a                 jne 0x650095
// 0065003b  68c48ba700           push 0xa78bc4
// 00650040  56                   push esi
// 00650041  ffd7                 call edi
// 00650043  83c408               add esp, 8
// 00650046  84c0                 test al, al
// 00650048  754b                 jne 0x650095
// 0065004a  68f0a1a900           push 0xa9a1f0
// 0065004f  56                   push esi
// 00650050  ffd7                 call edi
// 00650052  83c408               add esp, 8
// 00650055  84c0                 test al, al
// 00650057  753c                 jne 0x650095
// 00650059  685cf9a700           push 0xa7f95c
// 0065005e  56                   push esi
// 0065005f  ffd7                 call edi
// 00650061  83c408               add esp, 8
// 00650064  84c0                 test al, al
// 00650066  7521                 jne 0x650089
// 00650068  68e8a1a900           push 0xa9a1e8
// 0065006d  56                   push esi
// 0065006e  ffd7                 call edi
// 00650070  83c408               add esp, 8
// 00650073  84c0                 test al, al
// 00650075  7512                 jne 0x650089
// 00650077  68e0a1a900           push 0xa9a1e0
// 0065007c  56                   push esi
// 0065007d  ffd7                 call edi
// 0065007f  83c408               add esp, 8
// 00650082  84c0                 test al, al
// 00650084  7503                 jne 0x650089
// 00650086  5f                   pop edi
// 00650087  5e                   pop esi
// 00650088  c3                   ret 
// 00650089  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065008d  5f                   pop edi
// 0065008e  c60000               mov byte ptr [eax], 0
// 00650091  b001                 mov al, 1
// 00650093  5e                   pop esi
// 00650094  c3                   ret 
// 00650095  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00650099  5f                   pop edi
// 0065009a  c60101               mov byte ptr [ecx], 1
// 0065009d  b001                 mov al, 1
// 0065009f  5e                   pop esi
// 006500a0  c3                   ret 
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