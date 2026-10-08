// roc 2007-03 006e55b0  unit: seg_006e0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e55b0
//
// 006e55b0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006e55b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006e55b0 {
    char pad0[52];
    int m_x;
    int f();
};
int S_func_006e55b0::f()
{
    return m_x;
}
