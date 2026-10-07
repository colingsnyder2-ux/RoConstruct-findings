// roc 2009-06 00690e10  unit: RBX::VBodyGyro::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00690e10
//
// 00690e10  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 00690e16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00690e10 {
    char pad0[352];
    int m_x;
    int f();
};
int S_func_00690e10::f()
{
    return m_x;
}
