// roc 2009-06 0062add0  unit: RBX::ArrowTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062add0
//
// 0062add0  803900               cmp byte ptr [ecx], 0
// 0062add3  7533                 jne 0x62ae08
// 0062add5  80790100             cmp byte ptr [ecx + 1], 0
// 0062add9  752d                 jne 0x62ae08
// 0062addb  80790200             cmp byte ptr [ecx + 2], 0
// 0062addf  7527                 jne 0x62ae08
// 0062ade1  80790300             cmp byte ptr [ecx + 3], 0
// 0062ade5  7521                 jne 0x62ae08
// 0062ade7  80790400             cmp byte ptr [ecx + 4], 0
// 0062adeb  751b                 jne 0x62ae08
// 0062aded  80790500             cmp byte ptr [ecx + 5], 0
// 0062adf1  7515                 jne 0x62ae08
// 0062adf3  80790600             cmp byte ptr [ecx + 6], 0
// 0062adf7  750f                 jne 0x62ae08
// 0062adf9  80790700             cmp byte ptr [ecx + 7], 0
// 0062adfd  7509                 jne 0x62ae08
// 0062adff  80790800             cmp byte ptr [ecx + 8], 0
// 0062ae03  7503                 jne 0x62ae08
// 0062ae05  33c0                 xor eax, eax
// 0062ae07  c3                   ret 
// 0062ae08  b801000000           mov eax, 1
// 0062ae0d  c3                   ret 
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