// roc 2007-08 005afc90  unit: RBX::AssemblyStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afc90
//
// 005afc90  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 005afc96  83c058               add eax, 0x58
// 005afc99  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005afc90 {
    char pad0[248];
    int m_x;
    int f();
};
int S_func_005afc90::f()
{
    return m_x + 0x58;
}
