// roc 2009-06 00690670  unit: RBX::VObjectValue::?$EventDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00690670
//
// 00690670  c6817801000000       mov byte ptr [ecx + 0x178], 0
// 00690677  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00690670 {
    char pad0[376];
    char m_x;
    void f(int a1);
};
void S_func_00690670::f(int a1)
{
    m_x = (char)0;
}
