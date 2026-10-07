// roc 2008-06 005e7440  unit: RBX::Ball  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7440
//
// 005e7440  8d4108               lea eax, [ecx + 8]
// 005e7443  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e7440 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_005e7440::f()
{
    return &m_x;
}
