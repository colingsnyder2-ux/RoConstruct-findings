// from server: 100% by colin
// roc 2008-06 005bde60  unit: RBX::Soundscape::SoundService  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bde60
//
// 005bde60  56                   push esi
// 005bde61  8b742408             mov esi, dword ptr [esp + 8]
// 005bde65  57                   push edi
// 005bde66  8b3d6c238000         mov edi, dword ptr [0x80236c]
// 005bde6c  6894ba8100           push 0x81ba94
// 005bde71  56                   push esi
// 005bde72  ffd7                 call edi
// 005bde74  83c408               add esp, 8
// 005bde77  84c0                 test al, al
// 005bde79  755a                 jne 0x5bded5
// 005bde7b  6830848300           push 0x838430
// 005bde80  56                   push esi
// 005bde81  ffd7                 call edi
// 005bde83  83c408               add esp, 8
// 005bde86  84c0                 test al, al
// 005bde88  754b                 jne 0x5bded5
// 005bde8a  6828848300           push 0x838428
// 005bde8f  56                   push esi
// 005bde90  ffd7                 call edi
// 005bde92  83c408               add esp, 8
// 005bde95  84c0                 test al, al
// 005bde97  753c                 jne 0x5bded5
// 005bde99  681ce28100           push 0x81e21c
// 005bde9e  56                   push esi
// 005bde9f  ffd7                 call edi
// 005bdea1  83c408               add esp, 8
// 005bdea4  84c0                 test al, al
// 005bdea6  7521                 jne 0x5bdec9
// 005bdea8  6820848300           push 0x838420
// 005bdead  56                   push esi
// 005bdeae  ffd7                 call edi
// 005bdeb0  83c408               add esp, 8
// 005bdeb3  84c0                 test al, al
// 005bdeb5  7512                 jne 0x5bdec9
// 005bdeb7  6818848300           push 0x838418
// 005bdebc  56                   push esi
// 005bdebd  ffd7                 call edi
// 005bdebf  83c408               add esp, 8
// 005bdec2  84c0                 test al, al
// 005bdec4  7503                 jne 0x5bdec9
// 005bdec6  5f                   pop edi
// 005bdec7  5e                   pop esi
// 005bdec8  c3                   ret 
// 005bdec9  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bdecd  5f                   pop edi
// 005bdece  c60000               mov byte ptr [eax], 0
// 005bded1  b001                 mov al, 1
// 005bded3  5e                   pop esi
// 005bded4  c3                   ret 
// 005bded5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bded9  5f                   pop edi
// 005bdeda  c60101               mov byte ptr [ecx], 1
// 005bdedd  b001                 mov al, 1
// 005bdedf  5e                   pop esi
// 005bdee0  c3                   ret 




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
