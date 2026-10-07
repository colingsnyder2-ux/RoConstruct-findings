// roc 2008-06 005b0820  unit: RBX::ScriptContext  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0820
//
// 005b0820  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 005b0826  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b0820 {
    char pad0[340];
    int m_x;
    int f();
};
int S_func_005b0820::f()
{
    return m_x;
}
