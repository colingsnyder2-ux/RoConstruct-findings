// roc 2009-12 0083c040  unit: CXTPAccessible  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c040
//
// 0083c040  83791002             cmp dword ptr [ecx + 0x10], 2
// 0083c044  7213                 jb 0x83c059
// 0083c046  6a00                 push 0
// 0083c048  6a06                 push 6
// 0083c04a  e851f7ffff           call 0x83b7a0
// 0083c04f  84c0                 test al, al
// 0083c051  7406                 je 0x83c059
// 0083c053  b801000000           mov eax, 1
// 0083c058  c3                   ret 
// 0083c059  33c0                 xor eax, eax
// 0083c05b  c3                   ret 
// copied from an identical function in another client (function ?f@CPropertyGridItemBrickColor@ns_ROCX000004@@QAEHXZ)

namespace ns_ROCX000004 {
struct CPropertyGridItemBrickColor {
    char pad_0[0x10];
    unsigned int field_10;
    bool sub_6711c0(int, int);
    int f();
};

int CPropertyGridItemBrickColor::f() {
    if (field_10 >= 2) {
        if (sub_6711c0(6, 0))
            return 1;
    }
    return 0;
}
}
