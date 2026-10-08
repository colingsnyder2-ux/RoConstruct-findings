// from server: 100% by colin
// roc 2007-08 006719e0  unit: CPropertyGridItemBrickColor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006719e0
//
// 006719e0  83791001             cmp dword ptr [ecx + 0x10], 1
// 006719e4  7513                 jne 0x6719f9
// 006719e6  6a0a                 push 0xa
// 006719e8  6a04                 push 4
// 006719ea  e801f8ffff           call 0x6711f0
// 006719ef  84c0                 test al, al
// 006719f1  7406                 je 0x6719f9
// 006719f3  b801000000           mov eax, 1
// 006719f8  c3                   ret 
// 006719f9  33c0                 xor eax, eax
// 006719fb  c3                   ret 

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
