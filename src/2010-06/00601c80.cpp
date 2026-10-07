// roc 2010-06 00601c80  unit: RBX::RootInstance  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601c80
//
// 00601c80  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 00601c83  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00601c80 {
    char pad0[92];
    int m_x;
    int f();
};
int S_func_00601c80::f()
{
    return m_x;
}
