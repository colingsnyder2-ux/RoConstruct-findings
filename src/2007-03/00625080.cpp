// roc 2007-03 00625080  unit: seg_00620000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00625080
//
// 00625080  8d4130               lea eax, [ecx + 0x30]
// 00625083  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00625080 {
    char pad0[48];
    int m_x;
    int* f();
};
int* S_func_00625080::f()
{
    return &m_x;
}
