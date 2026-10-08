// from server: 80% by colin
// roc 2007-08 0070c680  unit: CXTColorBase  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c680
//
// 0070c680  8b442404             mov eax, dword ptr [esp + 4]
// 0070c684  0fb6d0               movzx edx, al
// 0070c687  899188070000         mov dword ptr [ecx + 0x788], edx
// 0070c68d  0fb6d4               movzx edx, ah
// 0070c690  c1e810               shr eax, 0x10
// 0070c693  0fb6c0               movzx eax, al
// 0070c696  899190070000         mov dword ptr [ecx + 0x790], edx
// 0070c69c  89818c070000         mov dword ptr [ecx + 0x78c], eax
// 0070c6a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0070c6aa  e93b38f2ff           jmp 0x62feea

struct CXTColorBase {
    char pad[0x788];
    int m_r;
    int m_b;
    int m_g;
    void setColor(unsigned int color);
};

void CXTColorBase::setColor(unsigned int color)
{
    m_r = (unsigned char)color;
    m_g = (unsigned char)(color >> 8);
    m_b = (unsigned char)(color >> 16);
    color = 0;
    extern void __stdcall sub_0062FEEA(unsigned int);
    sub_0062FEEA(color);
}
