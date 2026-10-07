// roc 2010-06 006dd6a0  unit: RBX::VehicleSeat  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006dd6a0
//
// 006dd6a0  8d81a8000000         lea eax, [ecx + 0xa8]
// 006dd6a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006dd6a0 {
    char pad0[168];
    int m_x;
    int* f();
};
int* S_func_006dd6a0::f()
{
    return &m_x;
}
