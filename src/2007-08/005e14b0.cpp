// from server: 45% by colin
struct S {
    void f(int a, int b, int c);
};

extern float g_val;

void sub_5e1390(int a, float* b, int c);
bool sub_5e1250(int a, int b);
void sub_5e1430(int a, int b, int c);

void S::f(int a, int b, int c)
{
    float v1 = 0.0f;
    float v2 = g_val;
    float v3 = 0.0f;

    sub_5e1390(a, &v1, b);

    while (!sub_5e1250(a, c)) {
        v1 = 0.0f;
        v2 = g_val;
        v3 = 0.0f;
        sub_5e1390(a, &v1, b);
    }

    sub_5e1430(a, b, c);
}
