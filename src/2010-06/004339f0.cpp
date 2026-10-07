// roc 2010-06 004339f0  unit: CXTPTabClientWnd::CWorkspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004339f0
//
// 004339f0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 004339f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004339f0 {
    char pad0[144];
    int m_x;
    int f();
};
int S_func_004339f0::f()
{
    return m_x;
}
