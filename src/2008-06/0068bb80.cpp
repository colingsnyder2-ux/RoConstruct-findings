// from server: 85% by colin
struct RbxSceneManager {
    void setSkyEnabled(int value);
};

void RbxSceneManager::setSkyEnabled(int value) {
    int* global = reinterpret_cast<int*>(0x8047bc);
    int g = *global;
    void** vtbl = *reinterpret_cast<void***>(this);
    void (*fn)(void*, int, int) = reinterpret_cast<void (*)(void*, int, int)>(vtbl[0x334 / 4]);
    fn(this, value, g);
}
