// roc 2011-06 0049bd60  unit: CWebToolbox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049bd60
//
// 0049bd60  8b81bc0c0000         mov eax, dword ptr [ecx + 0xcbc]
// 0049bd66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0049bd60 {
    char pad0[3260];
    int m_x;
    int f();
};
int S_func_0049bd60::f()
{
    return m_x;
}
