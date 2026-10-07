// roc 2007-08 005cbaf0  unit: seg_005c0000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbaf0
//
// 005cbaf0  56                   push esi
// 005cbaf1  8b742408             mov esi, dword ptr [esp + 8]
// 005cbaf5  6a05                 push 5
// 005cbaf7  6a02                 push 2
// 005cbaf9  56                   push esi
// 005cbafa  e8d137ffff           call 0x5bf2d0
// 005cbaff  e80cffffff           call 0x5cba10
// 005cbb04  6a02                 push 2
// 005cbb06  56                   push esi
// 005cbb07  e8341cffff           call 0x5bd740
// 005cbb0c  6a01                 push 1
// 005cbb0e  56                   push esi
// 005cbb0f  e8cc1cffff           call 0x5bd7e0
// 005cbb14  83c41c               add esp, 0x1c
// 005cbb17  85c0                 test eax, eax
// 005cbb19  7435                 je 0x5cbb50
// 005cbb1b  6a01                 push 1
// 005cbb1d  56                   push esi
// 005cbb1e  e8ad1dffff           call 0x5bd8d0
// 005cbb23  dc1de0fe7800         fcomp qword ptr [0x78fee0]
// 005cbb29  83c408               add esp, 8
// 005cbb2c  dfe0                 fnstsw ax
// 005cbb2e  f6c444               test ah, 0x44
// 005cbb31  7a1d                 jp 0x5cbb50
// 005cbb33  56                   push esi
// 005cbb34  e86722ffff           call 0x5bdda0
// 005cbb39  6afe                 push -2
// 005cbb3b  56                   push esi
// 005cbb3c  e8ef1affff           call 0x5bd630
// 005cbb41  6afe                 push -2
// 005cbb43  56                   push esi
// 005cbb44  e8c726ffff           call 0x5be210
// 005cbb49  83c414               add esp, 0x14
// 005cbb4c  33c0                 xor eax, eax
// 005cbb4e  5e                   pop esi
// 005cbb4f  c3                   ret 
// 005cbb50  6afe                 push -2
// 005cbb52  56                   push esi
// 005cbb53  e8581cffff           call 0x5bd7b0
// 005cbb58  83c408               add esp, 8
// 005cbb5b  85c0                 test eax, eax
// 005cbb5d  750f                 jne 0x5cbb6e
// 005cbb5f  6afe                 push -2
// 005cbb61  56                   push esi
// 005cbb62  e8a926ffff           call 0x5be210
// 005cbb67  83c408               add esp, 8
// 005cbb6a  85c0                 test eax, eax
// 005cbb6c  750e                 jne 0x5cbb7c
// 005cbb6e  6848a37b00           push 0x7ba348
// 005cbb73  56                   push esi
// 005cbb74  e8672dffff           call 0x5be8e0
// 005cbb79  83c408               add esp, 8
// 005cbb7c  b801000000           mov eax, 1
// 005cbb81  5e                   pop esi
// 005cbb82  c3                   ret 
// library lua-5.1.1/lbaselib.c (function _luaB_setfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lbaselib.c
