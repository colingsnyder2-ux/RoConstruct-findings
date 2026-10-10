// from server: 52% by colin
struct ArchiveBinder {
    int field0;
    int construct(int arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);

int ArchiveBinder::construct(int arg) {
    int* p;
    this->field0 = 0;
    p = (int*)operator_new(0x10);
    if (p != 0) {
        p[1] = 1;
        p[2] = 1;
        p[0] = 0x7a9ebc;
        p[3] = arg;
    } else {
        p = 0;
    }
    this->field0 = (int)p;
    return (int)this;
}
