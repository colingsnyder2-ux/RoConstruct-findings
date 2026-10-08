// roc 2007-08 004fc040  unit: RBX::Render::AggregateChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc040
//
// 004fc040  8a4154               mov al, byte ptr [ecx + 0x54]
// 004fc043  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004fc040 {
    char pad0[84];
    char m_x;
    char f();
};
char S_func_004fc040::f()
{
    return m_x;
}
