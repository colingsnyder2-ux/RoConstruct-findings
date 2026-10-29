// from server: 100% by tester
// roc 2007-03 0064a940  unit: seg_00640000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064a940
//
// 0064a940  33c0                 xor eax, eax
// 0064a942  39413c               cmp dword ptr [ecx + 0x3c], eax
// 0064a945  0f94c0               sete al
// 0064a948  c3                   ret 

struct S_func_0065e570 {
    char pad0[60];
    int m_x;
    int f();
};

int S_func_0065e570::f()
{
    return m_x == 0;
}
