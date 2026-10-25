// from server: 100% by king_originala
// roc 2008-06 0042eb90  unit: CWrapperView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042eb90
//
// 0042eb90  56                   push esi
// 0042eb91  8b742408             mov esi, dword ptr [esp + 8]
// 0042eb95  56                   push esi
// 0042eb96  e867232700           call 0x6a0f02
// 0042eb9b  85c0                 test eax, eax
// 0042eb9d  7504                 jne 0x42eba3
// 0042eb9f  5e                   pop esi
// 0042eba0  c20400               ret 4
// 0042eba3  81662cfffdffff       and dword ptr [esi + 0x2c], 0xfffffdff
// 0042ebaa  b801000000           mov eax, 1
// 0042ebaf  5e                   pop esi
// 0042ebb0  c20400               ret 4

struct Object {
    char padding[0x2c];
    unsigned int flags;
};

extern "C" int __stdcall check(Object* object);

int __stdcall update(Object* object)
{
    if (!check(object))
        return 0;

    object->flags &= ~0x200u;
    return 1;
}
