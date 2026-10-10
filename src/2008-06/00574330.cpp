// from server: 56% by tester
struct S_func_00574330 {
    char pad0[0x108];
    void* m_ptr108;
    int f(float* p);
};

extern "C" float __stdcall sub_6a17f0(float);

float g_826e6c;
float g_974d7c;

int S_func_00574330::f(float* p)
{
    float v;
    int a, b, c, d, e;
    int* q;

    (*(void (__thiscall**)(S_func_00574330*, float*))(*(int*)this + 0x48))(this, p);
    (*(void (__thiscall**)(S_func_00574330*, float*))(*(int*)this + 0x5c))(this, &v);

    *p = v + g_826e6c + *p;

    a = (int)sub_6a17f0(p[1]);
    b = (int)sub_6a17f0(g_974d7c);
    b += 4;
    c = (int)sub_6a17f0(p[1]);
    c -= 0x78;
    c = c / b;
    d = (int)sub_6a17f0(p[1]);
    d -= 0x14;
    d = d / b;

    if (m_ptr108) {
        e = (*(int*)((char*)m_ptr108 + 0x10) - *(int*)((char*)m_ptr108 + 0xc)) >> 3;
    } else {
        e = 0;
    }
    e = e / 2;

    c -= e;

    if (e < d) {
        q = &e;
    } else {
        q = &d;
    }
    d = *q;

    if (d < c) {
        q = &d;
    } else {
        q = &c;
    }
    c = *q;

    c -= e;
    c *= b;
    c += 0x14;

    p[1] = (float)c;
    return (int)p;
}
