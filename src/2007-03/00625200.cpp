// roc 2007-03 00625200  unit: seg_00620000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00625200
//
// 00625200  8d4108               lea eax, [ecx + 8]
// 00625203  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00625200 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_00625200::f()
{
    return &m_x;
}
