// roc 2009-06 004904c0  unit: RBX::MaterialBaseRefMaterialAdapter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004904c0
//
// 004904c0  56                   push esi
// 004904c1  8b742408             mov esi, dword ptr [esp + 8]
// 004904c5  57                   push edi
// 004904c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004904ca  3bf7                 cmp esi, edi
// 004904cc  7411                 je 0x4904df
// 004904ce  8bff                 mov edi, edi
// 004904d0  8bce                 mov ecx, esi
// 004904d2  ff15c4e48900         call dword ptr [0x89e4c4]
// 004904d8  83c644               add esi, 0x44
// 004904db  3bf7                 cmp esi, edi
// 004904dd  75f1                 jne 0x4904d0
// 004904df  5f                   pop edi
// 004904e0  5e                   pop esi
// 004904e1  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX00000a@@QAEXPAD0@Z)

namespace ns_ROCX00000a {
// from server: 100% by atomic.potato
typedef void (__thiscall *DestroyString)(void *);

extern DestroyString g_destroyString;

struct S
{
    void f(char *first, char *last);
};

void S::f(char *first, char *last)
{
    while (first != last)
    {
        g_destroyString(first);
        first += 0x44;
    }
}
}
