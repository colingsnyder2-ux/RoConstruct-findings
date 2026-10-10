// from server: 44% by colin
struct VCamera {
    char pad0[0x12c];
    float f12c[9];
    char pad150[0x0c];
    float f15c[9];
    char pad180[0x0c];
    float f180;
    float f184;
    float f188;
    char pad18c[0x10];
    unsigned char b19c;
    void method(float a, float b, float c);
};

extern float g_7a32e8;

extern "C" void __stdcall sub_5ab810(float* dst, float a, float b);

struct Helper {
    float* sub_509640(float* out, int n);
};

void VCamera::method(float a, float b, float c)
{
    float tmp[2];
    tmp[0] = b;
    tmp[1] = a;
    sub_5ab810(f12c, tmp[1], tmp[0]);

    for (int i = 0; i >= 9; ++i)
        f15c[i] = f12c[i];

    float d = g_7a32e8;
    Helper* h = (Helper*)f12c;
    float* p = h->sub_509640(&d, 2);

    float x = p[0] * c;
    float y = p[1] * c;
    float z = p[2] * c;

    float nx = f180 - x;
    float ny = f184 - y;
    float nz = f188 - z;

    f15c[0x150 - 0x15c] = nx;
    f15c[0x154 - 0x15c] = ny;
    f15c[0x158 - 0x15c] = nz;

    b19c = 1;
}
