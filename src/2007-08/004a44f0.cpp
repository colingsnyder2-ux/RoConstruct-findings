// from server: 100% by colin
// roc 2007-08 004a44f0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a44f0
//
// 004a44f0  c705f8e28b0000000000 mov dword ptr [0x8be2f8], 0
// 004a44fa  c70174cd7900         mov dword ptr [ecx], 0x79cd74
// 004a4500  c741046ccd7900       mov dword ptr [ecx + 4], 0x79cd6c
// 004a4507  c7411064cd7900       mov dword ptr [ecx + 0x10], 0x79cd64
// 004a450e  c7411454cd7900       mov dword ptr [ecx + 0x14], 0x79cd54
// 004a4515  c7412c44cd7900       mov dword ptr [ecx + 0x2c], 0x79cd44
// 004a451c  c7414434cd7900       mov dword ptr [ecx + 0x44], 0x79cd34
// 004a4523  c7415c24cd7900       mov dword ptr [ecx + 0x5c], 0x79cd24
// 004a452a  c7417414cd7900       mov dword ptr [ecx + 0x74], 0x79cd14
// 004a4531  c7818c00000004cd7900 mov dword ptr [ecx + 0x8c], 0x79cd04
// 004a453b  e970bd0900           jmp 0x5402b0

struct S_func_004a44f0 {
    int m_0;
    int m_4;
    int m_8;
    int m_c;
    int m_10;
    int m_14;
    int m_18;
    int m_1c;
    int m_20;
    int m_24;
    int m_28;
    int m_2c;
    int m_30;
    int m_34;
    int m_38;
    int m_3c;
    int m_40;
    int m_44;
    int m_48;
    int m_4c;
    int m_50;
    int m_54;
    int m_58;
    int m_5c;
    int m_60;
    int m_64;
    int m_68;
    int m_6c;
    int m_70;
    int m_74;
    int m_78;
    int m_7c;
    int m_80;
    int m_84;
    int m_88;
    int m_8c;
    void f();
};

extern int g_8be2f8;
extern void __stdcall sub_5402b0();

void S_func_004a44f0::f()
{
    g_8be2f8 = 0;
    m_0 = 0x79cd74;
    m_4 = 0x79cd6c;
    m_10 = 0x79cd64;
    m_14 = 0x79cd54;
    m_2c = 0x79cd44;
    m_44 = 0x79cd34;
    m_5c = 0x79cd24;
    m_74 = 0x79cd14;
    m_8c = 0x79cd04;
    sub_5402b0();
}
