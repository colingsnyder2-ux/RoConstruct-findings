// from server: 100% by Cezant64gamejr
// roc 2008-06 0068b7c0  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b7c0
//
// 0068b7c0  8a442404             mov al, byte ptr [esp + 4]
// 0068b7c4  8881d0010000         mov byte ptr [ecx + 0x1d0], al
// 0068b7ca  c20400               ret 4

struct S {
    void f(char param);
};

void S::f(char param) {
    reinterpret_cast<char*>(this)[0x1d0] = param;
}