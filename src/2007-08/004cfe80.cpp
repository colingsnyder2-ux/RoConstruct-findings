// roc 2007-08 004cfe80  unit: RBX::TextureProxyBase  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfe80
//
// 004cfe80  8d8138010000         lea eax, [ecx + 0x138]
// 004cfe86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cfe80 {
    char pad0[312];
    int m_x;
    int* f();
};
int* S_func_004cfe80::f()
{
    return &m_x;
}
