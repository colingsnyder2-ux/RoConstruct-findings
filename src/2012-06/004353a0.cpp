// roc 2012-06 004353a0  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004353a0
//
// 004353a0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 004353a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004353a0 {
    char pad0[168];
    int m_x;
    int f();
};
int S_func_004353a0::f()
{
    return m_x;
}
