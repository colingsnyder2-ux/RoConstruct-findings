// from server: 73% by colin
struct GFont {
    void* vtable;
    float f4;
    float f8;
    float fc;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;

    GFont(const float* a, const float* b);
};

GFont::GFont(const float* a, const float* b)
{
    vtable = (void*)0x7c4db4;
    f4 = 0.0f;
    f8 = 0.0f;
    fc = 0.0f;
    f10 = 0.0f;
    f14 = 0.0f;
    f18 = 0.0f;
    f1c = 0.0f;
    f20 = 0.0f;
    f24 = 0.0f;
    f28 = 0.0f;
    f2c = 0.0f;
    f30 = 0.0f;
    f34 = 0.0f;
    f38 = 0.0f;
    f3c = 0.0f;
    f40 = 0.0f;
    f44 = 0.0f;
    f48 = 0.0f;
    f4c = 0.0f;
    f50 = 0.0f;
    f54 = 0.0f;
    f58 = 0.0f;
    f5c = 0.0f;
    f60 = 0.0f;

    f28 = a[0];
    f1c = a[0];
    f10 = a[0];
    f4 = a[0];

    f58 = b[0];
    f4c = b[0];
    f40 = b[0];
    f34 = b[0];

    f44 = a[1];
    f38 = a[1];
    f14 = a[1];
    f8 = a[1];

    f5c = b[1];
    f50 = b[1];
    f2c = b[1];
    f20 = b[1];

    f54 = a[2];
    f3c = a[2];
    f24 = a[2];
    fc = a[2];

    f60 = b[2];
    f48 = b[2];
    f30 = b[2];
    f18 = b[2];
}
