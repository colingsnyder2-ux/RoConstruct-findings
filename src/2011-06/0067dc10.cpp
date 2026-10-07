// roc 2011-06 0067dc10  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067dc10
//
// 0067dc10  8a81ec010000         mov al, byte ptr [ecx + 0x1ec]
// 0067dc16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067dc10 {
    char pad0[492];
    char m_x;
    char f();
};
char S_func_0067dc10::f()
{
    return m_x;
}
