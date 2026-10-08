// from server: 100% by colin
// roc 2007-08 00671a40  unit: CPropertyGridItemBrickColor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671a40
//
// 00671a40  83791002             cmp dword ptr [ecx + 0x10], 2
// 00671a44  7513                 jne 0x671a59
// 00671a46  6a01                 push 1
// 00671a48  6a05                 push 5
// 00671a4a  e8a1f7ffff           call 0x6711f0
// 00671a4f  84c0                 test al, al
// 00671a51  7406                 je 0x671a59
// 00671a53  b801000000           mov eax, 1
// 00671a58  c3                   ret 
// 00671a59  33c0                 xor eax, eax
// 00671a5b  c3                   ret 

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
