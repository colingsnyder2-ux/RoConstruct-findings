// roc 2011-06 00881690  unit: CXTPControlGallery  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881690
//
// 00881690  8b81f8010000         mov eax, dword ptr [ecx + 0x1f8]
// 00881696  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00881690 {
    char pad0[504];
    int m_x;
    int f();
};
int S_func_00881690::f()
{
    return m_x;
}
