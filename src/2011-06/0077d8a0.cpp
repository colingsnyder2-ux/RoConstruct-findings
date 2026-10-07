// roc 2011-06 0077d8a0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d8a0
//
// 0077d8a0  a900010000           test eax, 0x100
// 0077d8a5  7419                 je 0x77d8c0
// 0077d8a7  8b5108               mov edx, dword ptr [ecx + 8]
// 0077d8aa  25fffeffff           and eax, 0xfffffeff
// 0077d8af  c1e004               shl eax, 4
// 0077d8b2  03c2                 add eax, edx
// 0077d8b4  83780804             cmp dword ptr [eax + 8], 4
// 0077d8b8  7506                 jne 0x77d8c0
// 0077d8ba  8b00                 mov eax, dword ptr [eax]
// 0077d8bc  83c010               add eax, 0x10
// 0077d8bf  c3                   ret 
// 0077d8c0  b8d0bca700           mov eax, 0xa7bcd0
// 0077d8c5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _kname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
