// from server: 28% by colin




extern "C" void __cdecl sub_5EC220(float* dst, float* src);
extern "C" float* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(float* a, float* b, float* c, int d);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void* __cdecl sub_6A0956(int size);
extern "C" void __cdecl sub_6A094A(void* p);

extern float g_819bac;

struct PBBBuilder {
    char pad0[4];
    float f4;
    void build(float* a, float* b, float* c, float* d, float* e, float* f,
               short g, short h, short i, short j, float* k, float* l,
               int m, int n, int o, int p);
    void sub_500EB0(float a, float b, float c, float d);
};

void PBBBuilder::build(float* a, float* b, float* c, float* d, float* e, float* f,
                       short g, short h, short i, short j, float* k, float* l,
                       int m, int n, int o, int p)
{
    float local[16];
    float tmp1, tmp2;
    float f1, f2, f3, f4;
    float stepX, stepY;
    float startX, startY;
    float curX, curY;
    float accX, accY;
    int countX, countY;
    int total;
    float* arr;
    int ii, jj;

    sub_5EC220(local, &this->f4);

    tmp1 = local[0];
    if (tmp1 < 0) tmp1 = -tmp1;
    tmp2 = local[1];
    if (tmp2 < 0) tmp2 = -tmp2;

    countX = (int)g + 1;
    countY = (int)h + 1;
    total = countX * countY;

    stepX = (a[1] - a[0]) / (float)countX;
    stepY = (b[1] - b[0]) / (float)countY;

    f1 = (c[1] - c[0]) / (float)countX;
    f2 = (d[1] - d[0]) / (float)countY;
    f3 = e[0] / (float)countX;
    f4 = f[0] / (float)countY;

    arr = (float*)sub_6A0956(total * 4);

    startX = a[0];
    startY = b[0];
    curX = c[0];
    curY = d[0];

    accX = 0.0f;
    accY = 0.0f;

    for (ii = 0; ii <= (int)j; ii++) {
        float bx = startX;
        float by = startY;
        float cx = curX;
        float cy = curY;
        float ax = accX;
        float ay = accY;

        for (jj = 0; jj <= (int)i; jj++) {
            float px = bx;
            float py = by;

            float* r = sub_509BA0();
            if (r[0] == k[0] && r[1] == l[0]) {
                px = e[0];
                py = f[0];
            }

            float mx = px * g_819bac;
            float my = py * g_819bac;

            float out1[4];
            float out2[4];
            sub_5EC220(out1, &mx);
            sub_5EC220(out2, &my);

            float out3[4];
            sub_548000(out3, out1, out2, 1);

            ax += out3[0];
            ay += out3[1];

            int idx = (int)j + 1;
            idx = idx * ii + jj;
            arr[idx] = out3[0];

            bx += stepX;
            by += stepY;
            cx += f1;
            cy += f2;
        }

        accX += f3;
        accY += f4;
    }

    for (ii = 0; ii < (int)j; ii++) {
        for (jj = 0; jj < (int)i; jj++) {
            int base = (ii + 1) * jj;
            int base2 = base + ii;
            sub_500EB0(arr[base], arr[base + 1], arr[base2], arr[base2 + 1]);
        }
    }

    for (ii = 0; ii < total; ii++) {
        sub_548640((void*)(int)arr[ii]);
    }

    sub_6A094A(arr);
}
