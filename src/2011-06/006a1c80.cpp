// roc 2011-06 006a1c80  unit: RBX::Assembly  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1c80
//
// 006a1c80  c6417401             mov byte ptr [ecx + 0x74], 1
// 006a1c84  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a1c80 {
    char pad0[116];
    char m_x;
    void f();
};
void S_func_006a1c80::f()
{
    m_x = (char)1;
}
