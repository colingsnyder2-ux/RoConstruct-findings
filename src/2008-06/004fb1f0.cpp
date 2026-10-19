// from server: 29% by colin
//

struct Vector3 { float x, y, z; };

struct TorsoBuilder {
    int f(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

extern "C" void __cdecl sub_5EC220(float* out, float* in);
extern "C" void* __cdecl sub_6A0956(int size);
extern "C" float* __cdecl sub_509BA0();
extern "C" void* __cdecl sub_548000(float* a, float* b, float* c, int d);
extern "C" void __cdecl sub_500EB0(void* self, void* a, void* b, void* c, void* d);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void __cdecl sub_6A094A(void* p);

extern float g_819bac;

int TorsoBuilder::f(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    float v[3];
    sub_5EC220(v, (float*)((char*)this + 4));

    float ax = v[0]; if (ax < 0) ax = -ax;
    float ay = v[1]; if (ay < 0) ay = -ay;
    float az = v[2]; if (az < 0) az = -az;

    int n1 = (short)i;
    int n2 = (short)j;
    int w1 = n1 + 1;
    int w2 = n2 + 1;
    int total = w1 * w2;

    float stepX = (float)((float)e - (float)a) / (float)w1;
    float stepY = (float)((float)f - (float)b) / (float)w2;
    float stepZ = (float)((float)g - (float)c) / (float)w1;

    void** arr = (void**)sub_6A0956(total * 4);

    float curX = (float)a;
    float curY = (float)b;
    float curZ = (float)c;

    int row = 0;
    while (row <= n1) {
        float rowX = (float)a;
        float rowZ = (float)c;
        int col = 0;
        while (col <= n2) {
            float px = rowX;
            float py = curY;
            float pz = rowZ;

            float out1[3];
            float out2[3];
            float out3[3];

            float tmp[3];
            tmp[0] = px;
            tmp[1] = py;
            tmp[2] = pz;
            sub_5EC220(out1, tmp);

            float tmp2[3];
            tmp2[0] = px;
            tmp2[1] = py;
            tmp2[2] = pz;
            sub_5EC220(out2, tmp2);

            float tmp3[3];
            tmp3[0] = px;
            tmp3[1] = py;
            tmp3[2] = pz;
            sub_5EC220(out3, tmp3);

            void* res = sub_548000(out1, out2, out3, 1);

            float* shader = sub_509BA0();
            if (shader[0] == g_819bac && shader[1] == g_819bac) {
                px = curX;
                pz = curZ;
            }

            float sx = px * g_819bac;
            float sz = pz * g_819bac;

            float p1[3];
            p1[0] = sx;
            p1[1] = py;
            p1[2] = sz;
            float p2[3];
            sub_5EC220(p2, p1);

            float p3[3];
            sub_5EC220(p3, p2);

            void* res2 = sub_548000(p3, p2, p1, 1);

            rowX += stepX;
            rowZ += stepZ;

            int idx = (n2 + 1) * row + col;
            arr[idx] = res2;

            col++;
        }
        curY += stepY;
        row++;
    }

    int r = 0;
    while (r < n1) {
        int cc = 0;
        while (cc < n2) {
            int base = (n2 + 1) * r + cc;
            int base2 = base + (n2 + 1);
            sub_500EB0(this, arr[base], arr[base + 1], arr[base2], arr[base2 + 1]);
            cc++;
        }
        r++;
    }

    int q = 0;
    while (q < total) {
        sub_548640(arr[q]);
        q++;
    }

    sub_6A094A(arr);
    return 0;
}
