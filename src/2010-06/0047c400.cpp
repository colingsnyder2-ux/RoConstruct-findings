// roc 2010-06 0047c400  unit: CWebToolbox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047c400
//
// 0047c400  8b81e0000000         mov eax, dword ptr [ecx + 0xe0]
// 0047c406  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0047c400 {
    char pad0[224];
    int m_x;
    int f();
};
int S_func_0047c400::f()
{
    return m_x;
}
