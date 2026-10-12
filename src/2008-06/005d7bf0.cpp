// from server: 100% by king_originala
// roc 2008-06 005d7bf0  unit: RBX::P8Humanoid::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7bf0
//
// 005d7bf0  8b442404             mov eax, dword ptr [esp + 4]
// 005d7bf4  8bd1                 mov edx, ecx
// 005d7bf6  85c0                 test eax, eax
// 005d7bf8  7405                 je 0x5d7bff
// 005d7bfa  83c0ec               add eax, -0x14
// 005d7bfd  eb02                 jmp 0x5d7c01
// 005d7bff  33c0                 xor eax, eax
// 005d7c01  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d7c05  0fb609               movzx ecx, byte ptr [ecx]
// 005d7c08  56                   push esi
// 005d7c09  8b7220               mov esi, dword ptr [edx + 0x20]
// 005d7c0c  51                   push ecx
// 005d7c0d  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 005d7c13  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005d7c16  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005d7c19  8b5218               mov edx, dword ptr [edx + 0x18]
// 005d7c1c  8d8c0150010000       lea ecx, [ecx + eax + 0x150]
// 005d7c23  ffd2                 call edx
// 005d7c25  5e                   pop esi
// 005d7c26  c20800               ret 8

struct S
{
    char padding[0x18];
    void (__thiscall *setter)(void *, unsigned char);
    int adjustment;
    int virtualOffset;

    void f(void *object, const unsigned char *value);
};

void S::f(void *object, const unsigned char *value)
{
    char *base = object ? static_cast<char *>(object) - 0x14 : 0;
    unsigned char argument = *value;
    int offset = *reinterpret_cast<int *>(
        *reinterpret_cast<char **>(base + 0x150) + virtualOffset);
    setter(base + 0x150 + offset + adjustment, argument);
}
