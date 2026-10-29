// from server: 78% by colin
struct RakPeer {
    unsigned int data[8];
    bool lessThan(const RakPeer& other) const;
};

bool RakPeer::lessThan(const RakPeer& other) const {
    const unsigned int* a = &data[7];
    const unsigned int* b = &other.data[7];
    for (int i = 7; i >= 0; --i) {
        if (b[i] > a[i]) return true;
        if (b[i] < a[i]) return false;
    }
    return false;
}
