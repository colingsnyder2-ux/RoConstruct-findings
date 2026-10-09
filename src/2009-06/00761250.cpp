// roc 2009-06 00761250  unit: ATL::CRegObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761250
//
// 00761250  83791002             cmp dword ptr [ecx + 0x10], 2
// 00761254  7213                 jb 0x761269
// 00761256  6a01                 push 1
// 00761258  6a05                 push 5
// 0076125a  e871f7ffff           call 0x7609d0
// 0076125f  84c0                 test al, al
// 00761261  7406                 je 0x761269
// 00761263  b801000000           mov eax, 1
// 00761268  c3                   ret 
// 00761269  33c0                 xor eax, eax
// 0076126b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
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
