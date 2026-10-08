// roc 2009-06 00528a40  unit: RBX::ViewG3D  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00528a40
//
// 00528a40  8b4108               mov eax, dword ptr [ecx + 8]
// 00528a43  05c4000000           add eax, 0xc4
// 00528a48  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00528a40 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_00528a40::f()
{
    return m_x + 0xc4;
}
