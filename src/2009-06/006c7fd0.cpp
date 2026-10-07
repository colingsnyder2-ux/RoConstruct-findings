// roc 2009-06 006c7fd0  unit: seg_006c0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7fd0
//
// 006c7fd0  83e800               sub eax, 0
// 006c7fd3  743d                 je 0x6c8012
// 006c7fd5  83e802               sub eax, 2
// 006c7fd8  742d                 je 0x6c8007
// 006c7fda  83e801               sub eax, 1
// 006c7fdd  7537                 jne 0x6c8016
// 006c7fdf  f7c100010000         test ecx, 0x100
// 006c7fe5  740e                 je 0x6c7ff5
// 006c7fe7  81e1fffeffff         and ecx, 0xfffffeff
// 006c7fed  3b4a28               cmp ecx, dword ptr [edx + 0x28]
// 006c7ff0  0f9cc0               setl al
// 006c7ff3  eb0d                 jmp 0x6c8002
// 006c7ff5  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c7ff9  33d2                 xor edx, edx
// 006c7ffb  3bc8                 cmp ecx, eax
// 006c7ffd  0f9cc2               setl dl
// 006c8000  8bc2                 mov eax, edx
// 006c8002  85c0                 test eax, eax
// 006c8004  7510                 jne 0x6c8016
// 006c8006  c3                   ret 
// 006c8007  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006c800b  3bc8                 cmp ecx, eax
// 006c800d  7c07                 jl 0x6c8016
// 006c800f  33c0                 xor eax, eax
// 006c8011  c3                   ret 
// 006c8012  85c9                 test ecx, ecx
// 006c8014  75f9                 jne 0x6c800f
// 006c8016  b801000000           mov eax, 1
// 006c801b  c3                   ret 
// library lua-5.1.4/ldebug.c (function _checkArgMode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
