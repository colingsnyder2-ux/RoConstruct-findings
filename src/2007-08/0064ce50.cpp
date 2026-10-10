// from server: 33% by colin
struct CXTPImageManagerIconSet {
    char pad[0x20];
    char map[0x1c];
    int field3c;
    void* sub_634A60(int*, int);
    void** sub_6353A0(int);
    void* sub_649B30(int, int, int, void*);
    void* func(int);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);

void* CXTPImageManagerIconSet::func(int n) {
    void* result;
    void* p;
    int local = 0;
    if (sub_634A60(&local, n) != 0) {
        return (void*)local;
    }
    p = sub_62FEF6(0xbc);
    if (p != 0) {
        result = sub_649B30(field3c, n, 0xf, this);
    } else {
        result = 0;
    }
    *sub_6353A0(n) = result;
    return result;
}
