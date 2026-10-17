// from server: 23% by colin
struct Vector3 {
    float x, y, z;
};

struct WedgeBuilder {
    int field0;
    int field1;
    int field2;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

struct PBBBuilder {
    void method(void* a, void* b, void* c, void* d);
};

extern "C" void __cdecl sub_6784D0(Vector3* out, const Vector3* in);
extern "C" void* __cdecl sub_6A0956(unsigned int size);
extern "C" void __cdecl sub_6A094A(void* ptr);
extern "C" float* __cdecl sub_509BA0();
extern "C" void* __cdecl sub_548000(Vector3* a, Vector3* b, Vector3* c, int d);
extern "C" void __cdecl sub_548640(void* ptr);

extern float g_float_819BAC;

void WedgeBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    Vector3 v1;
    sub_6784D0(&v1, (const Vector3*)&field0);

    int w = (short)i;
    int hh = (short)j;
    int count = (w + 1) * (hh + 1);

    float fx = (float)w;
    float fy = (float)hh;

    float dx = ((float)e - (float)c) / fx;
    float dy = ((float)f - (float)d) / fy;
    float dz = ((float)g - (float)a) / fx;
    float dw = ((float)h - (float)b) / fy;

    void** arr = (void**)sub_6A0956(count * 4);

    float baseX = (float)c;
    float baseY = (float)d;
    float baseZ = (float)a;
    float baseW = (float)b;

    float curZ = baseZ;
    float curW = baseW;

    for (int row = 0; row <= hh; row++) {
        float curX = baseX;
        float curY = baseY;
        for (int col = 0; col <= w; col++) {
            Vector3 p;
            p.x = curX;
            p.y = curY;
            p.z = curZ;

            float* sh = sub_509BA0();
            float u, vv;
            if (sh[0] == (float)e && sh[1] == (float)f) {
                u = (float)g;
                vv = (float)h;
            } else {
                u = curX;
                vv = curY;
            }

            Vector3 t1, t2;
            t1.x = u * g_float_819BAC;
            t1.y = vv * g_float_819BAC;
            t1.z = 0.0f;
            t2.x = 0.0f;
            t2.y = 0.0f;
            t2.z = 1.0f;

            Vector3 n1, n2;
            sub_6784D0(&n1, &t1);
            sub_6784D0(&n2, &t2);

            void* vert = sub_548000(&p, &n1, &n2, 1);
            arr[row * (w + 1) + col] = vert;

            curX += dx;
            curY += dy;
        }
        curZ += dz;
        curW += dw;
    }

    for (int row = 0; row < hh; row++) {
        for (int col = 0; col < w; col++) {
            int idx = row * (w + 1) + col;
            ((PBBBuilder*)this)->method(arr[idx], arr[idx + 1], arr[idx + w + 1], arr[idx + w + 2]);
        }
    }

    for (int n = 0; n < count; n++) {
        sub_548640(arr[n]);
    }

    sub_6A094A(arr);
}
