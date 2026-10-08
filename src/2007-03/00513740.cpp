// roc 2007-03 00513740  unit: seg_00510000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513740
//
// 00513740  53                   push ebx
// 00513741  685c2a7a00           push 0x7a2a5c
// 00513746  8d5e58               lea ebx, [esi + 0x58]
// 00513749  56                   push esi
// 0051374a  b8482a7a00           mov eax, 0x7a2a48
// 0051374f  e83cffffff           call 0x513690
// 00513754  68a02a7a00           push 0x7a2aa0
// 00513759  8d5e68               lea ebx, [esi + 0x68]
// 0051375c  56                   push esi
// 0051375d  b8882a7a00           mov eax, 0x7a2a88
// 00513762  e829ffffff           call 0x513690
// 00513767  687c2a7a00           push 0x7a2a7c
// 0051376c  8d5e5c               lea ebx, [esi + 0x5c]
// 0051376f  56                   push esi
// 00513770  b8682a7a00           mov eax, 0x7a2a68
// 00513775  e816ffffff           call 0x513690
// 0051377a  68582b7a00           push 0x7a2b58
// 0051377f  8d5e6c               lea ebx, [esi + 0x6c]
// 00513782  56                   push esi
// 00513783  b8442b7a00           mov eax, 0x7a2b44
// 00513788  e803ffffff           call 0x513690
// 0051378d  83c420               add esp, 0x20
// 00513790  5b                   pop ebx
// 00513791  c3                   ret 
// library jpeg-6b/jcparam.c (function _std_huff_tables)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
