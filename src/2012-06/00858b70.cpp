// from server: 100% by auto
// roc 2012-06 00858b70  unit: seg_00850000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858b70
//
// 00858b70  83ec64               sub esp, 0x64
// 00858b73  39742468             cmp dword ptr [esp + 0x68], esi
// 00858b77  7506                 jne 0x858b7f
// 00858b79  33c0                 xor eax, eax
// 00858b7b  83c464               add esp, 0x64
// 00858b7e  c3                   ret 
// 00858b7f  56                   push esi
// 00858b80  e8db9dfdff           call 0x832960
// 00858b85  83c404               add esp, 4
// 00858b88  83e800               sub eax, 0
// 00858b8b  7417                 je 0x858ba4
// 00858b8d  83e801               sub eax, 1
// 00858b90  7409                 je 0x858b9b
// 00858b92  b803000000           mov eax, 3
// 00858b97  83c464               add esp, 0x64
// 00858b9a  c3                   ret 
// 00858b9b  b801000000           mov eax, 1
// 00858ba0  83c464               add esp, 0x64
// 00858ba3  c3                   ret 
// 00858ba4  8d0424               lea eax, [esp]
// 00858ba7  50                   push eax
// 00858ba8  6a00                 push 0
// 00858baa  56                   push esi
// 00858bab  e8b077ffff           call 0x850360
// 00858bb0  83c40c               add esp, 0xc
// 00858bb3  85c0                 test eax, eax
// 00858bb5  7e09                 jle 0x858bc0
// 00858bb7  b802000000           mov eax, 2
// 00858bbc  83c464               add esp, 0x64
// 00858bbf  c3                   ret 
// 00858bc0  56                   push esi
// 00858bc1  e82a8ffdff           call 0x831af0
// 00858bc6  83c404               add esp, 4
// 00858bc9  f7d8                 neg eax
// 00858bcb  1bc0                 sbb eax, eax
// 00858bcd  83e0fe               and eax, 0xfffffffe
// 00858bd0  83c003               add eax, 3
// 00858bd3  83c464               add esp, 0x64
// 00858bd6  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
