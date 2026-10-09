// roc 2011-06 008519a0  unit: CSourceStream  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008519a0
//
// 008519a0  83791002             cmp dword ptr [ecx + 0x10], 2
// 008519a4  7513                 jne 0x8519b9
// 008519a6  6a01                 push 1
// 008519a8  6a05                 push 5
// 008519aa  e8c1f7ffff           call 0x851170
// 008519af  84c0                 test al, al
// 008519b1  7406                 je 0x8519b9
// 008519b3  b801000000           mov eax, 1
// 008519b8  c3                   ret 
// 008519b9  33c0                 xor eax, eax
// 008519bb  c3                   ret 
// copied from an identical function in another client (function ?method@CPropertyGridItemBrickColor@ns_ROCX000009@@QAEHXZ)

namespace ns_ROCX000009 {
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
