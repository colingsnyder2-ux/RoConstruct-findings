// roc 2011-06 00689270  unit: RBX::Keyframe  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689270
//
// 00689270  8b81e0000000         mov eax, dword ptr [ecx + 0xe0]
// 00689276  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00689270 {
    char pad0[224];
    int m_x;
    int f();
};
int S_func_00689270::f()
{
    return m_x;
}
