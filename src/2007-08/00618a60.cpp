// from server: 69% by colin
struct seg_00610000 {
    void* field0;
    int field4;
    void* field8;
    void* fieldC;
    int field10;
    int field14;
    seg_00610000* init(void* a, void* b);
};

seg_00610000* seg_00610000::init(void* a, void* b) {
    field8 = a;
    field4 = 0;
    field0 = (void*)0x7c3a34;
    fieldC = b;
    field10 = 0;
    field14 = 0;
    return this;
}
