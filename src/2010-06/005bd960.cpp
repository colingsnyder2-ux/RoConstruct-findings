// roc 2010-06 005bd960  unit: RBX::VBasicPartInstance::?$ActionStation  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bd960
//
// 005bd960  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 005bd966  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005bd960 {
    char pad0[640];
    int m_x;
    int f();
};
int S_func_005bd960::f()
{
    return m_x;
}
