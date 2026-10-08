// roc 2007-03 00700740  unit: seg_00700000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00700740
//
// 00700740  8b4108               mov eax, dword ptr [ecx + 8]
// 00700743  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00700740 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_00700740::f()
{
    return m_x;
}
