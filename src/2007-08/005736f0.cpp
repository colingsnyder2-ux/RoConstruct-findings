// from server: 80% by colin
struct VTexture {
    float x;
    float y;
    float z;
    int equals(const VTexture* other) const;
};

int VTexture::equals(const VTexture* other) const {
    if (other->x == x && other->y == y && other->z == z) {
        return 0;
    }
    return 1;
}
