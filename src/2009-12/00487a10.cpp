// roc 2009-12 00487a10  unit: Ogre::GfxClustererPart  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00487a10
//
// 00487a10  56                   push esi
// 00487a11  8b742408             mov esi, dword ptr [esp + 8]
// 00487a15  57                   push edi
// 00487a16  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00487a1a  3bf7                 cmp esi, edi
// 00487a1c  7411                 je 0x487a2f
// 00487a1e  8bff                 mov edi, edi
// 00487a20  8bce                 mov ecx, esi
// 00487a22  ff15e4b69800         call dword ptr [0x98b6e4]
// 00487a28  83c620               add esi, 0x20
// 00487a2b  3bf7                 cmp esi, edi
// 00487a2d  75f1                 jne 0x487a20
// 00487a2f  5f                   pop edi
// 00487a30  5e                   pop esi
// 00487a31  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX00000f@@QAEXPAX0@Z)

namespace ns_ROCX00000f {
// from server: 100% by tester
typedef void (__thiscall *Destructor)(void *);

extern "C" Destructor g_destructor;

struct S
{
    void f(void *, void *);
};

void S::f(void *first, void *last)
{
    unsigned char *p = (unsigned char *)first;
    unsigned char *end = (unsigned char *)last;
    while (p != end)
    {
        g_destructor(p);
        p += 0x20;
    }
}
}
