// from server: 76% by atomic.potato
struct S_func_005f81e0 {
    char pad0[16];
    int* m_p10;
    char pad1[12];
    int* m_p20;
    char pad2[12];
    int* m_p30;
    char pad3[92];
    int m_value;
    void f();
};

void S_func_005f81e0::f()
{
    int value = m_value;
    *m_p10 = value;
    *m_p20 = value;
    *m_p30 = value - value;
}
