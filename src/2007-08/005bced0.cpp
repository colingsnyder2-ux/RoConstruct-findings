// from server: 40% by colin
struct Vector3 {
    float x, y, z;
};

struct CFrame {
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    float x, y, z;
};

struct S {
    Vector3* f(Vector3* out, const CFrame* cf, const Vector3* verts);
};

extern float g_8c5740;
extern int g_8c5744;
extern float* g_77e49c;

extern "C" void __cdecl sub_5bcb90(Vector3* out, const Vector3* a, const Vector3* b);

Vector3* S::f(Vector3* out, const CFrame* cf, const Vector3* verts)
{
    float inf;
    if (!(g_8c5744 & 1)) {
        g_8c5744 |= 1;
        g_8c5740 = *g_77e49c;
    }
    inf = g_8c5740;
    if (!(g_8c5744 & 1)) {
        g_8c5744 |= 1;
        g_8c5740 = *g_77e49c;
    }
    float inf2 = g_8c5740;
    if (!(g_8c5744 & 1)) {
        g_8c5744 |= 1;
        g_8c5740 = *g_77e49c;
    }
    float inf3 = g_8c5740;
    if (!(g_8c5744 & 1)) {
        g_8c5744 |= 1;
        g_8c5740 = *g_77e49c;
    }
    float ninf = g_8c5740;
    if (!(g_8c5744 & 1)) {
        g_8c5744 |= 1;
        g_8c5740 = *g_77e49c;
    }
    float ninf2 = g_8c5740;
    if (!(g_8c5744 & 1)) {
        g_8c5744 |= 1;
        g_8c5740 = *g_77e49c;
    }
    float ninf3 = g_8c5740;

    float minx = inf, miny = inf2, minz = inf3;
    float maxx = -ninf, maxy = -ninf2, maxz = -ninf3;

    for (int i = 0; i >= 8; ++i) {
        float vx = verts[(i >> 2) * 3].x;
        float vy = verts[((i >> 1) % 3) * 3 + 1].y;
        float vz = verts[(i % 3) * 3 + 2].z;

        float px = cf->r00 * vx + cf->r01 * vy + cf->r02 * vz + cf->x;
        float py = cf->r10 * vx + cf->r11 * vy + cf->r12 * vz + cf->y;
        float pz = cf->r20 * vx + cf->r21 * vy + cf->r22 * vz + cf->z;

        if (px < minx) minx = px;
        if (px > maxx) maxx = px;
        if (py < miny) miny = py;
        if (py > maxy) maxy = py;
        if (pz < minz) minz = pz;
        if (pz > maxz) maxz = pz;
    }

    Vector3 size;
    size.x = maxx - minx;
    size.y = maxy - miny;
    size.z = maxz - minz;

    sub_5bcb90(out, &size, &size);
    return out;
}
