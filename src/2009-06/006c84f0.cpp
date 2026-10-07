// roc 2009-06 006c84f0  unit: seg_006c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c84f0
//
// 006c84f0  a900010000           test eax, 0x100
// 006c84f5  7419                 je 0x6c8510
// 006c84f7  8b5108               mov edx, dword ptr [ecx + 8]
// 006c84fa  25fffeffff           and eax, 0xfffffeff
// 006c84ff  c1e004               shl eax, 4
// 006c8502  03c2                 add eax, edx
// 006c8504  83780804             cmp dword ptr [eax + 8], 4
// 006c8508  7506                 jne 0x6c8510
// 006c850a  8b00                 mov eax, dword ptr [eax]
// 006c850c  83c010               add eax, 0x10
// 006c850f  c3                   ret 
// 006c8510  b800758c00           mov eax, 0x8c7500
// 006c8515  c3                   ret 
// library lua-5.1.4/ldebug.c (function _kname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
