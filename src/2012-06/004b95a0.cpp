// roc 2012-06 004b95a0  unit: RBX::ViewBase  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b95a0
//
// 004b95a0  8b8144010000         mov eax, dword ptr [ecx + 0x144]
// 004b95a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b95a0 {
    char pad0[324];
    int m_x;
    int f();
};
int S_func_004b95a0::f()
{
    return m_x;
}
