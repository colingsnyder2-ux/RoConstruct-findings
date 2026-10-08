// roc 2007-08 00636140  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636140
//
// 00636140  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 00636146  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00636140 {
    char pad0[308];
    int m_x;
    int f();
};
int S_func_00636140::f()
{
    return m_x;
}
