// roc 2011-06 00851940  unit: CSourceStream  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851940
//
// 00851940  83791001             cmp dword ptr [ecx + 0x10], 1
// 00851944  7513                 jne 0x851959
// 00851946  6a0a                 push 0xa
// 00851948  6a04                 push 4
// 0085194a  e821f8ffff           call 0x851170
// 0085194f  84c0                 test al, al
// 00851951  7406                 je 0x851959
// 00851953  b801000000           mov eax, 1
// 00851958  c3                   ret 
// 00851959  33c0                 xor eax, eax
// 0085195b  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000006@@QAEHXZ)

namespace ns_ROCX000006 {
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
