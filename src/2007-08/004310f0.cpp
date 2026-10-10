// from server: 42% by colin
struct CSelectionPropGrid {
    char pad0[0xec];
    unsigned char m_flag_ec;
    char pad1[0x4];
    char m_field_f0[0x2d8];
    char m_field_3c8[0x15c];
    char m_field_26c[0x6c];
    int m_field_d8;
    char pad2[0x44];
    char m_field_120[0x30];
    void method_4310f0();
};

extern "C" void __stdcall sub_688440(int, int, int);
extern "C" void __stdcall sub_688e80(int);
extern "C" void __stdcall sub_686cd0(int, int);
extern "C" void __stdcall sub_62ff4a(int, int);
extern "C" void __stdcall sub_68d500(int, int);
extern "C" void __stdcall sub_634800(int);
extern "C" void __stdcall sub_66e120(int);
extern "C" void __stdcall sub_430090(int, int, int);
extern "C" void __stdcall sub_4310a0(int);
extern "C" void* __stdcall sub_77dd98(int, int);

void CSelectionPropGrid::method_4310f0()
{
    if (m_flag_ec == 0)
    {
        sub_688440(0, 0, 0);
        sub_688e80(0);
        sub_430090((int)this, 0, 0);
        sub_686cd0((int)this, (int)sub_77dd98((int)(this->m_field_f0), 1));
        sub_62ff4a((int)(this->m_field_3c8), 0);
        sub_68d500((int)(this->m_field_26c), 0);
        sub_634800(this->m_field_d8);
        sub_66e120((int)(this->m_field_120));
        (*(void (__thiscall**)(void*, int))(*(int*)this + 0x150))(this, 1);
        m_flag_ec = 1;
        sub_4310a0((int)this);
    }
}
