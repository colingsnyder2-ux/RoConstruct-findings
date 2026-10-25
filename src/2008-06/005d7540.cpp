// from server: 100% by tester
// roc 2008-06 005d7540  unit: Ogre::RbxSceneManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7540
//
// 005d7540  8a81e8010000         mov al, byte ptr [ecx + 0x1e8]
// 005d7546  c0e804               shr al, 4
// 005d7549  2401                 and al, 1
// 005d754b  c3                   ret 

struct RbxSceneManager {
    char pad[0x1e8];
    unsigned char lo : 4;
    unsigned char flag : 1;
    unsigned char hi : 3;
    bool getFlag() const;
};

bool RbxSceneManager::getFlag() const {
    return flag;
}
