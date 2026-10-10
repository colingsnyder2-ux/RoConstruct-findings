// from server: 82% by colin
struct RakPeer {
    char pad0[8];
    unsigned short count;
    char pad1[0x22c - 0xa];
    void* ptr22c;
    char pad2[0x730 - 0x230];
    double d730;
    unsigned short w738;
    unsigned short w73a;

    void func(double a, unsigned short b, unsigned short c, unsigned short d);
};

extern "C" void __stdcall sub_4c4b70(void*, int, int, double);

void RakPeer::func(double a, unsigned short b, unsigned short c, unsigned short d) {
    if (ptr22c != 0) {
        unsigned short i = 0;
        if (count > 0) {
            do {
                sub_4c4b70((char*)ptr22c + 0x18 + i * 0x840, b, d, a);
                i++;
            } while (i < count);
        }
    }
    d730 = a;
    w738 = b;
    w73a = c;
}
