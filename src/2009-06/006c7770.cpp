// from server: 100% by auto
// roc 2009-06 006c7770  unit: seg_006c0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7770
//
// 006c7770  83ec64               sub esp, 0x64
// 006c7773  39742468             cmp dword ptr [esp + 0x68], esi
// 006c7777  7506                 jne 0x6c777f
// 006c7779  33c0                 xor eax, eax
// 006c777b  83c464               add esp, 0x64
// 006c777e  c3                   ret 
// 006c777f  56                   push esi
// 006c7780  e86b24ffff           call 0x6b9bf0
// 006c7785  83c404               add esp, 4
// 006c7788  83e800               sub eax, 0
// 006c778b  7417                 je 0x6c77a4
// 006c778d  83e801               sub eax, 1
// 006c7790  7409                 je 0x6c779b
// 006c7792  b803000000           mov eax, 3
// 006c7797  83c464               add esp, 0x64
// 006c779a  c3                   ret 
// 006c779b  b801000000           mov eax, 1
// 006c77a0  83c464               add esp, 0x64
// 006c77a3  c3                   ret 
// 006c77a4  8d0424               lea eax, [esp]
// 006c77a7  50                   push eax
// 006c77a8  6a00                 push 0
// 006c77aa  56                   push esi
// 006c77ab  e8f0040000           call 0x6c7ca0
// 006c77b0  83c40c               add esp, 0xc
// 006c77b3  85c0                 test eax, eax
// 006c77b5  7e09                 jle 0x6c77c0
// 006c77b7  b802000000           mov eax, 2
// 006c77bc  83c464               add esp, 0x64
// 006c77bf  c3                   ret 
// 006c77c0  56                   push esi
// 006c77c1  e8ba15ffff           call 0x6b8d80
// 006c77c6  83c404               add esp, 4
// 006c77c9  f7d8                 neg eax
// 006c77cb  1bc0                 sbb eax, eax
// 006c77cd  83e0fe               and eax, 0xfffffffe
// 006c77d0  83c003               add eax, 3
// 006c77d3  83c464               add esp, 0x64
// 006c77d6  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
