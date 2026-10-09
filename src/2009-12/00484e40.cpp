// roc 2009-12 00484e40  unit: G3D::GCamera  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00484e40
//
// 00484e40  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00484e43  0598450000           add eax, 0x4598
// 00484e48  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00484e40 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_00484e40::f()
{
    return m_x + 0x4598;
}
