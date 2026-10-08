// roc 2007-03 0067db00  unit: seg_00670000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067db00
//
// 0067db00  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0067db03  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067db00 {
    char pad0[56];
    int m_x;
    int f();
};
int S_func_0067db00::f()
{
    return m_x;
}
