// from server: 100% by colin
// roc 2007-08 0065e570  unit: CXTPReportControl  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e570
//
// 0065e570  33c0                 xor eax, eax
// 0065e572  39413c               cmp dword ptr [ecx + 0x3c], eax
// 0065e575  0f94c0               sete al
// 0065e578  c3                   ret 

struct S_func_0065e570 {
    char pad0[60];
    int m_x;
    int f();
};

int S_func_0065e570::f()
{
    return m_x == 0;
}
