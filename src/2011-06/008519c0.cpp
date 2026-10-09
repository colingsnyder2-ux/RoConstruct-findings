// roc 2011-06 008519c0  unit: CSourceStream  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008519c0
//
// 008519c0  83791002             cmp dword ptr [ecx + 0x10], 2
// 008519c4  7213                 jb 0x8519d9
// 008519c6  6a01                 push 1
// 008519c8  6a05                 push 5
// 008519ca  e871f7ffff           call 0x851140
// 008519cf  84c0                 test al, al
// 008519d1  7406                 je 0x8519d9
// 008519d3  b801000000           mov eax, 1
// 008519d8  c3                   ret 
// 008519d9  33c0                 xor eax, eax
// 008519db  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX00000a@@QAEHXZ)

namespace ns_ROCX00000a {
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
