// roc 2009-12 00575180  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00575180
//
// 00575180  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00575183  8b804c080000         mov eax, dword ptr [eax + 0x84c]
// 00575189  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00575180 {
    char pad[2124];
    int m_x;
};
struct S_func_00575180 {
    char pad[40];
    I_func_00575180* m_p;
    int f();
};
int S_func_00575180::f()
{
    return m_p->m_x;
}
