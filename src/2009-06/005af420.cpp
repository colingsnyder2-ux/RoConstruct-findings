// from server: 37% by why2
struct TextureProxyBase {
    char pad[0x2c];
    float value;
    void setValue(float v);
};

void TextureProxyBase::setValue(float v) {
    value = v;
}
