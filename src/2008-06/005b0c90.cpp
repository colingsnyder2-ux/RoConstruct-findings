// from server: 100% by king_originala
// roc 2008-06 005b0c90  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0c90
//
// 005b0c90  8b442404             mov eax, dword ptr [esp + 4]
// 005b0c94  8bd1                 mov edx, ecx
// 005b0c96  85c0                 test eax, eax
// 005b0c98  7405                 je 0x5b0c9f
// 005b0c9a  83c0ec               add eax, -0x14
// 005b0c9d  eb02                 jmp 0x5b0ca1
// 005b0c9f  33c0                 xor eax, eax
// 005b0ca1  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 005b0ca7  56                   push esi
// 005b0ca8  8b7210               mov esi, dword ptr [edx + 0x10]
// 005b0cab  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005b0cae  034a0c               add ecx, dword ptr [edx + 0xc]
// 005b0cb1  8b5208               mov edx, dword ptr [edx + 8]
// 005b0cb4  8d8c0150010000       lea ecx, [ecx + eax + 0x150]
// 005b0cbb  ffd2                 call edx
// 005b0cbd  5e                   pop esi
// 005b0cbe  c20400               ret 4

struct GetSetImpl
{
    char padding[8];
    int (__thiscall *function)(void *);
    int adjustment;
    int index;

    int Invoke(void *argument);
};

int GetSetImpl::Invoke(void *argument)
{
    char *object = argument ? (char *)argument - 0x14 : 0;
    return function(
        object + 0x150 +
        (*(int *)(*(char **)(object + 0x150) + index) + adjustment));
}
