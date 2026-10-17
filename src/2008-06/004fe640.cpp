// from server: 29% by colin
struct CylinderBuilder {
    char pad0[4];
    int field4;
    void build(float, float, float, float, float, float, float, float, short, short, int, int, int, int);
};

extern "C" void __cdecl sub_5EC1A0(float*, float*);
extern "C" void* __cdecl sub_6A0956(int);
extern "C" void __cdecl sub_4FDBD0(int*, float*, float*, float*, float*, float*, float*);
extern "C" float* __cdecl sub_509BA0();
extern "C" void* __cdecl sub_548000(float*, float*, float*, int);
extern "C" void __cdecl sub_500EB0(int, void*, void*, void*, void*);
extern "C" void __cdecl sub_548640(void*);
extern "C" void __cdecl sub_6A094A(void*);

extern float g_819bac;

void CylinderBuilder::build(float a10, float a14, float a18, float a1c, float a20, float a24, float a28, float a2c, short a38, short a3a, int a34, int a30, int a2c2, int a28b)
{
    float v[3];
    sub_5EC1A0(v, (float*)&this->field4);

    float f74 = v[0] < 0 ? -v[0] : v[0];
    float f78 = v[1] < 0 ? -v[1] : v[1];
    float f7c = v[2] < 0 ? -v[2] : v[2];

    int n38 = a38;
    int n3a = a3a;

    float f44 = (a18 - a10) / (float)(n38 + 1);
    float f4c = (a1c - a14) / (float)(n3a + 1);
    float f50 = a2c / f74;
    float f54 = a30 / f78;

    int total = (n3a + 1) * (n38 + 1);
    void** arr = (void**)sub_6A0956(total * 4);

    float curX = a10;
    float curY = a14;
    float curZ = a24;
    float curW = a28;

    int i = 0;
    while (i <= n38) {
        float rowX = a14;
        float rowZ = a28;
        int j = 0;
        while (j <= n3a) {
            float px = curX;
            float py = rowX;
            float pz = curZ;
            float pw = rowZ;

            float tmp[3];
            tmp[0] = px;
            tmp[1] = py;
            tmp[2] = pz;

            float q[3];
            q[0] = px;
            q[1] = py;
            q[2] = pz;

            float r[3];
            r[0] = a20;
            r[1] = a20;
            r[2] = a20;

            float s[3];
            s[0] = px;
            s[1] = py;
            s[2] = pz;

            float t[3];
            t[0] = 1.0f;
            t[1] = 1.0f;
            t[2] = 1.0f;

            sub_4FDBD0((int*)&this->field4, tmp, q, r, s, t, 0);

            float* sh = sub_509BA0();
            float u, vv;
            if (sh[0] == a2c && sh[1] == a30) {
                u = a24;
                vv = a28;
            } else {
                u = tmp[0];
                vv = tmp[1];
            }

            float uv[2];
            uv[0] = u * g_819bac;
            uv[1] = vv * g_819bac;

            float uv2[2];
            sub_5EC1A0(uv2, uv);

            float uv3[2];
            sub_5EC1A0(uv3, uv2);

            void* res = (void*)sub_548000(uv3, uv2, uv, 1);

            curX += tmp[0];
            curZ += tmp[1];

            arr[i * (n3a + 1) + j] = res;

            j++;
            rowX += f4c;
            rowZ += f50;
        }
        i++;
        curX += f44;
        curY += f4c;
    }

    int k = 0;
    while (k < n38) {
        int m = 0;
        while (m < n3a) {
            int idx = k * (n3a + 1) + m;
            sub_500EB0((int)this, arr[idx], arr[idx + 1], arr[idx + n3a + 1], arr[idx + n3a + 2]);
            m++;
        }
        k++;
    }

    unsigned int c = 0;
    while (c < (unsigned int)total) {
        sub_548640(arr[c]);
        c++;
    }

    sub_6A094A(arr);
}
