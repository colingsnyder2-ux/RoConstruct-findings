// roc 2007-03 006e55e0  unit: seg_006e0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e55e0
//
// 006e55e0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006e55e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e55e0 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_006e55e0::f()
{
    return m_x;
}
