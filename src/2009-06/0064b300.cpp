// roc 2009-06 0064b300  unit: RBX::DataModel  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064b300
//
// 0064b300  56                   push esi
// 0064b301  8b742408             mov esi, dword ptr [esp + 8]
// 0064b305  57                   push edi
// 0064b306  8b3d74e48900         mov edi, dword ptr [0x89e474]
// 0064b30c  6894ba8c00           push 0x8cba94
// 0064b311  56                   push esi
// 0064b312  ffd7                 call edi
// 0064b314  83c408               add esp, 8
// 0064b317  84c0                 test al, al
// 0064b319  755a                 jne 0x64b375
// 0064b31b  6870508c00           push 0x8c5070
// 0064b320  56                   push esi
// 0064b321  ffd7                 call edi
// 0064b323  83c408               add esp, 8
// 0064b326  84c0                 test al, al
// 0064b328  754b                 jne 0x64b375
// 0064b32a  682cf18d00           push 0x8df12c
// 0064b32f  56                   push esi
// 0064b330  ffd7                 call edi
// 0064b332  83c408               add esp, 8
// 0064b335  84c0                 test al, al
// 0064b337  753c                 jne 0x64b375
// 0064b339  68fcfc8b00           push 0x8bfcfc
// 0064b33e  56                   push esi
// 0064b33f  ffd7                 call edi
// 0064b341  83c408               add esp, 8
// 0064b344  84c0                 test al, al
// 0064b346  7521                 jne 0x64b369
// 0064b348  6824f18d00           push 0x8df124
// 0064b34d  56                   push esi
// 0064b34e  ffd7                 call edi
// 0064b350  83c408               add esp, 8
// 0064b353  84c0                 test al, al
// 0064b355  7512                 jne 0x64b369
// 0064b357  681cf18d00           push 0x8df11c
// 0064b35c  56                   push esi
// 0064b35d  ffd7                 call edi
// 0064b35f  83c408               add esp, 8
// 0064b362  84c0                 test al, al
// 0064b364  7503                 jne 0x64b369
// 0064b366  5f                   pop edi
// 0064b367  5e                   pop esi
// 0064b368  c3                   ret 
// 0064b369  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064b36d  5f                   pop edi
// 0064b36e  c60000               mov byte ptr [eax], 0
// 0064b371  b001                 mov al, 1
// 0064b373  5e                   pop esi
// 0064b374  c3                   ret 
// 0064b375  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064b379  5f                   pop edi
// 0064b37a  c60101               mov byte ptr [ecx], 1
// 0064b37d  b001                 mov al, 1
// 0064b37f  5e                   pop esi
// 0064b380  c3                   ret 
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