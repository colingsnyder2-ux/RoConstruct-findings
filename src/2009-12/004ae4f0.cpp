// roc 2009-12 004ae4f0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ae4f0
//
// 004ae4f0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004ae4f3  85c9                 test ecx, ecx
// 004ae4f5  740c                 je 0x4ae503
// 004ae4f7  8b01                 mov eax, dword ptr [ecx]
// 004ae4f9  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 004ae4ff  6a01                 push 1
// 004ae501  ffd2                 call edx
// 004ae503  c3                   ret 
// copied from an identical function in another client (function ?method@S@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
// from server: 100% by tester
struct S {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    void method();
};

void S::method() {
    S* p = (S*)field_c;
    if (p) {
        void** vtbl = *(void***)p;
        void (__thiscall *fn)(S*, int) = (void (__thiscall *)(S*, int))vtbl[0xc8 / 4];
        fn(p, 1);
    }
}
}
