// from server: 100% by king_originala
// roc 2008-06 00670710  unit: Ogre::VRbxFont::?$SharedPtr  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00670710
//
// 00670710  56                   push esi
// 00670711  57                   push edi
// 00670712  8bf9                 mov edi, ecx
// 00670714  8b7704               mov esi, dword ptr [edi + 4]
// 00670717  85f6                 test esi, esi
// 00670719  7415                 je 0x670730
// 0067071b  8d8e0c020000         lea ecx, [esi + 0x20c]
// 00670721  ff158c4c8000         call dword ptr [0x804c8c]
// 00670727  56                   push esi
// 00670728  e84dff0200           call 0x6a067a
// 0067072d  83c404               add esp, 4
// 00670730  8b4708               mov eax, dword ptr [edi + 8]
// 00670733  50                   push eax
// 00670734  e841ff0200           call 0x6a067a
// 00670739  83c404               add esp, 4
// 0067073c  5f                   pop edi
// 0067073d  5e                   pop esi
// 0067073e  c3                   ret 

extern void (__thiscall *textureDestructor)(void *);
extern "C" void __cdecl release(void *);

struct S {
    void *unused;
    void *object;
    void *count;
    void f();
};

void S::f()
{
    void *p = object;
    if (p) {
        textureDestructor(static_cast<char *>(p) + 0x20c);
        release(p);
    }
    release(count);
}
