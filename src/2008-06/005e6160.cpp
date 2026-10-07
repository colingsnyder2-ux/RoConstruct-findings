// roc 2008-06 005e6160  unit: RBX::Clump  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6160
//
// 005e6160  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005e6163  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 005e6169  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005e6160 {
    char pad[160];
    int m_x;
};
struct S_func_005e6160 {
    char pad[28];
    I_func_005e6160* m_p;
    int f();
};
int S_func_005e6160::f()
{
    return m_p->m_x;
}
