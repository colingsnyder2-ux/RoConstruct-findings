// from server: 100% by Cezant64gamejr
// roc 2008-06 0068c530  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c530
//
// 0068c530  8a442404             mov al, byte ptr [esp + 4]
// 0068c534  888124430000         mov byte ptr [ecx + 0x4324], al
// 0068c53a  c20400               ret 4

struct S {
    void f(char value);
};

void S::f(char value) {
    ((char*)((char*)this + 0x4324))[0] = value;
}
