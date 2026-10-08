// from server: 70% by colin
// roc 2008-06 005d7520  unit: Ogre::RbxSceneManager  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7520
//
// 005d7520  8a81e8010000         mov al, byte ptr [ecx + 0x1e8]
// 005d7526  2401                 and al, 1
// 005d7528  c3                   ret 

struct SceneManager {
    bool getSkyEnabled() const;
};

bool SceneManager::getSkyEnabled() const {
    return (reinterpret_cast<const unsigned char*>(this) + 0x1e8)[0] & 1;
}
