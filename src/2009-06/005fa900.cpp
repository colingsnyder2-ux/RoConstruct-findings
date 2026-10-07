// roc 2009-06 005fa900  unit: RBX::VServiceProvider::?$EventDesc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fa900
//
// 005fa900  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 005fa903  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fa900 {
    char pad0[124];
    int m_x;
    int f();
};
int S_func_005fa900::f()
{
    return m_x;
}
