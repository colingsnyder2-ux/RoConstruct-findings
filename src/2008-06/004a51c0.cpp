// roc 2008-06 004a51c0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a51c0
//
// 004a51c0  c70100000000         mov dword ptr [ecx], 0
// 004a51c6  c7410800000000       mov dword ptr [ecx + 8], 0
// 004a51cd  c3                   ret 

struct Creator {
    void* m_a;
    int m_b;
    void* m_c;
    void Reset();
};

void Creator::Reset()
{
    m_a = 0;
    m_c = 0;
}
