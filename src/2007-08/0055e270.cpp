// roc 2007-08 0055e270  unit: RBX::DataModel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e270
//
// 0055e270  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0055e276  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0055e270 {
    char pad0[332];
    int m_x;
    int f();
};
int S_func_0055e270::f()
{
    return m_x;
}
