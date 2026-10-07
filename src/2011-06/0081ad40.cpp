// roc 2011-06 0081ad40  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ad40
//
// 0081ad40  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0081ad46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0081ad40 {
    char pad0[200];
    int m_x;
    int f();
};
int S_func_0081ad40::f()
{
    return m_x;
}
