// roc 2010-06 0071dc10  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071dc10
//
// 0071dc10  c6411401             mov byte ptr [ecx + 0x14], 1
// 0071dc14  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071dc10 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_0071dc10::f()
{
    m_x = (char)1;
}
