// roc 2011-06 006ff610  unit: RBX::GeometryService  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ff610
//
// 006ff610  c6817401000000       mov byte ptr [ecx + 0x174], 0
// 006ff617  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006ff610 {
    char pad0[372];
    char m_x;
    void f(int a1);
};
void S_func_006ff610::f(int a1)
{
    m_x = (char)0;
}
