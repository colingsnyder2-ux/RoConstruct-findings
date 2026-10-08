// roc 2007-08 0041ced0  unit: InsertDecal  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041ced0
//
// 0041ced0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 0041ced6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041ced0 {
    char pad0[188];
    int m_x;
    int f();
};
int S_func_0041ced0::f()
{
    return m_x;
}
