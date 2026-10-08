// roc 2007-03 0048b560  unit: seg_00480000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048b560
//
// 0048b560  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0048b566  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0048b560 {
    char pad0[336];
    int m_x;
    int f();
};
int S_func_0048b560::f()
{
    return m_x;
}
