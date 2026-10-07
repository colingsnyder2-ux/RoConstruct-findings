// roc 2010-06 00645280  unit: RBX::FileMesh  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00645280
//
// 00645280  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00645286  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00645280 {
    char pad0[256];
    int m_x;
    int f();
};
int S_func_00645280::f()
{
    return m_x;
}
