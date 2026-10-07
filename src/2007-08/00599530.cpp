// roc 2007-08 00599530  unit: RBX::Camera  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00599530
//
// 00599530  c7819001000000000000 mov dword ptr [ecx + 0x190], 0
// 0059953a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00599530 {
    char pad0[400];
    int m_x;
    void f();
};
void S_func_00599530::f()
{
    m_x = (int)0;
}
