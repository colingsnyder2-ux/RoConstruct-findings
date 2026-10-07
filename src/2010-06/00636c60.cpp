// roc 2010-06 00636c60  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636c60
//
// 00636c60  8a8180010000         mov al, byte ptr [ecx + 0x180]
// 00636c66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00636c60 {
    char pad0[384];
    char m_x;
    char f();
};
char S_func_00636c60::f()
{
    return m_x;
}
