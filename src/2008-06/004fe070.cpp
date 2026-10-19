// from server: 28% by colin
//

struct Vec3 { float x, y, z; };

extern "C" {
    void __cdecl sub_5EC1C0(Vec3* out, const Vec3* in);
    void* __cdecl sub_6A0956(unsigned int size);
    void __cdecl sub_6A094A(void* p);
    void __cdecl sub_548640(void* p);
    int __cdecl sub_548000(Vec3* a, Vec3* b, Vec3* c, int d);
    void __cdecl sub_4FDCC0(void* self, Vec3* a, Vec3* b, Vec3* c, Vec3* d, Vec3* e);
    Vec3* __cdecl sub_509BA0();
    void __cdecl sub_500EB0(void* self, int a, int b, int c, int d);
}

struct CylinderBuilder {
    char pad0[4];
    Vec3 field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

void CylinderBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    Vec3 v;
    sub_5EC1C0(&v, &field4);

    float ax = v.x < 0 ? -v.x : v.x;
    float ay = v.y < 0 ? -v.y : v.y;
    float az = v.z < 0 ? -v.z : v.z;

    short sa = (short)a;
    short sb = (short)b;
    short sc = (short)c;
    short sd = (short)d;

    int na = sa + 1;
    int nb = sb + 1;
    int nc = sc + 1;
    int nd = sd + 1;

    float fx = (float)na;
    float fy = (float)nb;
    float fz = (float)nc;
    float fw = (float)nd;

    float r1 = ((float)e - (float)f) / fx;
    float r2 = ((float)g - (float)h) / fy;
    float r3 = (float)i / fz;
    float r4 = (float)j / fw;

    int total = nd * na;
    int* arr = (int*)sub_6A0956(total * 4);

    float baseX = (float)f;
    float baseY = (float)h;
    float curX = baseX;
    float curY = baseY;

    for (int row = 0; row <= sa; row++) {
        float rowX = (float)e;
        float rowY = (float)i;
        float rowZ = (float)j;
        for (int col = 0; col <= sb; col++) {
            Vec3 p1, p2, p3, p4;
            p1.x = curX; p1.y = curY; p1.z = (float)g;
            p2.x = curX; p2.y = curY; p2.z = (float)k;
            p3.x = rowX; p3.y = rowY; p3.z = rowZ;
            p4.x = rowX; p4.y = rowY; p4.z = rowZ;

            sub_4FDCC0(&field4, &p1, &p2, &p3, &p4, &p4);

            Vec3* sh = sub_509BA0();
            float sx, sy;
            if (sh->x == (float)i && sh->y == (float)j) {
                sx = (float)h;
                sy = (float)i;
            } else {
                sx = p3.x;
                sy = p3.y;
            }

            float gv = *(float*)0x819bac;
            Vec3 q1, q2;
            q1.x = sx * gv;
            q1.y = sy * gv;
            q1.z = 0;
            sub_5EC1C0(&q1, &q1);
            sub_5EC1C0(&q2, &q1);

            int idx = sub_548000(&p1, &p2, &q1, 1);

            curX += q1.x;
            curY += q1.y;

            int stride = nd;
            arr[row * stride + col] = idx;
        }
        curX += r1;
        curY += r2;
    }

    for (int row = 0; row < sa; row++) {
        for (int col = 0; col < sb; col++) {
            int i0 = row * nd + col;
            int i1 = i0 + 1;
            int i2 = i0 + nd;
            int i3 = i2 + 1;
            sub_500EB0(&field4, arr[i0], arr[i1], arr[i2], arr[i3]);
        }
    }

    for (int m = 0; m < total; m++) {
        sub_548640((void*)arr[m]);
    }

    sub_6A094A(arr);
}
