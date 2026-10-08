// from server: 74% by colin
// roc 2007-08 005a4f00  unit: seg_005a0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4f00

struct GetSetImpl {
    char pad0[0x18];
    int field18;
    int field1c;
    int field20;
    void invoke(void* arg1, unsigned char* arg2);
};

void GetSetImpl::invoke(void* arg1, unsigned char* arg2) {
    char* p = (char*)arg1;
    if (p != 0) {
        p -= 4;
    } else {
        p = 0;
    }
    unsigned char idx = *arg2;
    int off = *(int*)(p + 0x108);
    int val = *(int*)(off + field20);
    val += field1c;
    int (*fn)(void*, unsigned char) = (int (*)(void*, unsigned char))field18;
    fn((void*)(val + (int)p + 0x108), idx);
}
