// roc 2010-06 0058d800  unit: seg_00580000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058d800
//
// 0058d800  c681ac00000001       mov byte ptr [ecx + 0xac], 1
// 0058d807  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058d800 {
    char pad0[172];
    char m_x;
    void f();
};
void S_func_0058d800::f()
{
    m_x = (char)1;
}
