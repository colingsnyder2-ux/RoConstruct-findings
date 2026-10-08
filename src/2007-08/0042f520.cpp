// roc 2007-08 0042f520  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f520
//
// 0042f520  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0042f526  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042f520 {
    char pad0[168];
    int m_x;
    int f();
};
int S_func_0042f520::f()
{
    return m_x;
}
