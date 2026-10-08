// roc 2007-03 0041e520  unit: seg_00410000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041e520
//
// 0041e520  8b4168               mov eax, dword ptr [ecx + 0x68]
// 0041e523  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041e520 {
    char pad0[104];
    int m_x;
    int f();
};
int S_func_0041e520::f()
{
    return m_x;
}
