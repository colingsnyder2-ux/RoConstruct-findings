// roc 2011-06 005e6360  unit: boost::io::too_many_args  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6360
//
// 005e6360  8a81640c0000         mov al, byte ptr [ecx + 0xc64]
// 005e6366  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6360 {
    char pad0[3172];
    char m_x;
    char f();
};
char S_func_005e6360::f()
{
    return m_x;
}
