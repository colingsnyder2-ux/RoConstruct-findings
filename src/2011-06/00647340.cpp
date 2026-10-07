// roc 2011-06 00647340  unit: RBX::CoreGuiService  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647340
//
// 00647340  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 00647346  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00647340 {
    char pad0[196];
    int m_x;
    int f();
};
int S_func_00647340::f()
{
    return m_x;
}
