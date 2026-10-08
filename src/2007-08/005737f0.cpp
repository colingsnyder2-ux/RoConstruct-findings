// roc 2007-08 005737f0  unit: RBX::NullController  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005737f0
//
// 005737f0  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 005737f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005737f0 {
    char pad0[400];
    int m_x;
    int f();
};
int S_func_005737f0::f()
{
    return m_x;
}
