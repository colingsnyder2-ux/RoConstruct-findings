// from server: 21% by colin
// roc 2008-06 004f7d90  unit: RBX::ViewNew::WedgeBuilder  size: 836 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f7d90

extern "C" void __stdcall sub_5EC1A0(void* dst, void* src);
extern "C" void* __stdcall sub_6A0956(int size);
extern "C" void __stdcall sub_6A094A(void* p);
extern "C" void __stdcall sub_548640(void* p);
extern "C" void* __stdcall sub_509BA0();
extern "C" void __stdcall sub_548000(void* a, void* b, void* c, int d);

struct WedgeBuilder {
    char pad0[4];
    int field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

void WedgeBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    char buf[0x6c];
    int* p = (int*)buf;
    sub_5EC1A0(buf + 0x74, &field4);
    short s1 = *(short*)(buf + 0xb8);
    int v1 = (int)s1;
    short s2 = *(short*)(buf + 0xba);
    int v2 = (int)s2;
    float f1 = *(float*)(buf + 0x98);
    float f2 = *(float*)(buf + 0x90);
    float f3 = *(float*)(buf + 0x9c);
    float f4 = *(float*)(buf + 0x94);
    float f5 = *(float*)(buf + 0xb0);
    float f6 = *(float*)(buf + 0xb4);
    float f7 = *(float*)(buf + 0xa8);
    float f8 = *(float*)(buf + 0x8c);
    float f9 = *(float*)(buf + 0xa0);
    float f10 = *(float*)(buf + 0x80);
    float f11 = *(float*)(buf + 0x84);
    float f12 = *(float*)(buf + 0xa4);
    int n1 = v1 + 1;
    int n2 = v2 + 1;
    int total = n1 * n2;
    float r1 = (f1 - f2) / (float)v1;
    float r2 = (f3 - f4) / (float)v2;
    float r3 = f5 / f6;
    float r4 = f7 / f6;
    int* arr = (int*)sub_6A0956(total * 4);
    float base1 = f4;
    float base2 = f7;
    int idx = 0;
    for (int y = 0; y <= v2; y++) {
        float fy = f1;
        float fz = 0.0f;
        for (int x = 0; x <= v1; x++) {
            float px = f8;
            float py = f9;
            float pz = fz;
            float pw = 1.0f;
            if (f10 < fy) {
                pz = f10 - fz;
            } else {
                pz = f10 + fz;
            }
            if (f11 < fy) {
                py = py - f11;
                px = px - f11;
            } else {
                py = py + f11;
            }
            float* sh = (float*)sub_509BA0();
            if (sh[0] == f12 && sh[1] == f7) {
                px = f3;
                py = f9;
            } else {
                px = f8;
                py = f9;
            }
            float g1 = *(float*)0x819bac;
            px *= g1;
            py *= g1;
            float tmp1[4];
            float tmp2[4];
            sub_5EC1A0(tmp1, &px);
            sub_5EC1A0(tmp2, &px);
            sub_548000(tmp2, tmp1, &px, 1);
            base1 += px;
            base2 += py;
            arr[idx] = (int)sub_509BA0();
            idx++;
            fy += r1;
        }
        base2 += r2;
    }
    for (int i2 = 0; i2 < total; i2++) {
        sub_548640((void*)arr[i2]);
    }
    sub_6A094A(arr);
}




