// roc 2009-06 0060a9d0  unit: RBX::GlobalSettings  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060a9d0
//
// 0060a9d0  8b813c010000         mov eax, dword ptr [ecx + 0x13c]
// 0060a9d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0060a9d0 {
    char pad0[316];
    int m_x;
    int f();
};
int S_func_0060a9d0::f()
{
    return m_x;
}
