// roc 2010-06 005e0c30  unit: RBX::GlobalSettings  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0c30
//
// 005e0c30  8b8144010000         mov eax, dword ptr [ecx + 0x144]
// 005e0c36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e0c30 {
    char pad0[324];
    int m_x;
    int f();
};
int S_func_005e0c30::f()
{
    return m_x;
}
