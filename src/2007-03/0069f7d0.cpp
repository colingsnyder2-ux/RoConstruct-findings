// roc 2007-03 0069f7d0  unit: seg_00690000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069f7d0
//
// 0069f7d0  8b81e4010000         mov eax, dword ptr [ecx + 0x1e4]
// 0069f7d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069f7d0 {
    char pad0[484];
    int m_x;
    int f();
};
int S_func_0069f7d0::f()
{
    return m_x;
}
