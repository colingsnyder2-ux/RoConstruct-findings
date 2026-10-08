// roc 2007-08 005afc80  unit: RBX::AssemblyStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afc80
//
// 005afc80  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 005afc86  83c028               add eax, 0x28
// 005afc89  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005afc80 {
    char pad0[248];
    int m_x;
    int f();
};
int S_func_005afc80::f()
{
    return m_x + 0x28;
}
