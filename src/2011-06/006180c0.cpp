// roc 2011-06 006180c0  unit: boost::bad_lexical_cast  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006180c0
//
// 006180c0  c6811801000001       mov byte ptr [ecx + 0x118], 1
// 006180c7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006180c0 {
    char pad0[280];
    char m_x;
    void f();
};
void S_func_006180c0::f()
{
    m_x = (char)1;
}
