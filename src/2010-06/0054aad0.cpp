// roc 2010-06 0054aad0  unit: RBX::AggregateChunk  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054aad0
//
// 0054aad0  8a81a8000000         mov al, byte ptr [ecx + 0xa8]
// 0054aad6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0054aad0 {
    char pad0[168];
    char m_x;
    char f();
};
char S_func_0054aad0::f()
{
    return m_x;
}
