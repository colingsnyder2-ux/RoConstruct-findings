// roc 2009-12 0047e4d0  unit: RBX::AdornRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047e4d0
//
// 0047e4d0  8b4108               mov eax, dword ptr [ecx + 8]
// 0047e4d3  8b8048080000         mov eax, dword ptr [eax + 0x848]
// 0047e4d9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0047e4d0 {
    char pad[2120];
    int m_x;
};
struct S_func_0047e4d0 {
    char pad[8];
    I_func_0047e4d0* m_p;
    int f();
};
int S_func_0047e4d0::f()
{
    return m_p->m_x;
}
