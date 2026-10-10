// from server: 87% by atomic.potato
struct OgreRbxMeshPartAdapter {
    char pad[0x94];
    float values[3];

    void __thiscall getValues(float* out);
};

void __thiscall OgreRbxMeshPartAdapter::getValues(float* out) {
    out[0] = values[0];
    out[1] = values[1];
    out[2] = values[2];
}
