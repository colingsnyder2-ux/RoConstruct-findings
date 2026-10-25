// from server: 100% by king_originala
// roc 2008-06 005a2c30  unit: RBX::Workspace  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2c30
//
// 005a2c30  8b8178fdffff         mov eax, dword ptr [ecx - 0x288]
// 005a2c36  8b5054               mov edx, dword ptr [eax + 0x54]
// 005a2c39  56                   push esi
// 005a2c3a  8b742408             mov esi, dword ptr [esp + 8]
// 005a2c3e  81c178fdffff         add ecx, 0xfffffd78
// 005a2c44  56                   push esi
// 005a2c45  ffd2                 call edx
// 005a2c47  8bc6                 mov eax, esi
// 005a2c49  5e                   pop esi
// 005a2c4a  c20400               ret 4

typedef void (__thiscall *Method)(void *, void *);

struct S {
    void *f(void *result);
};

void *S::f(void *result)
{
    void *object = reinterpret_cast<char *>(this) - 0x288;
    Method *table = *reinterpret_cast<Method **>(object);
    table[21](object, result);
    return result;
}
