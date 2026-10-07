// roc 2010-06 008245f0  unit: CXTPControlGallery  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008245f0
//
// 008245f0  8b81f8010000         mov eax, dword ptr [ecx + 0x1f8]
// 008245f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008245f0 {
    char pad0[504];
    int m_x;
    int f();
};
int S_func_008245f0::f()
{
    return m_x;
}
