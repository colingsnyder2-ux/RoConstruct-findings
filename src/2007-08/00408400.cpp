// roc 2007-08 00408400  unit: RBX::VLocalScript::?$FactoryProduct::Creator  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00408400
//
// 00408400  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00408406  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00408400 {
    char pad0[236];
    int m_x;
    int f();
};
int S_func_00408400::f()
{
    return m_x;
}
