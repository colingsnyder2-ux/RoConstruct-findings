// roc 2011-06 005e6250  unit: RBX::VServiceProvider::?$EventDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6250
//
// 005e6250  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 005e6253  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6250 {
    char pad0[124];
    int m_x;
    int f();
};
int S_func_005e6250::f()
{
    return m_x;
}
