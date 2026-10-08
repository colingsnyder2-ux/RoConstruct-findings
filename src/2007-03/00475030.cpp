// roc 2007-03 00475030  unit: seg_00470000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475030
//
// 00475030  8b4174               mov eax, dword ptr [ecx + 0x74]
// 00475033  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00475030 {
    char pad0[116];
    int m_x;
    int f();
};
int S_func_00475030::f()
{
    return m_x;
}
