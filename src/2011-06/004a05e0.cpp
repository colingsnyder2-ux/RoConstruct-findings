// roc 2011-06 004a05e0  unit: RBX::DS::CVideoStreamFilter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a05e0
//
// 004a05e0  8b4148               mov eax, dword ptr [ecx + 0x48]
// 004a05e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a05e0 {
    char pad0[72];
    int m_x;
    int f();
};
int S_func_004a05e0::f()
{
    return m_x;
}
