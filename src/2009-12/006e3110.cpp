// roc 2009-12 006e3110  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e3110
//
// 006e3110  8a81da010000         mov al, byte ptr [ecx + 0x1da]
// 006e3116  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e3110 {
    char pad0[474];
    char m_x;
    char f();
};
char S_func_006e3110::f()
{
    return m_x;
}
