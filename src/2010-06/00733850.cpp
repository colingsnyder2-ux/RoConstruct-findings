// from server: 100% by auto
// roc 2010-06 00733850  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733850
//
// 00733850  a900010000           test eax, 0x100
// 00733855  7419                 je 0x733870
// 00733857  8b5108               mov edx, dword ptr [ecx + 8]
// 0073385a  25fffeffff           and eax, 0xfffffeff
// 0073385f  c1e004               shl eax, 4
// 00733862  03c2                 add eax, edx
// 00733864  83780804             cmp dword ptr [eax + 8], 4
// 00733868  7506                 jne 0x733870
// 0073386a  8b00                 mov eax, dword ptr [eax]
// 0073386c  83c010               add eax, 0x10
// 0073386f  c3                   ret 
// 00733870  b808b9a100           mov eax, 0xa1b908
// 00733875  c3                   ret 
// library lua-5.1.4/ldebug.c (function _kname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
