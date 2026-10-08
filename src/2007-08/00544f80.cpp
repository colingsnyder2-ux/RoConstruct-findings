// from server: 59% by colin
// roc 2007-08 00544f80  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544f80
//
// 00544f80  51                   push ecx
// 00544f81  56                   push esi
// 00544f82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00544f86  83c134               add ecx, 0x34
// 00544f89  51                   push ecx
// 00544f8a  8bce                 mov ecx, esi
// 00544f8c  c744240800000000     mov dword ptr [esp + 8], 0
// 00544f94  ff159ce67700         call dword ptr [0x77e69c]
// 00544f9a  8bc6                 mov eax, esi
// 00544f9c  5e                   pop esi
// 00544f9d  59                   pop ecx
// 00544f9e  c20400               ret 4

struct S_func_00544f80 {
    char pad0[0x34];
    char m_str[0x10];
    S_func_00544f80* f(S_func_00544f80* other);
};

extern "C" void __stdcall copy_string(char* dst, const char* src);

S_func_00544f80* S_func_00544f80::f(S_func_00544f80* other)
{
    copy_string(m_str, other->m_str);
    return other;
}
