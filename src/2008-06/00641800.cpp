// from server: 25% by coldek
typedef unsigned char byte;
typedef unsigned long DWORD;

extern "C" double __cdecl sqrt(double);
extern "C" void __cdecl fn501ca0(void *, void *);
extern "C" void __cdecl fn5183c0(void *, float);
extern "C" void __cdecl fn5cbe70(void *, void *);
extern "C" void __cdecl fn5dec60(void *, void *, void *);
extern "C" void __cdecl fn5185f0(void *, void *);
extern "C" void __cdecl fn513220(void *, void *);
extern "C" void __cdecl fn513240(void *, void *, int);
extern "C" void __cdecl fn666250(void *, float);
extern "C" double __cdecl fn666270(void *);
extern "C" void __cdecl fn666290(void *, void *, void *);
extern "C" void __cdecl fn6662d0(void *, void *);
extern "C" byte __cdecl fn641530(void *, void *, void *, void *);
extern "C" void *__cdecl fn641280(void *, void *, void *, void *, float);

struct Humanoid {
    DWORD *vtable;
    DWORD *vtable2;
    byte pad08[0x35];
    byte flag3d;
    byte pad3e[2];
    float value40;
    byte pad44[4];
    float result48[3];

    void update(void *, void *, void *);
};

void Humanoid::update(void *arg1, void *arg2, void *arg3)
{
    float *out = (float *)arg2;
    float *position = (float *)((char *)out + 0x24);
    float *origin = (float *)((char *)arg1 + 0x24);
    float delta[3];
    float distance;
    float oldPosition[3];
    float local[9];
    float saved[9];
    float a[3];
    float b[3];
    float c[3];
    float d[3];
    float e[3];
    float f[3];
    float g[3];
    float h[3];
    float scratch[9];
    float extra[12];
    byte success;
    int i;
    DWORD *v;
    DWORD *m;
    void *camera;
    void *result;
    float angle;

    delta[0] = position[0] - origin[0];
    delta[1] = position[1] - origin[1];
    delta[2] = position[2] - origin[2];
    distance = (float)sqrt((double)(delta[0] * delta[0] +
                                    delta[1] * delta[1] +
                                    delta[2] * delta[2]));

    oldPosition[0] = position[0];
    oldPosition[1] = position[1];
    oldPosition[2] = position[2];

    v = (DWORD *)*(DWORD **)((char *)this + 4);
    m = (DWORD *)*(DWORD **)((char *)v + 4);
    camera = (void *)((char *)m + 4);

    if (distance >= 0.0001f) {
        fn666290(camera, out, extra);
        position[0] = ((float *)extra)[9];
        position[1] = ((float *)extra)[10];
        position[2] = ((float *)extra)[11];
        delta[0] += position[0] - oldPosition[0];
        delta[1] += position[1] - oldPosition[1];
        delta[2] += position[2] - oldPosition[2];
    } else {
        fn666290(camera, out, extra);
        position[0] = ((float *)extra)[9];
        position[1] = ((float *)extra)[10];
        position[2] = ((float *)extra)[11];
    }

    result = ((void *(__thiscall *)(void *, void *))(*(DWORD *)this + 0x24))(this, a);
    fn5183c0(b, 1.0f);
    fn6662d0((char *)this + 8, b);
    fn666290((char *)this + 8, c, d);
    fn666290((char *)this + 8, e, f);
    fn666270(this);
    fn666250(this, 0.0f);
    fn5dec60(this, g, h);
    fn5185f0(g, a);
    fn5185f0((char *)this + 8, b);
    fn5185f0((char *)this + 0x18, c);
    fn5cbe70(d, e);
    fn501ca0(d, extra);

    result48[0] = d[0];
    result48[1] = d[1];
    result48[2] = d[2];
    flag3d = 1;

    if (flag3d)
        fn641280(this, local, arg1, arg2, value40);

    fn513240(extra, local, 2);
    fn513220(extra, arg1);
    success = fn641530(this, saved, local, arg3);

    if (success) {
        if (!flag3d)
            value40 = (float)sqrt((double)(delta[0] * delta[0] +
                                            delta[1] * delta[1] +
                                            delta[2] * delta[2]));
        result = fn641280(this, local, arg1, arg2, distance);
        for (i = 0; i != 9; ++i)
            out[i] = ((float *)result)[i];
        position[0] = ((float *)result)[9];
        position[1] = ((float *)result)[10];
        position[2] = ((float *)result)[11];
    } else if (flag3d) {
        for (i = 0; i != 9; ++i)
            out[i] = saved[i];
        position[0] = oldPosition[0];
        position[1] = oldPosition[1];
        position[2] = oldPosition[2];
    }

    angle = distance;
    flag3d = success;
    ((void (__thiscall *)(Humanoid *, float))vtable[8])(this, angle);
}
