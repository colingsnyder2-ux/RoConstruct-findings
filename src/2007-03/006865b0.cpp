// roc 2007-03 006865b0  unit: seg_00680000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006865b0
//
// 006865b0  83791001             cmp dword ptr [ecx + 0x10], 1
// 006865b4  7513                 jne 0x6865c9
// 006865b6  6a0a                 push 0xa
// 006865b8  6a04                 push 4
// 006865ba  e801f8ffff           call 0x685dc0
// 006865bf  84c0                 test al, al
// 006865c1  7406                 je 0x6865c9
// 006865c3  b801000000           mov eax, 1
// 006865c8  c3                   ret 
// 006865c9  33c0                 xor eax, eax
// 006865cb  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000007@@QAEHXZ)

namespace ns_ROCX000007 {
struct CPropertyGridItemBrickColor {
    char pad[0x10];
    int field_0x10;
    bool sub_6711F0(int, int);
    int method();
};

int CPropertyGridItemBrickColor::method() {
    if (field_0x10 == 1) {
        if (sub_6711F0(4, 10))
            return 1;
    }
    return 0;
}
}
