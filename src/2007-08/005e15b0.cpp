// from server: 50% by colin
struct S {
    void f(int a, int b, int c);
};

extern float g_float;

extern "C" void __cdecl sub_5e1390(S* self, float* out, int c);
extern "C" bool __cdecl sub_5e1250(S* self, int a, int b);
extern "C" void __cdecl sub_5e1430(S* self, int a, int b, int c);

void S::f(int a, int b, int c)
{
    float v1 = 0.0f;
    float v2 = g_float;
    float v3 = 0.0f;

    while (true) {
        sub_5e1390(this, &v1, c);
        if (sub_5e1250(this, a, b))
            break;
        v1 = 0.0f;
        v2 = g_float;
        v3 = 0.0f;
        sub_5e1390(this, &v1, c);
        if (sub_5e1250(this, a, b))
            break;
    }
    sub_5e1430(this, a, b, c);
}
