// from server: 100% by tester
// roc 2011-06 0096bba0  unit: Ogre::istreamDataStream  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0096bba0
//
// 0096bba0  ff4968               dec dword ptr [ecx + 0x68]
// 0096bba3  c20400               ret 4

struct Ogre_istreamDataStream {
    char pad[104];
    int field_68;
    void Release(int);
};

void Ogre_istreamDataStream::Release(int) {
    --field_68;
}
