// roc 2011-06 006d2d00  unit: RBX::MechToAssemblyStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d2d00
//
// 006d2d00  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 006d2d06  83c064               add eax, 0x64
// 006d2d09  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2d00 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_006d2d00::f()
{
    return m_x + 0x64;
}
