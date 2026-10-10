// from server: 83% by colin
struct CXTPCommandBar {
    char pad0[0xc4];
    int m_c4;
    char pad1[0xc];
    int m_d4;
    char pad2[0x10];
    int m_e8;
    int m_ec;
    int m_f0;
    int m_f4;
    int m_f8;
    int m_fc;
    int m_100;
    int m_104;
    int m_108;
    int m_10c;
    int m_110;
    int m_114;
    char pad3[0x1c];
    int m_134;
    char pad4[0x38];
    int m_170;
    void CopyFrom(CXTPCommandBar* other, int arg);
};

extern "C" int __stdcall func_77d434(int* dest, int* src);
extern "C" int __stdcall func_6301e4(int);
extern "C" int __stdcall func_67d0c0(int, int);
extern "C" int __stdcall func_67a640(int, int);

void CXTPCommandBar::CopyFrom(CXTPCommandBar* other, int arg)
{
    m_f4 = other->m_f4;
    m_fc = other->m_fc;
    m_d4 = other->m_d4;
    m_e8 = other->m_e8;
    m_ec = other->m_ec;
    func_77d434(&m_f0, &other->m_f0);
    m_134 = other->m_134;
    m_c4 = other->m_c4;
    m_108 = other->m_108;
    m_10c = other->m_10c;
    m_110 = other->m_110;
    m_114 = other->m_114;
    m_100 = other->m_100;
    m_170 = other->m_170;
    if (m_f8 == 0) {
        func_6301e4(m_f8);
    }
    int tmp = func_67d0c0(other->m_f8, arg);
    m_f8 = tmp;
    func_67a640(tmp, (int)this);
}
