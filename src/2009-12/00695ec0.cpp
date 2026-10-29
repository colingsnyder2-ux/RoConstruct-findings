// roc 2009-12 00695ec0  unit: RBX::ArrowTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00695ec0
//
// 00695ec0  803900               cmp byte ptr [ecx], 0
// 00695ec3  7533                 jne 0x695ef8
// 00695ec5  80790100             cmp byte ptr [ecx + 1], 0
// 00695ec9  752d                 jne 0x695ef8
// 00695ecb  80790200             cmp byte ptr [ecx + 2], 0
// 00695ecf  7527                 jne 0x695ef8
// 00695ed1  80790300             cmp byte ptr [ecx + 3], 0
// 00695ed5  7521                 jne 0x695ef8
// 00695ed7  80790400             cmp byte ptr [ecx + 4], 0
// 00695edb  751b                 jne 0x695ef8
// 00695edd  80790500             cmp byte ptr [ecx + 5], 0
// 00695ee1  7515                 jne 0x695ef8
// 00695ee3  80790600             cmp byte ptr [ecx + 6], 0
// 00695ee7  750f                 jne 0x695ef8
// 00695ee9  80790700             cmp byte ptr [ecx + 7], 0
// 00695eed  7509                 jne 0x695ef8
// 00695eef  80790800             cmp byte ptr [ecx + 8], 0
// 00695ef3  7503                 jne 0x695ef8
// 00695ef5  33c0                 xor eax, eax
// 00695ef7  c3                   ret 
// 00695ef8  b801000000           mov eax, 1
// 00695efd  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEHXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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