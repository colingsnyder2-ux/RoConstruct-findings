// roc 2011-06 0093cdb0  unit: Ogre::RbxMaterialAdapter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093cdb0
//
// 0093cdb0  56                   push esi
// 0093cdb1  8b742408             mov esi, dword ptr [esp + 8]
// 0093cdb5  57                   push edi
// 0093cdb6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0093cdba  3bf7                 cmp esi, edi
// 0093cdbc  7411                 je 0x93cdcf
// 0093cdbe  8bff                 mov edi, edi
// 0093cdc0  8bce                 mov ecx, esi
// 0093cdc2  ff15d004a400         call dword ptr [0xa404d0]
// 0093cdc8  83c644               add esi, 0x44
// 0093cdcb  3bf7                 cmp esi, edi
// 0093cdcd  75f1                 jne 0x93cdc0
// 0093cdcf  5f                   pop edi
// 0093cdd0  5e                   pop esi
// 0093cdd1  c20800               ret 8
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