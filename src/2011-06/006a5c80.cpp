// roc 2011-06 006a5c80  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5c80
//
// 006a5c80  8b81c8010000         mov eax, dword ptr [ecx + 0x1c8]
// 006a5c86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5c80 {
    char pad0[456];
    int m_x;
    int f();
};
int S_func_006a5c80::f()
{
    return m_x;
}
