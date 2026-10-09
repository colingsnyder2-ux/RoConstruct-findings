// roc 2012-06 009c9e60  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9e60
//
// 009c9e60  83791002             cmp dword ptr [ecx + 0x10], 2
// 009c9e64  7513                 jne 0x9c9e79
// 009c9e66  6a01                 push 1
// 009c9e68  6a05                 push 5
// 009c9e6a  e8d1f7ffff           call 0x9c9640
// 009c9e6f  84c0                 test al, al
// 009c9e71  7406                 je 0x9c9e79
// 009c9e73  b801000000           mov eax, 1
// 009c9e78  c3                   ret 
// 009c9e79  33c0                 xor eax, eax
// 009c9e7b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
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
