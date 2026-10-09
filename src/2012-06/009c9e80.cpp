// roc 2012-06 009c9e80  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9e80
//
// 009c9e80  83791002             cmp dword ptr [ecx + 0x10], 2
// 009c9e84  7213                 jb 0x9c9e99
// 009c9e86  6a01                 push 1
// 009c9e88  6a05                 push 5
// 009c9e8a  e881f7ffff           call 0x9c9610
// 009c9e8f  84c0                 test al, al
// 009c9e91  7406                 je 0x9c9e99
// 009c9e93  b801000000           mov eax, 1
// 009c9e98  c3                   ret 
// 009c9e99  33c0                 xor eax, eax
// 009c9e9b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000015@@QAEHXZ)

namespace ns_ROCX000015 {
struct CPropertyGridItemBrickColor {
    char pad[0x10];
    unsigned int count;
    bool sub_6711C0(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (count >= 2) {
        if (sub_6711C0(5, 1))
            return 1;
    }
    return 0;
}
}
