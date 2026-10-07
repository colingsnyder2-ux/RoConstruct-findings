// roc 2011-06 0083e8f0  unit: RBX::DS::CVideoStream  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e8f0
//
// 0083e8f0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0083e8f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0083e8f0 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_0083e8f0::f()
{
    return m_x;
}
