// roc 2008-06 00623480  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623480
//
// 00623480  a900010000           test eax, 0x100
// 00623485  7419                 je 0x6234a0
// 00623487  8b5108               mov edx, dword ptr [ecx + 8]
// 0062348a  25fffeffff           and eax, 0xfffffeff
// 0062348f  c1e004               shl eax, 4
// 00623492  03c2                 add eax, edx
// 00623494  83780804             cmp dword ptr [eax + 8], 4
// 00623498  7506                 jne 0x6234a0
// 0062349a  8b00                 mov eax, dword ptr [eax]
// 0062349c  83c010               add eax, 0x10
// 0062349f  c3                   ret 
// 006234a0  b8109e8100           mov eax, 0x819e10
// 006234a5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _kname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
