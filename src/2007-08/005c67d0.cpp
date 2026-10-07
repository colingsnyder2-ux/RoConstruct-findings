// roc 2007-08 005c67d0  unit: lua_exception  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c67d0
//
// 005c67d0  83e800               sub eax, 0
// 005c67d3  743f                 je 0x5c6814
// 005c67d5  83e802               sub eax, 2
// 005c67d8  742f                 je 0x5c6809
// 005c67da  83e801               sub eax, 1
// 005c67dd  7539                 jne 0x5c6818
// 005c67df  f7c100010000         test ecx, 0x100
// 005c67e5  7410                 je 0x5c67f7
// 005c67e7  81e1fffeffff         and ecx, 0xfffffeff
// 005c67ed  33c0                 xor eax, eax
// 005c67ef  3b4a28               cmp ecx, dword ptr [edx + 0x28]
// 005c67f2  0f9cc0               setl al
// 005c67f5  eb0d                 jmp 0x5c6804
// 005c67f7  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 005c67fb  33d2                 xor edx, edx
// 005c67fd  3bc8                 cmp ecx, eax
// 005c67ff  0f9cc2               setl dl
// 005c6802  8bc2                 mov eax, edx
// 005c6804  85c0                 test eax, eax
// 005c6806  7510                 jne 0x5c6818
// 005c6808  c3                   ret 
// 005c6809  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 005c680d  3bc8                 cmp ecx, eax
// 005c680f  7c07                 jl 0x5c6818
// 005c6811  33c0                 xor eax, eax
// 005c6813  c3                   ret 
// 005c6814  85c9                 test ecx, ecx
// 005c6816  75f9                 jne 0x5c6811
// 005c6818  b801000000           mov eax, 1
// 005c681d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _checkArgMode)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
