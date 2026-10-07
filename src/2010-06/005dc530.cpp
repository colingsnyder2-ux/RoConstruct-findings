// roc 2010-06 005dc530  unit: RBX::DataModel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dc530
//
// 005dc530  8a81000a0000         mov al, byte ptr [ecx + 0xa00]
// 005dc536  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005dc530 {
    char pad0[2560];
    char m_x;
    char f();
};
char S_func_005dc530::f()
{
    return m_x;
}
