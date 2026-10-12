// from server: 100% by king_originala
// roc 2008-06 005a0160  unit: RBX::ArrowTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0160
//
// 005a0160  80790400             cmp byte ptr [ecx + 4], 0
// 005a0164  7515                 jne 0x5a017b
// 005a0166  80790500             cmp byte ptr [ecx + 5], 0
// 005a016a  750f                 jne 0x5a017b
// 005a016c  80790600             cmp byte ptr [ecx + 6], 0
// 005a0170  7509                 jne 0x5a017b
// 005a0172  80790700             cmp byte ptr [ecx + 7], 0
// 005a0176  7503                 jne 0x5a017b
// 005a0178  33c0                 xor eax, eax
// 005a017a  c3                   ret 
// 005a017b  b801000000           mov eax, 1
// 005a0180  c3                   ret 

struct S {
    unsigned char padding[4];
    unsigned char a, b, c, d;
    int f() const;
};

int S::f() const {
    if (a || b || c || d)
        return 1;
    return 0;
}
