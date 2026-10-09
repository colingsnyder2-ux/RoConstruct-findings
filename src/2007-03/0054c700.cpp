// roc 2007-03 0054c700  unit: seg_00540000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054c700
//
// 0054c700  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 0054c703  c1e804               shr eax, 4
// 0054c706  83e001               and eax, 1
// 0054c709  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054db70@ns_ROCX000019@@QAEIXZ)

namespace ns_ROCX000019 {
struct S_func_0054db70 {
    char pad[92];
    unsigned int m_p;
    unsigned int f();
};

unsigned int S_func_0054db70::f() {
    unsigned int eax = *(unsigned int*)((char*)this + 0x5c);
    eax = eax >> 4;
    eax = eax & 1;
    return eax;
}
}
