// roc 2008-06 00442c80  unit: CPropGrid  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442c80
//
// 00442c80  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00442c83  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00442c80 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_00442c80::f()
{
    return m_x;
}
