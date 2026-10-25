// from server: 100% by king_originala
// roc 2008-06 00599d30  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599d30
//
// 00599d30  8b442404             mov eax, dword ptr [esp + 4]
// 00599d34  8bd1                 mov edx, ecx
// 00599d36  85c0                 test eax, eax
// 00599d38  7405                 je 0x599d3f
// 00599d3a  83c0ec               add eax, -0x14
// 00599d3d  eb02                 jmp 0x599d41
// 00599d3f  33c0                 xor eax, eax
// 00599d41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00599d45  56                   push esi
// 00599d46  8b7220               mov esi, dword ptr [edx + 0x20]
// 00599d49  51                   push ecx
// 00599d4a  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00599d50  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00599d53  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00599d56  8b5218               mov edx, dword ptr [edx + 0x18]
// 00599d59  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 00599d60  ffd2                 call edx
// 00599d62  5e                   pop esi
// 00599d63  c20800               ret 8

struct S {
    char padding[0x18];
    void (__thiscall *setter)(void *, int);
    int adjustment;
    int virtualOffset;

    void set(void *object, int value);
};

void S::set(void *object, int value)
{
    char *base = object ? static_cast<char *>(object) - 0x14 : 0;
    setter(base + 0x134
               + *reinterpret_cast<int *>(
                   *reinterpret_cast<char **>(base + 0x134) + virtualOffset)
               + adjustment,
           value);
}
