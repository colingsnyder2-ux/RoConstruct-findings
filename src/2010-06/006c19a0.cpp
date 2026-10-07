// roc 2010-06 006c19a0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c19a0
//
// 006c19a0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 006c19a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c19a0 {
    char pad0[168];
    int m_x;
    int f();
};
int S_func_006c19a0::f()
{
    return m_x;
}
