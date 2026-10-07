// roc 2010-06 005f5590  unit: RBX::RootInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f5590
//
// 005f5590  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 005f5596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f5590 {
    char pad0[328];
    int m_x;
    int f();
};
int S_func_005f5590::f()
{
    return m_x;
}
