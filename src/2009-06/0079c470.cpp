// roc 2009-06 0079c470  unit: CXTPControlGallery  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c470
//
// 0079c470  8b81f8010000         mov eax, dword ptr [ecx + 0x1f8]
// 0079c476  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0079c470 {
    char pad0[504];
    int m_x;
    int f();
};
int S_func_0079c470::f()
{
    return m_x;
}
