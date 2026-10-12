// from server: 43% by colin
struct S_func_005f5020 {
    char pad0[0x14];
    int* m_p14;
    char pad1[0x24 - 0x18];
    int** m_pp24;
    char pad2[0x34 - 0x28];
    int* m_p34;
    char pad3[0x44 - 0x38];
    int m_44;
    int m_48;
    int m_4c;
    int f();
};

extern "C" int __stdcall sub_00802370(int);

int S_func_005f5020::f()
{
    int diff = *m_pp24[0] - *m_p14;
    if (diff > 0) {
        int v48 = m_48;
        int v4c = m_4c;
        *m_p14 = v48;
        *m_pp24[0] = v48;
        *m_p34 = v4c + v48 - v48;
    }
    if (m_44 != 0) {
        sub_00802370(m_44);
    }
    return 0;
}
