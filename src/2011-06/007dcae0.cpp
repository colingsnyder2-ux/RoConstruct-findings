// from server: 100% by auto
// roc 2011-06 007dcae0  unit: seg_007d0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dcae0
//
// 007dcae0  53                   push ebx
// 007dcae1  8b5830               mov ebx, dword ptr [eax + 0x30]
// 007dcae4  56                   push esi
// 007dcae5  8b7314               mov esi, dword ptr [ebx + 0x14]
// 007dcae8  57                   push edi
// 007dcae9  33ff                 xor edi, edi
// 007dcaeb  85f6                 test esi, esi
// 007dcaed  7413                 je 0x7dcb02
// 007dcaef  90                   nop 
// 007dcaf0  807e0a00             cmp byte ptr [esi + 0xa], 0
// 007dcaf4  751a                 jne 0x7dcb10
// 007dcaf6  0fb64e09             movzx ecx, byte ptr [esi + 9]
// 007dcafa  8b36                 mov esi, dword ptr [esi]
// 007dcafc  0bf9                 or edi, ecx
// 007dcafe  85f6                 test esi, esi
// 007dcb00  75ee                 jne 0x7dcaf0
// 007dcb02  681ce3ab00           push 0xabe31c
// 007dcb07  50                   push eax
// 007dcb08  e8631f0000           call 0x7dea70
// 007dcb0d  83c408               add esp, 8
// 007dcb10  85ff                 test edi, edi
// 007dcb12  7414                 je 0x7dcb28
// 007dcb14  0fb65608             movzx edx, byte ptr [esi + 8]
// 007dcb18  6a00                 push 0
// 007dcb1a  6a00                 push 0
// 007dcb1c  52                   push edx
// 007dcb1d  6a23                 push 0x23
// 007dcb1f  53                   push ebx
// 007dcb20  e88b5c0100           call 0x7f27b0
// 007dcb25  83c414               add esp, 0x14
// 007dcb28  53                   push ebx
// 007dcb29  e8125e0100           call 0x7f2940
// 007dcb2e  50                   push eax
// 007dcb2f  83c604               add esi, 4
// 007dcb32  56                   push esi
// 007dcb33  53                   push ebx
// 007dcb34  e817570100           call 0x7f2250
// 007dcb39  83c410               add esp, 0x10
// 007dcb3c  5f                   pop edi
// 007dcb3d  5e                   pop esi
// 007dcb3e  5b                   pop ebx
// 007dcb3f  c3                   ret 
// library lua-5.1.4/lparser.c (function _breakstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
