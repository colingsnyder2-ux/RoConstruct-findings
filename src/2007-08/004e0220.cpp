// from server: 26% by colin
// roc 2007-08 004e0220  unit: RBX::Render::Mesh::Level  size: 816 bytes

extern "C" double __stdcall ceil(double);

struct Level {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void method(float a, float b, float c, int d, int e);
};

extern "C" void __cdecl sub_5b9990(void* out, void* in);
extern "C" void* __cdecl sub_50b010(void* out, void* in);
extern "C" float __cdecl sub_4de980(int n);
extern "C" void __cdecl sub_4deae0(void* self, void* v);
extern "C" void __cdecl sub_4e0180(void* self, void* a, void* b, void* c, void* d, int e, int f);

extern float g_787050;
extern float g_797e9c;
extern double g_795b48;
extern double g_79f340;
extern double g_79f348;

void Level::method(float a, float b, float c, int d, int e)
{
    float fabs_c = (c < 0.0f) ? -c : c;
    float fabs_a = (a < 0.0f) ? -a : a;
    float fabs_b = (b < 0.0f) ? -b : b;

    int ebx = (this->field10 >> 3) & 7;

    float v18 = fabs_c;
    float v1c = fabs_a;
    float v44 = fabs_b;

    int esi;
    if (e == 0 && v44 == v18) {
        esi = 1;
    } else {
        esi = 0;
    }

    int ebp;
    if (e == 0 && ebx != 0) {
        float tmp = (esi == 0) ? v44 : v18;
        float scaled = (float)((double)tmp * g_795b48);
        double r = ceil((double)scaled);
        ebp = (int)r;
    } else {
        ebp = 1;
    }

    short arr[2];
    arr[0] = 0;
    arr[1] = 0;

    int idx = esi + esi;
    short* p = (short*)((char*)arr + 2 - idx);
    short val = *p;
    int sval = (int)val;
    int q = sval / ebp;
    int one = 1;
    unsigned short uq = (unsigned short)q;
    int cmpval = (int)uq;
    int* psel;
    if (cmpval > 1) {
        psel = &cmpval;
    } else {
        psel = &one;
    }
    short sel = *(short*)psel;
    *(short*)((char*)arr + idx) = sel;
    *(short*)((char*)arr + 2 - idx) = val;

    float v18b = v1c;

    float tmp1[3];
    sub_50b010(tmp1, &v44);
    float negx = -tmp1[0];
    float negy = -tmp1[1];
    float v60 = negx;
    float v20 = negy;
    float v3c = v60;
    float v40 = v20;

    float tmp2[3];
    sub_50b010(tmp2, &v3c);

    float v28 = 0.0f;
    float v2c = 0.0f;
    float v1c2 = 0.0f;
    float v20b = 0.0f;

    int sel2 = d;
    if (sel2 == 0) {
        if (ebx == 0) {
            v28 = g_787050;
            v2c = g_797e9c;
            float* pd = (float*)((char*)&v20b - esi * 4);
            v1c2 = *pd;
        } else {
            float* pe = (float*)((char*)&v2c - esi * 4);
            *pe = 0.0f;
            float r = sub_4de980(ebx);
            *(float*)((char*)&v2c + esi * 4) = r;
            float* pc = (float*)((char*)&v44 - esi * 4);
            float f = *pc;
            float f2 = f + f;
            float* pd = (float*)((char*)&v20b - esi * 4);
            *pd = f2;
            *(float*)((char*)&v1c2 + esi * 4) = g_797e9c;
            if (esi == 1) {
                v1c2 = -v1c2;
            }
        }
    } else if (sel2 == 1) {
        v28 = 0.0f;
        v2c = *(float*)((char*)this + 0x1c);
        v1c2 = *(float*)((char*)this + 0x18);
        v20b = -*(float*)((char*)this + 0x1c);
    } else if (sel2 == 2) {
        v28 = 0.0f;
        v2c = 0.0f;
        v1c2 = 0.0f;
        v20b = 0.0f;
    }

    short bx = *(short*)((char*)arr + 0x4c);

    for (int i = 0; i < ebp; i++) {
        if (i == ebp - 1) {
            float f = *(float*)((char*)&v44 + esi * 4);
            float v60b = f;
            *(float*)((char*)&v28 + esi * 4) = v60b;
            if (d == 0 && *(int*)((char*)&v20b) != 0) {
                float diff = v60b - *(float*)((char*)&v28 + esi * 4);
                float m = (float)((double)diff * g_79f348);
                *(float*)((char*)&v1c2 + esi * 4) = m * *(float*)((char*)&v1c2 + esi * 4);
            }
        } else {
            *(float*)((char*)&v28 + esi * 4) = *(float*)((char*)&v28 + esi * 4) + (float)g_79f340;
        }

        float f1 = v1c2;
        float f2 = *(float*)((char*)&v20b + esi * 4);
        float f3 = *(float*)((char*)&v28 + esi * 4);
        float f4 = *(float*)((char*)&v2c + esi * 4);

        sub_4e0180(this, &f1, &f2, &f3, &f4, esi, *(int*)((char*)&arr[0]));

        float f5 = *(float*)((char*)&v28 + esi * 4);
        float f6 = *(float*)((char*)&v2c + esi * 4);
        sub_4deae0(this, &f5);

        *(float*)((char*)&v28 + esi * 4) = *(float*)((char*)&v28 + esi * 4);
    }
}
