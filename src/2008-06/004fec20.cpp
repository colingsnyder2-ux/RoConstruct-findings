// from server: 24% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vec3 { float x, y, z; };

struct CylinderBuilder {
    char pad0[4];
    void buildTop(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

extern "C" void __cdecl sub_6784D0(Vec3* dst, const Vec3* src);
extern "C" void* __cdecl sub_6A0956(int size);
extern "C" void __cdecl sub_6A094A(void* p);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void __cdecl sub_548000(Vec3* a, Vec3* b, Vec3* c, int d, Vec3* e);
extern "C" void __cdecl sub_4FDBD0(void* a, Vec3* b, Vec3* c, Vec3* d, Vec3* e, float f);
extern "C" void __cdecl sub_500EB0(void* a, int b, int c, int d, int e);
extern "C" float* __cdecl sub_509BA0();

extern float g_819BAC;

void CylinderBuilder::buildTop(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m)
{
    Vec3 v1, v2, v3;
    sub_6784D0(&v1, (const Vec3*)((char*)this + 4));

    float f1 = v1.x; if (f1 < 0) f1 = -f1;
    float f2 = v1.y; if (f2 < 0) f2 = -f2;
    float f3 = v1.z; if (f3 < 0) f3 = -f3;

    int n1 = *(short*)&i + 1;
    int n2 = *(short*)&j + 1;
    int total = n1 * n2;

    float d1 = (*(float*)&d - *(float*)&c) / (float)n1;
    float d2 = (*(float*)&f - *(float*)&e) / (float)n2;
    float d3 = *(float*)&h / *(float*)&g;
    float d4 = *(float*)&l / *(float*)&k;

    void** arr = (void**)sub_6A0956(total * 4);

    float baseX = *(float*)&c;
    float baseY = *(float*)&e;
    float stepX = 0.0f;
    float stepY = 0.0f;

    int row = 0;
    while (row <= *(short*)&i) {
        float curX = baseX;
        float curY = baseY;
        int col = 0;
        while (col <= *(short*)&j) {
            Vec3 p1, p2, p3;
            p1.x = curX; p1.y = curY; p1.z = *(float*)&g;
            p2.x = curX; p2.y = curY; p2.z = *(float*)&g;
            p3.x = curX; p3.y = curY; p3.z = 1.0f;

            sub_4FDBD0((char*)this + 8, &p1, &p2, &p3, &p3, 1.0f);

            float* sh = sub_509BA0();
            float sx, sy;
            if (sh[0] == *(float*)&h && sh[1] == *(float*)&l) {
                sx = *(float*)&e;
                sy = *(float*)&f;
            } else {
                sx = p1.x;
                sy = p1.y;
            }
            sx *= g_819BAC;
            sy *= g_819BAC;

            Vec3 t1, t2;
            sub_6784D0(&t1, &p1);
            sub_6784D0(&t2, &p2);
            Vec3 out;
            sub_548000(&out, &t1, &t2, 1, &p3);

            curX += out.x;
            curY += out.y;

            int idx = (*(short*)&j + 1) * row + col;
            arr[idx] = (void*)(int)out.z;

            col++;
        }
        baseX += stepX;
        baseY += stepY;
        row++;
    }

    int r = 0;
    while (r < *(short*)&i) {
        int c2 = 0;
        while (c2 < *(short*)&j) {
            int i0 = (*(short*)&j + 1) * r + c2;
            int i1 = i0 + 1;
            int i2 = i0 + (*(short*)&j + 1);
            int i3 = i2 + 1;
            sub_500EB0((char*)this + 8, (int)arr[i0], (int)arr[i1], (int)arr[i2], (int)arr[i3]);
            c2++;
        }
        r++;
    }

    unsigned int n = (unsigned int)total;
    for (unsigned int q = 0; q < n; q++) {
        sub_548640(arr[q]);
    }
    sub_6A094A(arr);
}
