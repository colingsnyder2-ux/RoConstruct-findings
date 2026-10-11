// from server: 67% by colin
struct S_func_0046a1b0 {
    int m_x0;
    float m_x4;
};

extern "C" int __cdecl sub_0046a010(S_func_0046a1b0*, S_func_0046a1b0*, S_func_0046a1b0*, int, float, float);

extern float g_81c430;

void __cdecl sub_0046a1b0(S_func_0046a1b0* a, S_func_0046a1b0* b, S_func_0046a1b0* c, int d)
{
    float f1 = a->m_x4;
    float f2 = f1 + b->m_x4;
    sub_0046a010(a, c, b, 0x14, g_81c430, f2);
    c->m_x4 = 0.0f;
    b->m_x4 = f2;
}
