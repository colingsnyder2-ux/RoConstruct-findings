// from server: 100% by tester
// roc 2008-06 005d7530  unit: Ogre::RbxSceneManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7530
//
// 005d7530  8a81e8010000         mov al, byte ptr [ecx + 0x1e8]
// 005d7536  c0e803               shr al, 3
// 005d7539  2401                 and al, 1
// 005d753b  c3                   ret 

struct IControllable {
    char pad[0x1e8];
    unsigned char lo : 3;
    unsigned char flag : 1;
    unsigned char hi : 4;
    bool getFlag() const;
};

bool IControllable::getFlag() const {
    return flag;
}