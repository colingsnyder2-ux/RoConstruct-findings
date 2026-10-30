// roc 2009-12 00490930  unit: Ogre::RbxEntity  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00490930
//
// 00490930  56                   push esi
// 00490931  8bf1                 mov esi, ecx
// 00490933  80be9802000000       cmp byte ptr [esi + 0x298], 0
// 0049093a  7518                 jne 0x490954
// 0049093c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00490940  8b06                 mov eax, dword ptr [esi]
// 00490942  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00490948  51                   push ecx
// 00490949  8bce                 mov ecx, esi
// 0049094b  ffd2                 call edx
// 0049094d  c6869802000001       mov byte ptr [esi + 0x298], 1
// 00490954  5e                   pop esi
// 00490955  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAEXPAX@Z)

namespace ns_ROCX000001 {
// from server: 100% by atomic.potato
struct S
{
    void f(void* p);
};

void S::f(void* p)
{
    if (*(unsigned char*)((char*)this + 0x298) == 0)
    {
        typedef void (__thiscall *Fn)(S*, void*);
        Fn fn = *(Fn*)((char*)*(void**)this + 0xe8);
        fn(this, p);
        *(unsigned char*)((char*)this + 0x298) = 1;
    }
}
}
