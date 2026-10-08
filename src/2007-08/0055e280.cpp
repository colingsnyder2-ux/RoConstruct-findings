// roc 2007-08 0055e280  unit: RBX::DataModel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e280
//
// 0055e280  8b818c010000         mov eax, dword ptr [ecx + 0x18c]
// 0055e286  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0055e280 {
    char pad0[396];
    int m_x;
    int f();
};
int S_func_0055e280::f()
{
    return m_x;
}
