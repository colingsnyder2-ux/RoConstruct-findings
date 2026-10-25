// from server: 100% by king_originala
// roc 2008-06 006786c0  unit: Ogre::RbxSceneManagerFactory  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006786c0
//
// 006786c0  33c0                 xor eax, eax
// 006786c2  56                   push esi
// 006786c3  8bf1                 mov esi, ecx
// 006786c5  8d4e18               lea ecx, [esi + 0x18]
// 006786c8  c7062cdf8400         mov dword ptr [esi], 0x84df2c
// 006786ce  894604               mov dword ptr [esi + 4], eax
// 006786d1  894608               mov dword ptr [esi + 8], eax
// 006786d4  89460c               mov dword ptr [esi + 0xc], eax
// 006786d7  894610               mov dword ptr [esi + 0x10], eax
// 006786da  894614               mov dword ptr [esi + 0x14], eax
// 006786dd  e8cefeffff           call 0x6785b0
// 006786e2  c786f8070000ffffffff mov dword ptr [esi + 0x7f8], 0xffffffff
// 006786ec  8bc6                 mov eax, esi
// 006786ee  5e                   pop esi
// 006786ef  c3                   ret 

struct Inner {
    char storage[0x7e0];
    Inner();
};

struct S {
    virtual void f();
    int a, b, c, d, e;
    Inner inner;
    int last;
    S();
};

S::S() : a(0), b(0), c(0), d(0), e(0), last(-1) {
}
