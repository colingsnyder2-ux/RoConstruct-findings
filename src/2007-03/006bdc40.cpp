// roc 2007-03 006bdc40  unit: seg_006b0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bdc40
//
// 006bdc40  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006bdc43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bdc40 {
    char pad0[32];
    int m_x;
    int f();
};
int S_func_006bdc40::f()
{
    return m_x;
}
