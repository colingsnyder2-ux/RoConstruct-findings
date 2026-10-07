// roc 2010-06 008188a0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008188a0
//
// 008188a0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 008188a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008188a0 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_008188a0::f()
{
    return m_x;
}
