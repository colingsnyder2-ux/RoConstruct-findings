// from server: 100% by auto
// roc 2008-06 00622fb0  unit: lua_exception  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622fb0
//
// 00622fb0  83e800               sub eax, 0
// 00622fb3  743d                 je 0x622ff2
// 00622fb5  83e802               sub eax, 2
// 00622fb8  742d                 je 0x622fe7
// 00622fba  83e801               sub eax, 1
// 00622fbd  7537                 jne 0x622ff6
// 00622fbf  f7c100010000         test ecx, 0x100
// 00622fc5  740e                 je 0x622fd5
// 00622fc7  81e1fffeffff         and ecx, 0xfffffeff
// 00622fcd  3b4a28               cmp ecx, dword ptr [edx + 0x28]
// 00622fd0  0f9cc0               setl al
// 00622fd3  eb0d                 jmp 0x622fe2
// 00622fd5  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 00622fd9  33d2                 xor edx, edx
// 00622fdb  3bc8                 cmp ecx, eax
// 00622fdd  0f9cc2               setl dl
// 00622fe0  8bc2                 mov eax, edx
// 00622fe2  85c0                 test eax, eax
// 00622fe4  7510                 jne 0x622ff6
// 00622fe6  c3                   ret 
// 00622fe7  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 00622feb  3bc8                 cmp ecx, eax
// 00622fed  7c07                 jl 0x622ff6
// 00622fef  33c0                 xor eax, eax
// 00622ff1  c3                   ret 
// 00622ff2  85c9                 test ecx, ecx
// 00622ff4  75f9                 jne 0x622fef
// 00622ff6  b801000000           mov eax, 1
// 00622ffb  c3                   ret 
// library lua-5.1.4/ldebug.c (function _checkArgMode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
