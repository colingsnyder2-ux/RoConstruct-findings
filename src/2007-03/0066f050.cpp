// roc 2007-03 0066f050  unit: seg_00660000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066f050
//
// 0066f050  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0066f053  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066f050 {
    char pad0[96];
    int m_x;
    int f();
};
int S_func_0066f050::f()
{
    return m_x;
}
