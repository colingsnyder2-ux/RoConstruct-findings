// from server: 30% by colin
// roc 2007-08 004eb8a0  unit: CylinderBuilder  size: 821 bytes
// library rbxgs-view/CylinderMesh.cpp

struct Vec3 { float x, y, z; };

struct CylinderBuilder {
    char pad0[4];
    Vec3 m_v1;
    Vec3 m_v2;
    char pad1[0x30 - 0x1c];
    void buildSide(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

extern "C" void __cdecl sub_5b9990(Vec3* out, const Vec3* in);
extern "C" void* __cdecl sub_62ff32(unsigned int n);
extern "C" void __cdecl sub_62ff26(void* p);
extern "C" void __cdecl sub_4f54e0(void* p);
extern "C" void* __cdecl sub_4f5360(const Vec3* a, const Vec3* b, const Vec3* c, int d);
extern "C" void __cdecl sub_4eee30(void* self, int a, int b, int c, int d);
extern "C" void* __cdecl sub_501570();
extern "C" void __cdecl sub_4eb780(void* self, const Vec3* a, const Vec3* b, const Vec3* c, const Vec3* d, float e);

extern double g_795b48;

void CylinderBuilder::buildSide(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    Vec3 v1, v2, v3;
    sub_5b9990(&v1, &m_v1);
    float f0 = v1.x; if (f0 < 0) f0 = -f0;
    float f1 = v1.y; if (f1 < 0) f1 = -f1;
    float f2 = v1.z; if (f2 < 0) f2 = -f2;

    int n1 = a;
    int n2 = b;
    int total = (n1 + 1) * (n2 + 1);

    float dy = (float)(n1);
    float spanY = (float)(c) - (float)(d);
    float stepY = spanY / dy;

    float dx = (float)(n2);
    float spanX = (float)(e) - (float)(f);
    float stepX = spanX / dx;

    float r1 = (float)(g) / dy;
    float r2 = (float)(h) / dx;

    void* mem = sub_62ff32((unsigned int)total * 4);
    void** arr = (void**)mem;

    float baseZ = (float)(d);
    float baseW = (float)(i);

    if (n1 >= 0) {
        float accZ = 0.0f;
        int rowCount = n1 + 1;
        void** rowPtr = arr;
        float curW = (float)(f);
        float curR = (float)(j);
        if (n2 >= 0) {
            int colCount = n2 + 1;
            do {
                float z0 = baseZ + accZ;
                float w0 = curW;
                float r0 = curR;
                Vec3 p0, p1, p2, p3;
                p0.x = w0; p0.y = z0; p0.z = (float)(k);
                p1.x = w0; p1.y = z0; p1.z = (float)(k);
                p2.x = w0; p2.y = z0; p2.z = (float)(k);
                p3.x = w0; p3.y = z0; p3.z = (float)(k);
                sub_4eb780(this, &p0, &p1, &p2, &p3, 1.0f);
                void* q = sub_501570();
                float* qf = (float*)q;
                if (qf[0] == (float)(g) && qf[1] == (float)(h)) {
                    p0.x = (float)(i);
                    p0.y = (float)(j);
                }
                Vec3 t1, t2;
                t1.x = p0.x * (float)g_795b48;
                t1.y = p0.y * (float)g_795b48;
                t1.z = p0.z;
                sub_5b9990(&t1, &t1);
                sub_5b9990(&t2, &t1);
                void* tri = sub_4f5360(&t1, &t2, &t1, 1);
                *rowPtr = tri;
                rowPtr++;
                accZ += stepY;
                curW += stepX;
                curR += r1;
                colCount--;
            } while (colCount != 0);
        }
        rowPtr += n2 + 1;
        curW += r2;
        rowCount--;
        if (rowCount != 0) {
            // loop continues
        }
    }

    if (n1 > 0) {
        void** p = arr;
        int rows = n1;
        do {
            if (n2 > 0) {
                int cols = n2;
                void** q = p;
                void** r = p + 1;
                do {
                    void* a0 = r[0];
                    void* a1 = r[-1];
                    void* b0 = q[0];
                    void* b1 = q[1];
                    sub_4eee30(this, (int)b0, (int)b1, (int)a1, (int)a0);
                    r++;
                    q++;
                    cols--;
                } while (cols != 0);
            }
            p += n2 + 1;
            rows--;
        } while (rows != 0);
    }

    unsigned int cnt = (unsigned int)n1;
    unsigned int idx = 0;
    if (cnt > 0) {
        do {
            sub_4f54e0(arr[idx]);
            idx++;
        } while (idx < cnt);
    }
    sub_62ff26(arr);
}
