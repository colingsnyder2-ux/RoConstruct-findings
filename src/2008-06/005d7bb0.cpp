// from server: 100% by king_originala
// roc 2008-06 005d7bb0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7bb0
//
// 005d7bb0  8b442404             mov eax, dword ptr [esp + 4]
// 005d7bb4  8bd1                 mov edx, ecx
// 005d7bb6  85c0                 test eax, eax
// 005d7bb8  7405                 je 0x5d7bbf
// 005d7bba  83c0ec               add eax, -0x14
// 005d7bbd  eb02                 jmp 0x5d7bc1
// 005d7bbf  33c0                 xor eax, eax
// 005d7bc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d7bc5  56                   push esi
// 005d7bc6  8b7220               mov esi, dword ptr [edx + 0x20]
// 005d7bc9  51                   push ecx
// 005d7bca  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 005d7bd0  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005d7bd3  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005d7bd6  8b5218               mov edx, dword ptr [edx + 0x18]
// 005d7bd9  8d8c0150010000       lea ecx, [ecx + eax + 0x150]
// 005d7be0  ffd2                 call edx
// 005d7be2  5e                   pop esi
// 005d7be3  c20800               ret 8

struct Base
{
    char data[4];
};

struct Object : Base
{
    char padding[0x10];
};

struct Argument : Object
{
    char padding2[4];
};

struct GetSetImpl
{
    char padding[0x18];
    int (__thiscall *function)(void *, void *);
    int adjustment;
    int index;

    int Invoke(Argument *a, void *b);
};

int GetSetImpl::Invoke(Argument *a, void *b)
{
    char *obj = a ? (char *)a - 0x14 : 0;
    return function(
        obj + 0x150 +
        (*(int *)(*(char **)(obj + 0x150) + index) + adjustment),
        b);
}
