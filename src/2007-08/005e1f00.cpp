// from server: 83% by colin
struct VMotorFeature {
    char pad0[8];
    int field8;
    char padC[0x14];
    int field20;
    char pad24[0x5c];
    int field80;
    char pad84[0x30];
    float fieldB4;
    float fieldB8;
    float fieldBC;
    float fieldC0;
    float fieldC4;
    float fieldC8;
    void setVector(const float* v);
};

extern int g_counter;

void VMotorFeature::setVector(const float* v) {
    if (field8 != 0) return;
    fieldB4 = v[0];
    fieldB8 = v[1];
    fieldBC = v[2];
    fieldC0 = v[3];
    fieldC4 = v[4];
    int c = g_counter + 1;
    fieldC8 = v[5];
    g_counter = c;
    if (c == 0x7fffffff) {
        c = 1;
        g_counter = c;
    }
    field80 = c;
    int* p = (int*)field20;
    if (p != 0) {
        *((char*)p + 4) = 1;
    }
}
