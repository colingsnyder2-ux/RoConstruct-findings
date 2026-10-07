// roc 2009-06 005f2380  unit: RBX::UnifiedWidget  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f2380
//
// 005f2380  c781a000000000000000 mov dword ptr [ecx + 0xa0], 0
// 005f238a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f2380 {
    char pad0[160];
    int m_x;
    void f();
};
void S_func_005f2380::f()
{
    m_x = (int)0;
}
