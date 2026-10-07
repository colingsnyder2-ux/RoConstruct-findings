// roc 2011-06 004a36f0  unit: RBX::DS::CVideoStreamFilter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a36f0
//
// 004a36f0  8b816c010000         mov eax, dword ptr [ecx + 0x16c]
// 004a36f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a36f0 {
    char pad0[364];
    int m_x;
    int f();
};
int S_func_004a36f0::f()
{
    return m_x;
}
