// roc 2010-06 00601550  unit: RBX::ArrowTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601550
//
// 00601550  803900               cmp byte ptr [ecx], 0
// 00601553  7533                 jne 0x601588
// 00601555  80790100             cmp byte ptr [ecx + 1], 0
// 00601559  752d                 jne 0x601588
// 0060155b  80790200             cmp byte ptr [ecx + 2], 0
// 0060155f  7527                 jne 0x601588
// 00601561  80790300             cmp byte ptr [ecx + 3], 0
// 00601565  7521                 jne 0x601588
// 00601567  80790400             cmp byte ptr [ecx + 4], 0
// 0060156b  751b                 jne 0x601588
// 0060156d  80790500             cmp byte ptr [ecx + 5], 0
// 00601571  7515                 jne 0x601588
// 00601573  80790600             cmp byte ptr [ecx + 6], 0
// 00601577  750f                 jne 0x601588
// 00601579  80790700             cmp byte ptr [ecx + 7], 0
// 0060157d  7509                 jne 0x601588
// 0060157f  80790800             cmp byte ptr [ecx + 8], 0
// 00601583  7503                 jne 0x601588
// 00601585  33c0                 xor eax, eax
// 00601587  c3                   ret 
// 00601588  b801000000           mov eax, 1
// 0060158d  c3                   ret 
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