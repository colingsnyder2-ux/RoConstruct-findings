// from server: 92% by colin
struct VCamera {
    char pad[0x1d8];
    int field_0x1d8;
    void setFlag();
};

void VCamera::setFlag() {
    int one = 1;
    if (field_0x1d8 != one) {
        field_0x1d8 = one;
    }
}
