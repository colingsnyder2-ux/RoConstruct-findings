// roc 2012-06 004192b0  unit: CutVerb  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004192b0
//
// 004192b0  8b81c40a0000         mov eax, dword ptr [ecx + 0xac4]
// 004192b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004192b0 {
    char pad0[2756];
    int m_x;
    int f();
};
int S_func_004192b0::f()
{
    return m_x;
}
