// from server: 39% by colin
extern float g_797e9c;
extern float g_7c2c7c[8];
extern float g_7c2c94;
extern float g_7c2d08;
extern float g_7c2d0c;

float func_00608a00(float a, float b)
{
    int v0 = (int)a;
    int v1 = 1;
    int v2 = v0;
    int* p0 = &v2;
    if (v0 <= v1)
        p0 = &v1;
    int v3 = *p0;
    v2 = v3;

    int v4 = (int)b;
    int v5 = v4;
    int* p1 = &v5;
    if (v4 <= v1)
        p1 = &v1;
    int v6 = *p1;
    v5 = v6;

    int v7;
    int* p2;
    if (v3 < v6) {
        v7 = v6;
        p2 = &v5;
    } else {
        v7 = v3;
        p2 = &v2;
    }
    int v8 = *p2;

    int v9;
    int* p3;
    if (v6 < v3) {
        v9 = v3;
        p3 = &v2;
    } else {
        v9 = v6;
        p3 = &v5;
    }
    int v10 = *p3;
    v2 = v10;

    if (v8 < 7) {
        return g_7c2c7c[v8] * g_797e9c * (float)v10 * g_7c2d0c;
    } else {
        return (float)v7 * g_7c2d08 * g_7c2c94 * g_797e9c * (float)v10 * g_7c2d0c;
    }
}
