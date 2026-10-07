// roc 2007-08 005b2ff0  unit: RBX::Assembly  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2ff0
//
// 005b2ff0  8b442404             mov eax, dword ptr [esp + 4]
// 005b2ff4  894150               mov dword ptr [ecx + 0x50], eax
// 005b2ff7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005b2ff0 {
    char pad0[80];
    int m_x;
    void f(int a1);
};
void S_func_005b2ff0::f(int a1)
{
    m_x = (int)a1;
}
