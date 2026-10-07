// roc 2012-06 00421160  unit: RBX::DSVideoCaptureEngine  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00421160
//
// 00421160  8d4144               lea eax, [ecx + 0x44]
// 00421163  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00421160 {
    char pad0[68];
    int m_x;
    int* f();
};
int* S_func_00421160::f()
{
    return &m_x;
}
