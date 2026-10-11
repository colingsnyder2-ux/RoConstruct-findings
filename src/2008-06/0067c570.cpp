// from server: 100% by tester
// roc 2008-06 0067c570  unit: Ogre::RbxEntity  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c570
//
// 0067c570  56                   push esi
// 0067c571  8bf1                 mov esi, ecx
// 0067c573  80be7902000000       cmp byte ptr [esi + 0x279], 0
// 0067c57a  7518                 jne 0x67c594
// 0067c57c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067c580  8b06                 mov eax, dword ptr [esi]
// 0067c582  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 0067c588  51                   push ecx
// 0067c589  8bce                 mov ecx, esi
// 0067c58b  ffd2                 call edx
// 0067c58d  c6867902000001       mov byte ptr [esi + 0x279], 1
// 0067c594  5e                   pop esi
// 0067c595  c20400               ret 4

struct S
{
    void f(void* p);
};

void S::f(void* p)
{
    if (*(unsigned char*)((char*)this + 0x279) == 0)
    {
        typedef void (__thiscall *Fn)(S*, void*);
        Fn fn = *(Fn*)((char*)*(void**)this + 0xd4);
        fn(this, p);
        *(unsigned char*)((char*)this + 0x279) = 1;
    }
}
