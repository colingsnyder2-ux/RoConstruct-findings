// roc 2011-06 0067cdf0  unit: RBX::VBasicPartInstance::?$ActionStation  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067cdf0
//
// 0067cdf0  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 0067cdf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067cdf0 {
    char pad0[640];
    int m_x;
    int f();
};
int S_func_0067cdf0::f()
{
    return m_x;
}
