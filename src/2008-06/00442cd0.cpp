// roc 2008-06 00442cd0  unit: CPropGrid  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442cd0
//
// 00442cd0  8b4104               mov eax, dword ptr [ecx + 4]
// 00442cd3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00442cd0 {
    char pad0[4];
    int m_x;
    int f();
};
int S_func_00442cd0::f()
{
    return m_x;
}
