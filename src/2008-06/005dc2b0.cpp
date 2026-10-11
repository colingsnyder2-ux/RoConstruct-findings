// from server: 53% by atomic.potato
struct VPartInstance {
    char pad[0x1e8];
    unsigned char flags;
    void SetFilteredSelection(bool value);
};

void VPartInstance::SetFilteredSelection(bool value) {
    unsigned char old = flags;
    unsigned char bit = (old >> 3) & 1;
    if (bit == (unsigned char)value) {
        return;
    }
    unsigned char v = (unsigned char)value;
    v = (unsigned char)(v + v);
    v = (unsigned char)(v + v);
    v = (unsigned char)(v + v);
    v = (unsigned char)(v ^ old);
    v = (unsigned char)(v & 8);
    v = (unsigned char)(v ^ old);
    flags = v;
    extern void __stdcall sub_40DB00();
    sub_40DB00();
}
