// from server: 100% by king_originala
// roc 2008-06 005d7b20  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7b20
//
// 005d7b20  8b442404             mov eax, dword ptr [esp + 4]
// 005d7b24  8bd1                 mov edx, ecx
// 005d7b26  85c0                 test eax, eax
// 005d7b28  7405                 je 0x5d7b2f
// 005d7b2a  83c0ec               add eax, -0x14
// 005d7b2d  eb02                 jmp 0x5d7b31
// 005d7b2f  33c0                 xor eax, eax
// 005d7b31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d7b35  8b09                 mov ecx, dword ptr [ecx]
// 005d7b37  56                   push esi
// 005d7b38  8b7220               mov esi, dword ptr [edx + 0x20]
// 005d7b3b  51                   push ecx
// 005d7b3c  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 005d7b42  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005d7b45  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005d7b48  8b5218               mov edx, dword ptr [edx + 0x18]
// 005d7b4b  8d8c0150010000       lea ecx, [ecx + eax + 0x150]
// 005d7b52  ffd2                 call edx
// 005d7b54  5e                   pop esi
// 005d7b55  c20800               ret 8

struct GetSetImpl
{
    char padding[24];
    void (__thiscall *function)(void *, int);
    int adjustment;
    int index;

    void Invoke(void *argument, const int &value);
};

void GetSetImpl::Invoke(void *argument, const int &value)
{
    char *object = argument ? (char *)argument - 0x14 : 0;
    function(
        object + 0x150 +
        (*(int *)(*(char **)(object + 0x150) + index) + adjustment),
        value);
}
