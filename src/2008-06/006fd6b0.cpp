// from server: 69% by colin
struct S_func_006fd6b0 {
    char pad0[0x14];
    int m_field14;
    char pad1[0x10];
    int m_field28;
    int m_field2c;
    void f(unsigned short a1);
};

extern "C" int __stdcall sub_803ee0(int);
extern "C" void __cdecl sub_6a1124(int, int);
extern "C" void __stdcall sub_7bc106();

void S_func_006fd6b0::f(unsigned short a1)
{
    if ((~m_field14 & 1) == 0) {
        int v = sub_803ee0((int)(this) + 0x14);
        sub_6a1124(2, v);
    }
    unsigned int ecx = m_field28 + 2;
    if (ecx > (unsigned int)m_field2c) {
        sub_7bc106();
    }
    *(unsigned short*)m_field28 = a1;
    m_field28 += 2;
}
