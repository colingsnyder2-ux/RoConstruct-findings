// from server: 83% by colin
struct RbxTextureCompositorSceneManager {
    char pad[0x10];
    int* field10;
    unsigned int field14;
    unsigned int field18;
    int field1c;
    void method48d220(int);
    void func48e730();
};

void RbxTextureCompositorSceneManager::func48e730() {
    if (field1c != 0) {
        method48d220(field10[field18]);
        field18++;
        if (field14 > field18)
            ;
        else
            field18 = 0;
        field1c--;
        if (field1c == 0)
            field18 = 0;
    }
}
