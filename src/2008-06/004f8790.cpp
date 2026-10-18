// from server: 29% by colin
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
    Vector3 v1;
    sub_5EC1E0(&v1, &field4);

    int w = (short)a;
    int hh = (short)b;
    int w1 = w + 1;
    int count = w1 * (hh + 1);

    float fx = (float)w;
    float fy = (float)hh;

    float r1 = ((float)d - (float)c) / fx;
    float r2 = ((float)f - (float)e) / fy;
    float r3 = ((float)h - (float)g) / fx;
    float r4 = ((float)j - (float)i) / fy;

    float* arr = (float*)sub_6A0956(count * 4);

    float baseX = (float)c;
    float baseY = (float)e;
    float baseZ = (float)g;
    float baseW = (float)i;

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
            if (sh[0] == (float)k && sh[1] == (float)l) {
                px = (float)g;
                py = (float)i;
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
            sub_5EC1E0(&p2, &v1);

            void* result = 0;
            sub_548000(&result, &p1, &p2, 1);

            baseX += r1;
            baseY += r2;

            int off = (row + 1) * w1 + col;
            arr[off] = *(float*)&result;

            curX += r1;
            curY += r2;
            curZ += r3;
            curW += r4;
        }
        baseZ += r3;
        baseW += r4;
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
