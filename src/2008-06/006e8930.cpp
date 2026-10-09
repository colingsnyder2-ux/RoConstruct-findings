// roc 2008-06 006e8930  unit: CPatchedControlComboBox  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8930
//
// 006e8930  83791002             cmp dword ptr [ecx + 0x10], 2
// 006e8934  7213                 jb 0x6e8949
// 006e8936  6a01                 push 1
// 006e8938  6a05                 push 5
// 006e893a  e871f7ffff           call 0x6e80b0
// 006e893f  84c0                 test al, al
// 006e8941  7406                 je 0x6e8949
// 006e8943  b801000000           mov eax, 1
// 006e8948  c3                   ret 
// 006e8949  33c0                 xor eax, eax
// 006e894b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000018@@QAEHXZ)

namespace ns_ROCX000018 {
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
