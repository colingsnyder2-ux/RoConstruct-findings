// from server: 100% by king_originala
// roc 2008-06 005a0190  unit: RBX::ArrowTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0190
//
// 005a0190  803900               cmp byte ptr [ecx], 0
// 005a0193  7533                 jne 0x5a01c8
// 005a0195  80790100             cmp byte ptr [ecx + 1], 0
// 005a0199  752d                 jne 0x5a01c8
// 005a019b  80790200             cmp byte ptr [ecx + 2], 0
// 005a019f  7527                 jne 0x5a01c8
// 005a01a1  80790300             cmp byte ptr [ecx + 3], 0
// 005a01a5  7521                 jne 0x5a01c8
// 005a01a7  80790400             cmp byte ptr [ecx + 4], 0
// 005a01ab  751b                 jne 0x5a01c8
// 005a01ad  80790500             cmp byte ptr [ecx + 5], 0
// 005a01b1  7515                 jne 0x5a01c8
// 005a01b3  80790600             cmp byte ptr [ecx + 6], 0
// 005a01b7  750f                 jne 0x5a01c8
// 005a01b9  80790700             cmp byte ptr [ecx + 7], 0
// 005a01bd  7509                 jne 0x5a01c8
// 005a01bf  80790800             cmp byte ptr [ecx + 8], 0
// 005a01c3  7503                 jne 0x5a01c8
// 005a01c5  33c0                 xor eax, eax
// 005a01c7  c3                   ret 
// 005a01c8  b801000000           mov eax, 1
// 005a01cd  c3                   ret 

struct S {
    unsigned char flags[9];
    int f();
};

int S::f() {
    if (flags[0] || flags[1] || flags[2] ||
        flags[3] || flags[4] || flags[5] ||
        flags[6] || flags[7] || flags[8])
        return 1;
    return 0;
}
