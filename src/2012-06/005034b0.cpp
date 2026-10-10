// from server: 87% by atomic.potato
struct OgreRbxMeshPartAdapter {
    char pad[0x88];
    float value88;
    float value8c;
    float value90;

    void __thiscall func(float* result);
};

void __thiscall OgreRbxMeshPartAdapter::func(float* result) {
    result[0] = this->value88;
    result[1] = this->value8c;
    result[2] = this->value90;
}
