// from server: 64% by colin
struct S_func_00552090 {
    char pad0[0x14];
    int* m_14;
    char pad18[0x24 - 0x18];
    int* m_24;
    char pad28[0x34 - 0x28];
    int* m_34;
    char pad38[0x40 - 0x38];
    char m_40[0x8c - 0x40];
    int m_8c;
    int m_90;
    int m_94;
    void f();
};

extern "C" int __stdcall sub_0054f930(int a1, int a2, int a3);

void S_func_00552090::f()
{
    int* p14 = m_14;
    int* p24 = m_24;
    int eax = *p14;
    int edi = *p24 - eax;
    if (edi > 0) {
        int r = sub_0054f930(m_8c, eax, edi);
        if (r == edi) {
            int v90 = m_90;
            *m_14 = v90;
            *m_24 = v90;
            *m_34 = m_94 + v90 - v90;
        } else {
            int old24 = *m_24;
            int v90 = m_90;
            int v94 = m_94 + m_90;
            int newp = v90 + eax;
            *m_14 = newp;
            *m_24 = newp;
            *m_34 = v94 - newp;
            int d = old24 - *m_24;
            *m_34 -= d;
            *m_24 += d;
        }
    }
}
