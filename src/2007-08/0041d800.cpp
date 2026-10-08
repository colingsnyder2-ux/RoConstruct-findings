// roc 2007-08 0041d800  unit: DxUserInput  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d800
//
// 0041d800  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0041d803  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041d800 {
    char pad0[108];
    int m_x;
    int f();
};
int S_func_0041d800::f()
{
    return m_x;
}
