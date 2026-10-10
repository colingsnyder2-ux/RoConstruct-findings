// from server: 87% by colin
struct SoundService {
    char pad[0x11d];
    unsigned char flags;
    void sub_5878c0();
    void sub_444710(const char*);
    void setPublic(bool value);
};

void SoundService::setPublic(bool value) {
    unsigned char oldFlags = flags;
    unsigned char oldBit = (oldFlags >> 1) & 1;
    if (oldBit != (unsigned char)value) {
        unsigned char newFlags = ((unsigned char)value + (unsigned char)value) ^ oldFlags;
        newFlags &= 2;
        newFlags ^= oldFlags;
        flags = newFlags;
        sub_5878c0();
        sub_444710((const char*)0x8c3488);
    }
}
