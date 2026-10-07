// roc 2010-06 0054aae0  unit: RBX::AggregateChunk  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054aae0
//
// 0054aae0  8a81a9000000         mov al, byte ptr [ecx + 0xa9]
// 0054aae6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0054aae0 {
    char pad0[169];
    char m_x;
    char f();
};
char S_func_0054aae0::f()
{
    return m_x;
}
