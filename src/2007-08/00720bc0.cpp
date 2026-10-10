// from server: 52% by colin
struct S_func_00720bc0 {
    char pad0[0x18];
    int m_field18;
    char pad1[0x60];
    int m_field7c;
    int m_field80;
    int m_field84;
    char m_sub88[0xc];
    char m_sub94[0xc];
    char m_subA0[0xc];
    char m_subAC[0xc];
    char m_subB8[0xc];
    void f(int a1);
};

extern "C" void __stdcall sub_00720840();
extern "C" void __stdcall sub_006684a0();

void S_func_00720bc0::f(int a1)
{
    sub_00720840();
    *(int*)m_sub88 = 0;
    *(int*)this = 0x7e239c;
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    m_field7c = a1;
    m_field80 = 1;
    m_field84 = 1;
    m_field18 = 0;
}
