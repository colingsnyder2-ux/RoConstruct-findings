// roc 2007-03 006c4a00  unit: seg_006c0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c4a00
//
// 006c4a00  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006c4a03  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c4a00 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_006c4a00::f()
{
    return m_x;
}
