// roc 2012-06 004b64f0  unit: RBX::DS::CVideoStreamFilter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b64f0
//
// 004b64f0  8b4148               mov eax, dword ptr [ecx + 0x48]
// 004b64f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b64f0 {
    char pad0[72];
    int m_x;
    int f();
};
int S_func_004b64f0::f()
{
    return m_x;
}
