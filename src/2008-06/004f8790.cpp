// from server: 26% by colin
struct Vector3 { float x, y, z; };

struct WedgeBuilder {
    char pad0[4];
    int field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

extern "C" {
    void __stdcall sub_5EC1E0(void* dst, void* src);
    void* __stdcall sub_6A0956(unsigned int size);
    float* __stdcall sub_509BA0();
    void __stdcall sub_548000(void* a, void* b, void* c, int d);
    void __stdcall sub_500EB0(void* self, int a, int b, int c, int d);
    void __stdcall sub_548640(void* p);
    void __stdcall sub_6A094A(void* p);
}

extern float g_819bac;

void WedgeBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    Vector3 v1, v2;
    sub_5EC1E0(&v1, &field4);

    int w = (short)a;
    int hh = (short)b;
    int w1 = w + 1;
    int h1 = hh + 1;
    int count = w1 * h1;

    float fx = (float)w;
    float fy = (float)hh;

    float f1 = (float)d - (float)c;
    float f2 = (float)f - (float)e;
    float f3 = (float)h - (float)g;
    float f4 = (float)j - (float)i;

    float r1 = f1 / fx;
    float r2 = f2 / fy;
    float r3 = f3 / fx;
    float r4 = f4 / fy;

    float* arr = (float*)sub_6A0956(count * 4);

    float baseX = (float)c;
    float baseY = (float)e;
    float baseZ = (float)g;
    float baseW = (float)i;

    float stepX = r1;
    float stepY = r2;
    float stepZ = r3;
    float stepW = r4;

    int idx = 0;
    for (int row = 0; row <= hh; row++) {
        float curX = baseX;
        float curY = baseY;
        float curZ = baseZ;
        float curW = baseW;
        for (int col = 0; col <= w; col++) {
            float px = curX;
            float py = curY;
            float pz = curZ;
            float pw = curW;

            float* sh = sub_509BA0();
            float sx = sh[0];
            float sy = sh[1];

            if (sx == (float)k && sy == (float)l) {
                px = (float)g;
                py = (float)i;
            } else {
                px = curX;
                py = curY;
            }

            float t = g_819bac;
            float ax = px * t;
            float ay = py * t;

            Vector3 p1, p2;
            p1.x = ax;
            p1.y = ay;
            p1.z = pz;
            p2.x = ax;
            p2.y = ay;
            p2.z = pw;

            sub_5EC1E0(&p1, &v1);
            sub_5EC1E0(&p2, &v2);

            void* result = 0;
            sub_548000(&result, &p1, &p2, 1);

            baseX += stepX;
            baseY += stepY;

            int off = (row + 1) * w1 + col;
            arr[off] = *(float*)&result;

            curX += stepX;
            curY += stepY;
            curZ += stepZ;
            curW += stepW;
        }
        baseZ += stepZ;
        baseW += stepW;
    }

    for (int row = 0; row < hh; row++) {
        for (int col = 0; col < w; col++) {
            int i0 = row * w1 + col;
            int i1 = i0 + 1;
            int i2 = i0 + w1;
            int i3 = i2 + 1;
            sub_500EB0(this, (int)arr[i0], (int)arr[i1], (int)arr[i2], (int)arr[i3]);
        }
    }

    for (int n = 0; n < count; n++) {
        sub_548640((void*)(int)arr[n]);
    }
    sub_6A094A(arr);
}
