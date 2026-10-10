// from server: 84% by tester
struct Primitive {
    char pad0[0xc4];
    float field_c4;
    float field_c8;
    float field_cc;
    float field_d0;
    float field_d4;
    float field_d8;
    int field_dc;
    char pad1[0x4];
    int* field_e4;
    float* getSomething(int* out);

    float* getFrame();
};

extern "C" void __stdcall sub_65d430(int* p);

float* Primitive::getFrame() {
    int* e4 = field_e4;
    sub_65d430(e4);
    if (field_dc != e4[0x98 / 4]) {
        int out;
        float* src = getSomething(&out);
        field_c4 = src[0];
        field_c8 = src[1];
        field_cc = src[2];
        field_d0 = src[3];
        field_d4 = src[4];
        field_d8 = src[5];
        e4 = field_e4;
        sub_65d430(e4);
        field_dc = e4[0x98 / 4];
    }
    return &field_c4;
}
