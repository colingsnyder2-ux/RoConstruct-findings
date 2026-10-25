// from server: 100% by Cezant64gamejr
// roc 2008-06 0068c560  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c560
//
// 0068c560  8a442404             mov al, byte ptr [esp + 4]
// 0068c564  8881818b0000         mov byte ptr [ecx + 0x8b81], al
// 0068c56a  c20400               ret 4

struct S {
    void f(char value);
};

void S::f(char value) {
    *reinterpret_cast<char*>(reinterpret_cast<int>(this) + 0x8b81) = value;
}
