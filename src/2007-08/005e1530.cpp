// from server: 98% by colin
struct S {
    void __cdecl f(int a, int b, int c);
};

extern "C" void __cdecl sub_5e1390(int, float*, int);
extern "C" char __cdecl sub_5e1250(int, int);
extern "C" void __cdecl sub_5e14b0(int, int, int);

extern float g_79f5d8;

void S::f(int a, int b, int c)
{
    float v[3];
    v[0] = 0.0f;
    v[1] = g_79f5d8;
    v[2] = 0.0f;

    sub_5e1390(a, v, c);
    if (sub_5e1250(a, b)) {
        do {
            v[0] = 0.0f;
            v[1] = g_79f5d8;
            v[2] = 0.0f;
            sub_5e1390(a, v, c);
        } while (sub_5e1250(a, b));
    }
    sub_5e14b0(a, c, b);
}
