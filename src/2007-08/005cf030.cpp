// from server: 67% by colin
struct Contact {
    char pad0[4];
    char flag4;
    char pad5[0x27];
    float f2c;
    float f30;
    float f34;
    char pad38[0x48];
    float f80;
    float f84;
    float f88;
    float f8c;
    float f90;
    float f94;
};

struct BlockBlockContact : Contact {
    void func(float* a, float* b);
};

extern "C" void __stdcall sub_61a510();

void BlockBlockContact::func(float* a, float* b)
{
    if (this->flag4 != 0) {
        sub_61a510();
    }

    this->f80 += a[0];
    this->f84 += a[1];
    this->f88 += a[2];

    float d0 = b[0] - this->f2c;
    float d1 = b[1] - this->f30;
    float d2 = b[2] - this->f34;

    float t0 = a[2] * d1 - a[1] * d2;
    float t1 = a[0] * d2 - a[2] * d0;
    float t2 = a[1] * d0 - a[0] * d1;

    this->f8c += t0;
    this->f90 += t1;
    this->f94 += t2;
}
