// from server: 100% by auto
// roc 2011-06 00782d90  unit: seg_00780000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782d90
//
// 00782d90  83ec64               sub esp, 0x64
// 00782d93  39742468             cmp dword ptr [esp + 0x68], esi
// 00782d97  7506                 jne 0x782d9f
// 00782d99  33c0                 xor eax, eax
// 00782d9b  83c464               add esp, 0x64
// 00782d9e  c3                   ret 
// 00782d9f  56                   push esi
// 00782da0  e82b04feff           call 0x7631d0
// 00782da5  83c404               add esp, 4
// 00782da8  83e800               sub eax, 0
// 00782dab  7417                 je 0x782dc4
// 00782dad  83e801               sub eax, 1
// 00782db0  7409                 je 0x782dbb
// 00782db2  b803000000           mov eax, 3
// 00782db7  83c464               add esp, 0x64
// 00782dba  c3                   ret 
// 00782dbb  b801000000           mov eax, 1
// 00782dc0  83c464               add esp, 0x64
// 00782dc3  c3                   ret 
// 00782dc4  8d0424               lea eax, [esp]
// 00782dc7  50                   push eax
// 00782dc8  6a00                 push 0
// 00782dca  56                   push esi
// 00782dcb  e870a2ffff           call 0x77d040
// 00782dd0  83c40c               add esp, 0xc
// 00782dd3  85c0                 test eax, eax
// 00782dd5  7e09                 jle 0x782de0
// 00782dd7  b802000000           mov eax, 2
// 00782ddc  83c464               add esp, 0x64
// 00782ddf  c3                   ret 
// 00782de0  56                   push esi
// 00782de1  e87af5fdff           call 0x762360
// 00782de6  83c404               add esp, 4
// 00782de9  f7d8                 neg eax
// 00782deb  1bc0                 sbb eax, eax
// 00782ded  83e0fe               and eax, 0xfffffffe
// 00782df0  83c003               add eax, 3
// 00782df3  83c464               add esp, 0x64
// 00782df6  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
