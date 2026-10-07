// roc 2012-06 004aabc0  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004aabc0
//
// 004aabc0  8b81f4010000         mov eax, dword ptr [ecx + 0x1f4]
// 004aabc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004aabc0 {
    char pad0[500];
    int m_x;
    int f();
};
int S_func_004aabc0::f()
{
    return m_x;
}
