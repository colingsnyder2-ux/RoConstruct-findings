// roc 2007-08 00438e40  unit: CXTPPropertyGridItem  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00438e40
//
// 00438e40  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00438e46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00438e40 {
    char pad0[144];
    int m_x;
    int f();
};
int S_func_00438e40::f()
{
    return m_x;
}
