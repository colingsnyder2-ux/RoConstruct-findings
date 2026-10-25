// from server: 100% by tester
// roc 2011-06 0092eb70  unit: Ogre::GfxClustererPart  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092eb70
//
// 0092eb70  56                   push esi
// 0092eb71  8b742408             mov esi, dword ptr [esp + 8]
// 0092eb75  57                   push edi
// 0092eb76  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0092eb7a  3bf7                 cmp esi, edi
// 0092eb7c  7411                 je 0x92eb8f
// 0092eb7e  8bff                 mov edi, edi
// 0092eb80  8bce                 mov ecx, esi
// 0092eb82  ff15d004a400         call dword ptr [0xa404d0]
// 0092eb88  83c620               add esi, 0x20
// 0092eb8b  3bf7                 cmp esi, edi
// 0092eb8d  75f1                 jne 0x92eb80
// 0092eb8f  5f                   pop edi
// 0092eb90  5e                   pop esi
// 0092eb91  c20800               ret 8

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
