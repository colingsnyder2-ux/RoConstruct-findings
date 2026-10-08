// roc 2007-03 0044db60  unit: seg_00440000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044db60
//
// 0044db60  8b4148               mov eax, dword ptr [ecx + 0x48]
// 0044db63  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0044db60 {
    char pad0[72];
    int m_x;
    int f();
};
int S_func_0044db60::f()
{
    return m_x;
}
