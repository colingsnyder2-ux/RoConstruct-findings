// from server: 11% by atomic.potato
struct CXTPPropertyGridItemColorColorPopup {
    char pad0[0xa4];
    unsigned char flags;
    char pad1[0x13c - 0xa5];
    char container[0xc];
    int count;
    int GetItem(int index);
    virtual void OnInplaceButtonDown(int item);
};

int CXTPPropertyGridItemColorColorPopup::GetItem(int index) {
    if (index < 0) {
        if (!(flags & 0x10))
            return 0;
        index = count - 1;
    }
    if (index >= count)
        index = count - 1;
    return 0;
}
