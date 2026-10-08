// from server: 100% by auto
// roc 2009-06 006c6e60  unit: seg_006c0000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6e60
//
// 006c6e60  56                   push esi
// 006c6e61  8b742408             mov esi, dword ptr [esp + 8]
// 006c6e65  6a05                 push 5
// 006c6e67  6a02                 push 2
// 006c6e69  56                   push esi
// 006c6e6a  e8d13dffff           call 0x6bac40
// 006c6e6f  6a00                 push 0
// 006c6e71  e8eafeffff           call 0x6c6d60
// 006c6e76  6a02                 push 2
// 006c6e78  56                   push esi
// 006c6e79  e8c220ffff           call 0x6b8f40
// 006c6e7e  6a01                 push 1
// 006c6e80  56                   push esi
// 006c6e81  e85a21ffff           call 0x6b8fe0
// 006c6e86  83c420               add esp, 0x20
// 006c6e89  85c0                 test eax, eax
// 006c6e8b  7435                 je 0x6c6ec2
// 006c6e8d  6a01                 push 1
// 006c6e8f  56                   push esi
// 006c6e90  e83b22ffff           call 0x6b90d0
// 006c6e95  dc1d08188b00         fcomp qword ptr [0x8b1808]
// 006c6e9b  83c408               add esp, 8
// 006c6e9e  dfe0                 fnstsw ax
// 006c6ea0  f6c444               test ah, 0x44
// 006c6ea3  7a1d                 jp 0x6c6ec2
// 006c6ea5  56                   push esi
// 006c6ea6  e8c526ffff           call 0x6b9570
// 006c6eab  6afe                 push -2
// 006c6ead  56                   push esi
// 006c6eae  e87d1fffff           call 0x6b8e30
// 006c6eb3  6afe                 push -2
// 006c6eb5  56                   push esi
// 006c6eb6  e8552bffff           call 0x6b9a10
// 006c6ebb  83c414               add esp, 0x14
// 006c6ebe  33c0                 xor eax, eax
// 006c6ec0  5e                   pop esi
// 006c6ec1  c3                   ret 
// 006c6ec2  6afe                 push -2
// 006c6ec4  56                   push esi
// 006c6ec5  e8e620ffff           call 0x6b8fb0
// 006c6eca  83c408               add esp, 8
// 006c6ecd  85c0                 test eax, eax
// 006c6ecf  750f                 jne 0x6c6ee0
// 006c6ed1  6afe                 push -2
// 006c6ed3  56                   push esi
// 006c6ed4  e8372bffff           call 0x6b9a10
// 006c6ed9  83c408               add esp, 8
// 006c6edc  85c0                 test eax, eax
// 006c6ede  750e                 jne 0x6c6eee
// 006c6ee0  6840c08e00           push 0x8ec040
// 006c6ee5  56                   push esi
// 006c6ee6  e85533ffff           call 0x6ba240
// 006c6eeb  83c408               add esp, 8
// 006c6eee  b801000000           mov eax, 1
// 006c6ef3  5e                   pop esi
// 006c6ef4  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_setfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
