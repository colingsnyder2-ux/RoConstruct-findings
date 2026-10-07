// roc 2008-06 005cc000  unit: RBX::Camera  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc000
//
// 005cc000  c781d801000000000000 mov dword ptr [ecx + 0x1d8], 0
// 005cc00a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005cc000 {
    char pad0[472];
    int m_x;
    void f();
};
void S_func_005cc000::f()
{
    m_x = (int)0;
}
