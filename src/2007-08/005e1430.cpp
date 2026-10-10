// from server: 47% by colin
struct S {
    void f(int a, int b, int c);
};

extern float g_zero;
extern float g_one;

void __stdcall sub_5e1390(int a, float* b, int c);
bool __stdcall sub_5e1250(int a, int b);

void S::f(int a, int b, int c)
{
    float v1;
    float v2;
    float v3;

    v1 = 0.0f;
    v2 = g_one;
    v3 = g_zero;

    sub_5e1390(a, &v1, b);

    while (sub_5e1250(a, c)) {
        v1 = 0.0f;
        v2 = g_one;
        v3 = g_zero;
        sub_5e1390(a, &v1, b);
    }
}
