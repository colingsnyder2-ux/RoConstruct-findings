// from server: 100% by Cezant64gamejr
// roc 2008-06 0068c2d0  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c2d0
//
// 0068c2d0  8a442404             mov al, byte ptr [esp + 4]
// 0068c2d4  888190420000         mov byte ptr [ecx + 0x4290], al
// 0068c2da  c20400               ret 4

struct RbxSceneManager {
    void setFindVisibleObjects(bool value);
};

void RbxSceneManager::setFindVisibleObjects(bool value) {
    *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + 0x4290) = value;
}
