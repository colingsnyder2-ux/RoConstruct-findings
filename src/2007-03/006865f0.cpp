// roc 2007-03 006865f0  unit: seg_00680000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006865f0
//
// 006865f0  83791002             cmp dword ptr [ecx + 0x10], 2
// 006865f4  7513                 jne 0x686609
// 006865f6  6a00                 push 0
// 006865f8  6a05                 push 5
// 006865fa  e8c1f7ffff           call 0x685dc0
// 006865ff  84c0                 test al, al
// 00686601  7406                 je 0x686609
// 00686603  b801000000           mov eax, 1
// 00686608  c3                   ret 
// 00686609  33c0                 xor eax, eax
// 0068660b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000009@@QAEHXZ)

namespace ns_ROCX000009 {
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
