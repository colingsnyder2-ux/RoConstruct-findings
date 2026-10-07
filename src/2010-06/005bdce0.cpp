// roc 2010-06 005bdce0  unit: RBX::VBasicPartInstance::?$ActionStation  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bdce0
//
// 005bdce0  8a81e1010000         mov al, byte ptr [ecx + 0x1e1]
// 005bdce6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005bdce0 {
    char pad0[481];
    char m_x;
    char f();
};
char S_func_005bdce0::f()
{
    return m_x;
}
