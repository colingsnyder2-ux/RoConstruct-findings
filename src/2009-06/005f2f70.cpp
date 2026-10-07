// roc 2009-06 005f2f70  unit: RBX::BasicPartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f2f70
//
// 005f2f70  8a81e5010000         mov al, byte ptr [ecx + 0x1e5]
// 005f2f76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005f2f70 {
    char pad0[485];
    char m_x;
    char f();
};
char S_func_005f2f70::f()
{
    return m_x;
}
