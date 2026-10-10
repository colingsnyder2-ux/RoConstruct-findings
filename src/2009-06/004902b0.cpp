// from server: 80% by why2
struct Ogre_RbxTextureCompositorSceneManager {
    char pad[0x120];
    int field_0x120;
    void get_0x120(int* out);
};

void Ogre_RbxTextureCompositorSceneManager::get_0x120(int* out) {
    *out = field_0x120;
}
