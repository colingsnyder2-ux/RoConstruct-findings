// from server: 87% by colin
struct ICameraSubject {
    float x0;
    float x1;
    float x2;
    float x3;
    float x4;
    float x5;
    char flag18;
    char pad19[3];
    int field1c;
    int field20;
    int field24;
    int field28;

    void getCoordinateFrame(float* out);
};

void ICameraSubject::getCoordinateFrame(float* out) {
    if (flag18) {
        int a = field1c;
        int edx = *(int*)(a + 0xec);
        int ecx = field28;
        edx = *(int*)(edx + ecx);
        edx += field24;
        int self = (int)this;
        int arg = self + a + 0xec + edx;
        int fn = field20;
        float* result;
        ((void (__thiscall*)(int, float**))fn)(arg, &result);
        x0 = result[0];
        x1 = result[1];
        x2 = result[2];
        x3 = result[3];
        x4 = result[4];
        x5 = result[5];
        flag18 = 0;
    }
    out[0] = x0;
    out[1] = x1;
    out[2] = x2;
    out[3] = x3;
    out[4] = x4;
    out[5] = x5;
}
