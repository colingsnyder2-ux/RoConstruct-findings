// roc 2007-08 005a4a70  unit: RBX::VHumanoid::?$FactoryProduct  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4a70
//
// 005a4a70  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 005a4a76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a4a70 {
    char pad0[312];
    int m_x;
    int f();
};
int S_func_005a4a70::f()
{
    return m_x;
}
