// from server: 100% by colin
// roc 2007-08 00466de0  unit: VCWorkspace::?$CComObject  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466de0
//
// 00466de0  8bc1                 mov eax, ecx
// 00466de2  33c9                 xor ecx, ecx
// 00466de4  894830               mov dword ptr [eax + 0x30], ecx
// 00466de7  894814               mov dword ptr [eax + 0x14], ecx
// 00466dea  894810               mov dword ptr [eax + 0x10], ecx
// 00466ded  c7400cf05f7900       mov dword ptr [eax + 0xc], 0x795ff0
// 00466df4  c74018d85f7900       mov dword ptr [eax + 0x18], 0x795fd8
// 00466dfb  89481c               mov dword ptr [eax + 0x1c], ecx
// 00466dfe  894824               mov dword ptr [eax + 0x24], ecx
// 00466e01  c7402838837800       mov dword ptr [eax + 0x28], 0x788338
// 00466e08  c7402ccc5f7900       mov dword ptr [eax + 0x2c], 0x795fcc
// 00466e0f  894834               mov dword ptr [eax + 0x34], ecx
// 00466e12  894838               mov dword ptr [eax + 0x38], ecx
// 00466e15  89483c               mov dword ptr [eax + 0x3c], ecx
// 00466e18  894840               mov dword ptr [eax + 0x40], ecx
// 00466e1b  c3                   ret 

struct S_func_00466de0 {
    char pad0[0xc];
    int m_field_c;
    int m_field_10;
    int m_field_14;
    int m_field_18;
    int m_field_1c;
    char pad20[0x4];
    int m_field_24;
    int m_field_28;
    int m_field_2c;
    int m_field_30;
    int m_field_34;
    int m_field_38;
    int m_field_3c;
    int m_field_40;
    S_func_00466de0* f();
};

S_func_00466de0* S_func_00466de0::f()
{
    m_field_30 = 0;
    m_field_14 = 0;
    m_field_10 = 0;
    m_field_c = 0x795ff0;
    m_field_18 = 0x795fd8;
    m_field_1c = 0;
    m_field_24 = 0;
    m_field_28 = 0x788338;
    m_field_2c = 0x795fcc;
    m_field_34 = 0;
    m_field_38 = 0;
    m_field_3c = 0;
    m_field_40 = 0;
    return this;
}
