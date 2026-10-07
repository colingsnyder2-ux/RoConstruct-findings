// roc 2008-06 00565e50  unit: RBX::Team  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565e50
//
// 00565e50  8a8138010000         mov al, byte ptr [ecx + 0x138]
// 00565e56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00565e50 {
    char pad0[312];
    char m_x;
    char f();
};
char S_func_00565e50::f()
{
    return m_x;
}
