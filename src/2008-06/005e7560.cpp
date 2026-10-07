// roc 2008-06 005e7560  unit: RBX::Ball  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7560
//
// 005e7560  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 005e7563  8b4024               mov eax, dword ptr [eax + 0x24]
// 005e7566  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005e7560 {
    char pad[36];
    int m_x;
};
struct S_func_005e7560 {
    char pad[92];
    I_func_005e7560* m_p;
    int f();
};
int S_func_005e7560::f()
{
    return m_p->m_x;
}
