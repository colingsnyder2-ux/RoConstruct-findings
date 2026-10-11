// from server: 74% by atomic.potato
struct VLighting {
    char pad0[0x1dc];
    float f1dc;
    float f1e0;
    float f1e4;
    char pad1[0x234 - 0x1e8];
    int field234;
    void sub_67a980(float, float, float);
};

extern "C" void __stdcall sub_40c2d0(const char*);
extern "C" void __stdcall sub_40bb90(const char*, char);

void VLighting::sub_67a980(float a, float b, float c) {
    if (f1dc != a || f1e0 != b || f1e4 != c) {
        f1dc = a;
        f1e0 = b;
        f1e4 = c;
        sub_40c2d0((const char*)0xa4e284);
        if (field234 != 0) {
            sub_40bb90((const char*)0x5d5fe0, 0);
        }
    }
}
