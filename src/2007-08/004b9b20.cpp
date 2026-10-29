// from server: 82% by colin
struct RakPeer {
    char pad[0x3c];
    unsigned int field_3c;
};

bool compareGreater(const RakPeer* self, const RakPeer* other) {
    const unsigned int* a = &self->field_3c;
    const unsigned int* b = &other->field_3c;
    for (int i = 0xf; i >= 0; --i) {
        if (b[i] > a[i]) {
            return true;
        }
        if (b[i] < a[i]) {
            return false;
        }
    }
    return false;
}
