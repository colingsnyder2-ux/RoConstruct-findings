// from server: 100% by tester
// roc 2010-06 007091e0  unit: RBX::KernelJoint  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007091e0
//
// 007091e0  8b442404             mov eax, dword ptr [esp + 4]
// 007091e4  85c0                 test eax, eax
// 007091e6  7405                 je 0x7091ed
// 007091e8  8d50f8               lea edx, [eax - 8]
// 007091eb  eb02                 jmp 0x7091ef
// 007091ed  33d2                 xor edx, edx
// 007091ef  8b41f0               mov eax, dword ptr [ecx - 0x10]
// 007091f2  3bd0                 cmp edx, eax
// 007091f4  7503                 jne 0x7091f9
// 007091f6  8b41f4               mov eax, dword ptr [ecx - 0xc]
// 007091f9  85c0                 test eax, eax
// 007091fb  7406                 je 0x709203
// 007091fd  83c008               add eax, 8
// 00709200  c20400               ret 4
// 00709203  33c0                 xor eax, eax
// 00709205  c20400               ret 4

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
