// roc 2011-06 00851980  unit: CSourceStream  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851980
//
// 00851980  83791002             cmp dword ptr [ecx + 0x10], 2
// 00851984  7513                 jne 0x851999
// 00851986  6a00                 push 0
// 00851988  6a05                 push 5
// 0085198a  e8e1f7ffff           call 0x851170
// 0085198f  84c0                 test al, al
// 00851991  7406                 je 0x851999
// 00851993  b801000000           mov eax, 1
// 00851998  c3                   ret 
// 00851999  33c0                 xor eax, eax
// 0085199b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000008@@QAEHXZ)

namespace ns_ROCX000008 {
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
