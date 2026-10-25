// from server: 100% by Cezant64gamejr
// roc 2008-06 0068c730  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c730
//
// 0068c730  ff8164420000         inc dword ptr [ecx + 0x4264]
// 0068c736  c3                   ret 

struct Ogre_RbxSceneManager {
    char pad0[16996];
    int m_counter;
    void incrementCounter();
};

void Ogre_RbxSceneManager::incrementCounter() {
    ++m_counter;
}
