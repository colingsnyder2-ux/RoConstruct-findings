// roc 2007-08 004fc050  unit: RBX::Render::AggregateChunk  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc050
//
// 004fc050  8a4155               mov al, byte ptr [ecx + 0x55]
// 004fc053  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004fc050 {
    char pad0[85];
    char m_x;
    char f();
};
char S_func_004fc050::f()
{
    return m_x;
}
