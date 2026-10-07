// roc 2008-06 005fa610  unit: UString_sink::?$stream_buffer  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fa610
//
// 005fa610  8d4104               lea eax, [ecx + 4]
// 005fa613  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fa610 {
    char pad0[4];
    int m_x;
    int* f();
};
int* S_func_005fa610::f()
{
    return &m_x;
}
