// roc 2011-06 006ffe40  unit: RBX::VBodyThrust::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ffe40
//
// 006ffe40  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 006ffe46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ffe40 {
    char pad0[348];
    int m_x;
    int f();
};
int S_func_006ffe40::f()
{
    return m_x;
}
