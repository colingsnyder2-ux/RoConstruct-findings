// roc 2010-06 008dac80  unit: Ogre::RbxTextureCompositorSceneManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008dac80
//
// 008dac80  56                   push esi
// 008dac81  8b742408             mov esi, dword ptr [esp + 8]
// 008dac85  57                   push edi
// 008dac86  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008dac8a  3bf7                 cmp esi, edi
// 008dac8c  7411                 je 0x8dac9f
// 008dac8e  8bff                 mov edi, edi
// 008dac90  8bce                 mov ecx, esi
// 008dac92  ff1500a49e00         call dword ptr [0x9ea400]
// 008dac98  83c644               add esi, 0x44
// 008dac9b  3bf7                 cmp esi, edi
// 008dac9d  75f1                 jne 0x8dac90
// 008dac9f  5f                   pop edi
// 008daca0  5e                   pop esi
// 008daca1  c20800               ret 8
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