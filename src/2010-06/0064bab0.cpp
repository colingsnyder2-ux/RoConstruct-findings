// roc 2010-06 0064bab0  unit: RBX::Stats::Item  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064bab0
//
// 0064bab0  8a81e2010000         mov al, byte ptr [ecx + 0x1e2]
// 0064bab6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064bab0 {
    char pad0[482];
    char m_x;
    char f();
};
char S_func_0064bab0::f()
{
    return m_x;
}
