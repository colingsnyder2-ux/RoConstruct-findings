// roc 2011-06 0041d920  unit: RBX::DSVideoCaptureEngine  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0041d920
//
// 0041d920  8d4144               lea eax, [ecx + 0x44]
// 0041d923  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041d920 {
    char pad0[68];
    int m_x;
    int* f();
};
int* S_func_0041d920::f()
{
    return &m_x;
}
