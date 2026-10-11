// from server: 67% by atomic.potato
struct VGameSettingsGlobalSettingsItem {
    char pad0[8];
    char flag8;
    char pad9[0x30 - 9];
    float f30;
    float f34;
    float f38;
    char pad3c[0x9c - 0x3c];
    float f9c;
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    void update(float* a, float* b);
};

extern "C" void __stdcall sub_6c9690();

void VGameSettingsGlobalSettingsItem::update(float* a, float* b) {
    if (this->flag8 != 0) {
        sub_6c9690();
    }
    this->f9c += a[0];
    this->fa0 += a[1];
    this->fa4 += a[2];
    float d0 = b[0] - this->f30;
    float d1 = b[1] - this->f34;
    float d2 = b[2] - this->f38;
    float t0 = a[2] * d1 - a[1] * d2;
    float t1 = a[0] * d2 - a[2] * d0;
    float t2 = a[1] * d0 - a[0] * d1;
    this->fa8 += t0;
    this->fac += t1;
    this->fb0 += t2;
}
