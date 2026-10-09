// roc 2009-06 00761210  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761210
//
// 00761210  83791002             cmp dword ptr [ecx + 0x10], 2
// 00761214  7513                 jne 0x761229
// 00761216  6a00                 push 0
// 00761218  6a05                 push 5
// 0076121a  e8e1f7ffff           call 0x760a00
// 0076121f  84c0                 test al, al
// 00761221  7406                 je 0x761229
// 00761223  b801000000           mov eax, 1
// 00761228  c3                   ret 
// 00761229  33c0                 xor eax, eax
// 0076122b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000012@@QAEHXZ)

namespace ns_ROCX000012 {
struct CPropertyGridItemBrickColor {
    char gap[0x10];
    int m_state;
    bool check(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (m_state == 2) {
        if (check(5, 0)) {
            return 1;
        }
    }
    return 0;
}
}
