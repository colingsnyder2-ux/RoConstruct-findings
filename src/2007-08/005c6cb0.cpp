// from server: 100% by auto
// roc 2007-08 005c6cb0  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6cb0
//
// 005c6cb0  a900010000           test eax, 0x100
// 005c6cb5  7419                 je 0x5c6cd0
// 005c6cb7  8b5108               mov edx, dword ptr [ecx + 8]
// 005c6cba  25fffeffff           and eax, 0xfffffeff
// 005c6cbf  c1e004               shl eax, 4
// 005c6cc2  03c2                 add eax, edx
// 005c6cc4  83780804             cmp dword ptr [eax + 8], 4
// 005c6cc8  7506                 jne 0x5c6cd0
// 005c6cca  8b00                 mov eax, dword ptr [eax]
// 005c6ccc  83c010               add eax, 0x10
// 005c6ccf  c3                   ret 
// 005c6cd0  b8d8de7900           mov eax, 0x79ded8
// 005c6cd5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _kname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
