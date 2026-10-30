// from server: 100% by auto
// roc 2010-06 00733330  unit: lua_exception  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733330
//
// 00733330  83e800               sub eax, 0
// 00733333  743d                 je 0x733372
// 00733335  83e802               sub eax, 2
// 00733338  742d                 je 0x733367
// 0073333a  83e801               sub eax, 1
// 0073333d  7537                 jne 0x733376
// 0073333f  f7c100010000         test ecx, 0x100
// 00733345  740e                 je 0x733355
// 00733347  81e1fffeffff         and ecx, 0xfffffeff
// 0073334d  3b4a28               cmp ecx, dword ptr [edx + 0x28]
// 00733350  0f9cc0               setl al
// 00733353  eb0d                 jmp 0x733362
// 00733355  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 00733359  33d2                 xor edx, edx
// 0073335b  3bc8                 cmp ecx, eax
// 0073335d  0f9cc2               setl dl
// 00733360  8bc2                 mov eax, edx
// 00733362  85c0                 test eax, eax
// 00733364  7510                 jne 0x733376
// 00733366  c3                   ret 
// 00733367  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0073336b  3bc8                 cmp ecx, eax
// 0073336d  7c07                 jl 0x733376
// 0073336f  33c0                 xor eax, eax
// 00733371  c3                   ret 
// 00733372  85c9                 test ecx, ecx
// 00733374  75f9                 jne 0x73336f
// 00733376  b801000000           mov eax, 1
// 0073337b  c3                   ret 
// library lua-5.1.4/ldebug.c (function _checkArgMode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
