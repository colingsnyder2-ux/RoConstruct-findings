// roc 2011-06 005ff650  unit: RBX::DataModel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ff650
//
// 005ff650  8a81600a0000         mov al, byte ptr [ecx + 0xa60]
// 005ff656  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005ff650 {
    char pad0[2656];
    char m_x;
    char f();
};
char S_func_005ff650::f()
{
    return m_x;
}
