// from server: 37% by why2
struct RBX_TextureProxyBase {
    char pad[0x28];
    int field_28;
    void setField28(int value);
};

void RBX_TextureProxyBase::setField28(int value) {
    field_28 = value;
}
