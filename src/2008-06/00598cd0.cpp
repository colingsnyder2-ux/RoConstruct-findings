// roc 2008-06 00598cd0  unit: RBX::PartInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598cd0
//
// 00598cd0  8b81c4020000         mov eax, dword ptr [ecx + 0x2c4]
// 00598cd6  83c004               add eax, 4
// 00598cd9  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598cd0 {
    char pad0[708];
    int m_x;
    int f();
};
int S_func_00598cd0::f()
{
    return m_x + 4;
}
