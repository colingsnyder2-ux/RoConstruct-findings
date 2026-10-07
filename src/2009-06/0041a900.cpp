// roc 2009-06 0041a900  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a900
//
// 0041a900  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0041a903  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041a900 {
    char pad0[108];
    int m_x;
    int f();
};
int S_func_0041a900::f()
{
    return m_x;
}
