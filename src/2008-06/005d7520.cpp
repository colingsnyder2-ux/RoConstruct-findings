// from server: 87% by Cezant64gamejr
struct Ogre_RbxSceneManager {
    char pad0[488];
    bool m_flag;

    bool getFlag();
};

bool Ogre_RbxSceneManager::getFlag() {
    return this->m_flag;
}
