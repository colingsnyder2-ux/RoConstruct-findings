// roc 2009-12 0083c000  unit: CXTPAccessible  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c000
//
// 0083c000  83791002             cmp dword ptr [ecx + 0x10], 2
// 0083c004  7513                 jne 0x83c019
// 0083c006  6a01                 push 1
// 0083c008  6a05                 push 5
// 0083c00a  e8c1f7ffff           call 0x83b7d0
// 0083c00f  84c0                 test al, al
// 0083c011  7406                 je 0x83c019
// 0083c013  b801000000           mov eax, 1
// 0083c018  c3                   ret 
// 0083c019  33c0                 xor eax, eax
// 0083c01b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000002@@QAEHXZ)

namespace ns_ROCX000002 {
struct CPropertyGridItemBrickColor {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    bool check(int a, int b);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (field10 == 2) {
        if (check(5, 1)) {
            return 1;
        }
    }
    return 0;
}
}
