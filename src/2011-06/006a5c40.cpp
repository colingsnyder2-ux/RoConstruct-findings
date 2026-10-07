// roc 2011-06 006a5c40  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5c40
//
// 006a5c40  8b81c4010000         mov eax, dword ptr [ecx + 0x1c4]
// 006a5c46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5c40 {
    char pad0[452];
    int m_x;
    int f();
};
int S_func_006a5c40::f()
{
    return m_x;
}
