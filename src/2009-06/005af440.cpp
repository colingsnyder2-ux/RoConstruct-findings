// from server: 28% by why2
struct RBX_TextureProxyBase {
    char pad[0x2c];
    float value;
    float getValue();
};

float RBX_TextureProxyBase::getValue() {
    return value;
}
