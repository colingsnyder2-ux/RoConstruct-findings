// roc 2009-06 0063c4f0  unit: RBX::ScriptContext  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063c4f0
//
// 0063c4f0  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0063c4f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063c4f0 {
    char pad0[192];
    int m_x;
    int f();
};
int S_func_0063c4f0::f()
{
    return m_x;
}
