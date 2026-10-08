// roc 2007-03 006204d0  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006204d0
//
// 006204d0  8b816c010000         mov eax, dword ptr [ecx + 0x16c]
// 006204d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006204d0 {
    char pad0[364];
    int m_x;
    int f();
};
int S_func_006204d0::f()
{
    return m_x;
}
