// from server: 100% by auto
// roc 2010-06 00737de0  unit: seg_00730000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737de0
//
// 00737de0  83ec64               sub esp, 0x64
// 00737de3  39742468             cmp dword ptr [esp + 0x68], esi
// 00737de7  7506                 jne 0x737def
// 00737de9  33c0                 xor eax, eax
// 00737deb  83c464               add esp, 0x64
// 00737dee  c3                   ret 
// 00737def  56                   push esi
// 00737df0  e8cb9ffeff           call 0x721dc0
// 00737df5  83c404               add esp, 4
// 00737df8  83e800               sub eax, 0
// 00737dfb  7417                 je 0x737e14
// 00737dfd  83e801               sub eax, 1
// 00737e00  7409                 je 0x737e0b
// 00737e02  b803000000           mov eax, 3
// 00737e07  83c464               add esp, 0x64
// 00737e0a  c3                   ret 
// 00737e0b  b801000000           mov eax, 1
// 00737e10  83c464               add esp, 0x64
// 00737e13  c3                   ret 
// 00737e14  8d0424               lea eax, [esp]
// 00737e17  50                   push eax
// 00737e18  6a00                 push 0
// 00737e1a  56                   push esi
// 00737e1b  e8e0b1ffff           call 0x733000
// 00737e20  83c40c               add esp, 0xc
// 00737e23  85c0                 test eax, eax
// 00737e25  7e09                 jle 0x737e30
// 00737e27  b802000000           mov eax, 2
// 00737e2c  83c464               add esp, 0x64
// 00737e2f  c3                   ret 
// 00737e30  56                   push esi
// 00737e31  e81a91feff           call 0x720f50
// 00737e36  83c404               add esp, 4
// 00737e39  f7d8                 neg eax
// 00737e3b  1bc0                 sbb eax, eax
// 00737e3d  83e0fe               and eax, 0xfffffffe
// 00737e40  83c003               add eax, 3
// 00737e43  83c464               add esp, 0x64
// 00737e46  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _costatus)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
