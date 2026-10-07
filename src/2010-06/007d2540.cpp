// roc 2010-06 007d2540  unit: RBX::ImmediateMeshGenAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d2540
//
// 007d2540  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007d2543  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007d2540 {
    char pad0[32];
    int m_x;
    int f();
};
int S_func_007d2540::f()
{
    return m_x;
}
