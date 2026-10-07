// roc 2010-06 00809240  unit: CXTPTabClientWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809240
//
// 00809240  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00809246  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00809240 {
    char pad0[140];
    int m_x;
    int f();
};
int S_func_00809240::f()
{
    return m_x;
}
