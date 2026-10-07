// roc 2011-06 005e6210  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6210
//
// 005e6210  8a81fc0a0000         mov al, byte ptr [ecx + 0xafc]
// 005e6216  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e6210 {
    char pad0[2812];
    char m_x;
    char f();
};
char S_func_005e6210::f()
{
    return m_x;
}
