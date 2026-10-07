// roc 2007-08 00615640  unit: seg_00610000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00615640
//
// 00615640  53                   push ebx
// 00615641  8b5830               mov ebx, dword ptr [eax + 0x30]
// 00615644  56                   push esi
// 00615645  8b7314               mov esi, dword ptr [ebx + 0x14]
// 00615648  57                   push edi
// 00615649  33ff                 xor edi, edi
// 0061564b  85f6                 test esi, esi
// 0061564d  7413                 je 0x615662
// 0061564f  90                   nop 
// 00615650  807e0a00             cmp byte ptr [esi + 0xa], 0
// 00615654  751a                 jne 0x615670
// 00615656  0fb64e09             movzx ecx, byte ptr [esi + 9]
// 0061565a  8b36                 mov esi, dword ptr [esi]
// 0061565c  0bf9                 or edi, ecx
// 0061565e  85f6                 test esi, esi
// 00615660  75ee                 jne 0x615650
// 00615662  6848357c00           push 0x7c3548
// 00615667  50                   push eax
// 00615668  e8531f0000           call 0x6175c0
// 0061566d  83c408               add esp, 8
// 00615670  85ff                 test edi, edi
// 00615672  7414                 je 0x615688
// 00615674  0fb65608             movzx edx, byte ptr [esi + 8]
// 00615678  6a00                 push 0
// 0061567a  6a00                 push 0
// 0061567c  52                   push edx
// 0061567d  6a23                 push 0x23
// 0061567f  53                   push ebx
// 00615680  e8fb360100           call 0x628d80
// 00615685  83c414               add esp, 0x14
// 00615688  53                   push ebx
// 00615689  e882380100           call 0x628f10
// 0061568e  50                   push eax
// 0061568f  83c604               add esi, 4
// 00615692  56                   push esi
// 00615693  53                   push ebx
// 00615694  e887310100           call 0x628820
// 00615699  83c410               add esp, 0x10
// 0061569c  5f                   pop edi
// 0061569d  5e                   pop esi
// 0061569e  5b                   pop ebx
// 0061569f  c3                   ret 
// library lua-5.1.4/lparser.c (function _breakstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
