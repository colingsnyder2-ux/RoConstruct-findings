// roc 2011-06 004967d0  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004967d0
//
// 004967d0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 004967d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004967d0 {
    char pad0[168];
    int m_x;
    int f();
};
int S_func_004967d0::f()
{
    return m_x;
}
