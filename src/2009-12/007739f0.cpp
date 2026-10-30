// roc 2009-12 007739f0  unit: RBX::KernelJoint  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007739f0
//
// 007739f0  8b442404             mov eax, dword ptr [esp + 4]
// 007739f4  85c0                 test eax, eax
// 007739f6  7405                 je 0x7739fd
// 007739f8  8d50f8               lea edx, [eax - 8]
// 007739fb  eb02                 jmp 0x7739ff
// 007739fd  33d2                 xor edx, edx
// 007739ff  8b41f0               mov eax, dword ptr [ecx - 0x10]
// 00773a02  3bd0                 cmp edx, eax
// 00773a04  7503                 jne 0x773a09
// 00773a06  8b41f4               mov eax, dword ptr [ecx - 0xc]
// 00773a09  85c0                 test eax, eax
// 00773a0b  7406                 je 0x773a13
// 00773a0d  83c008               add eax, 8
// 00773a10  c20400               ret 4
// 00773a13  33c0                 xor eax, eax
// 00773a15  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_008f1e70@ns_ROCX000011@@QAEHH@Z)

namespace ns_ROCX000011 {
// from server: 100% by tester
struct S_func_008f1e70 {
    char pad[16];
    int m_a;
    int m_b;
    int f(int x);
};

int S_func_008f1e70::f(int x)
{
    int edx;
    if (x != 0) {
        edx = x - 8;
    } else {
        edx = 0;
    }
    int eax = *(int*)((char*)this - 16);
    if (edx == eax) {
        eax = *(int*)((char*)this - 12);
    }
    if (eax != 0) {
        return eax + 8;
    }
    return 0;
}
}
