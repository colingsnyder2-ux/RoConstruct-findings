// roc 2012-06 00939ff0  unit: seg_00930000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00939ff0
//
// 00939ff0  53                   push ebx
// 00939ff1  8b5830               mov ebx, dword ptr [eax + 0x30]
// 00939ff4  56                   push esi
// 00939ff5  8b7314               mov esi, dword ptr [ebx + 0x14]
// 00939ff8  57                   push edi
// 00939ff9  33ff                 xor edi, edi
// 00939ffb  85f6                 test esi, esi
// 00939ffd  7413                 je 0x93a012
// 00939fff  90                   nop 
// 0093a000  807e0a00             cmp byte ptr [esi + 0xa], 0
// 0093a004  751a                 jne 0x93a020
// 0093a006  0fb64e09             movzx ecx, byte ptr [esi + 9]
// 0093a00a  8b36                 mov esi, dword ptr [esi]
// 0093a00c  0bf9                 or edi, ecx
// 0093a00e  85f6                 test esi, esi
// 0093a010  75ee                 jne 0x93a000
// 0093a012  681cfdbf00           push 0xbffd1c
// 0093a017  50                   push eax
// 0093a018  e8f3d1ffff           call 0x937210
// 0093a01d  83c408               add esp, 8
// 0093a020  85ff                 test edi, edi
// 0093a022  7414                 je 0x93a038
// 0093a024  0fb65608             movzx edx, byte ptr [esi + 8]
// 0093a028  6a00                 push 0
// 0093a02a  6a00                 push 0
// 0093a02c  52                   push edx
// 0093a02d  6a23                 push 0x23
// 0093a02f  53                   push ebx
// 0093a030  e81bd70200           call 0x967750
// 0093a035  83c414               add esp, 0x14
// 0093a038  53                   push ebx
// 0093a039  e8a2d80200           call 0x9678e0
// 0093a03e  50                   push eax
// 0093a03f  83c604               add esi, 4
// 0093a042  56                   push esi
// 0093a043  53                   push ebx
// 0093a044  e8a7d10200           call 0x9671f0
// 0093a049  83c410               add esp, 0x10
// 0093a04c  5f                   pop edi
// 0093a04d  5e                   pop esi
// 0093a04e  5b                   pop ebx
// 0093a04f  c3                   ret 
// library lua-5.1.4/lparser.c (function _breakstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
