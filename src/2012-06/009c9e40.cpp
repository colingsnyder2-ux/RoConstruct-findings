// roc 2012-06 009c9e40  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9e40
//
// 009c9e40  83791002             cmp dword ptr [ecx + 0x10], 2
// 009c9e44  7513                 jne 0x9c9e59
// 009c9e46  6a00                 push 0
// 009c9e48  6a05                 push 5
// 009c9e4a  e8f1f7ffff           call 0x9c9640
// 009c9e4f  84c0                 test al, al
// 009c9e51  7406                 je 0x9c9e59
// 009c9e53  b801000000           mov eax, 1
// 009c9e58  c3                   ret 
// 009c9e59  33c0                 xor eax, eax
// 009c9e5b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000013@@QAEHXZ)

namespace ns_ROCX000013 {
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
