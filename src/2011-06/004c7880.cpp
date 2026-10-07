// roc 2011-06 004c7880  unit: RBX::Network::Players::Plugin  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c7880
//
// 004c7880  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 004c7886  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c7880 {
    char pad0[476];
    int m_x;
    int f();
};
int S_func_004c7880::f()
{
    return m_x;
}
