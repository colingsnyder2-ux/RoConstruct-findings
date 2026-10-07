// roc 2010-06 00780650  unit: seg_00780000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00780650
//
// 00780650  53                   push ebx
// 00780651  8b5830               mov ebx, dword ptr [eax + 0x30]
// 00780654  56                   push esi
// 00780655  8b7314               mov esi, dword ptr [ebx + 0x14]
// 00780658  57                   push edi
// 00780659  33ff                 xor edi, edi
// 0078065b  85f6                 test esi, esi
// 0078065d  7413                 je 0x780672
// 0078065f  90                   nop 
// 00780660  807e0a00             cmp byte ptr [esi + 0xa], 0
// 00780664  751a                 jne 0x780680
// 00780666  0fb64e09             movzx ecx, byte ptr [esi + 9]
// 0078066a  8b36                 mov esi, dword ptr [esi]
// 0078066c  0bf9                 or edi, ecx
// 0078066e  85f6                 test esi, esi
// 00780670  75ee                 jne 0x780660
// 00780672  682832a500           push 0xa53228
// 00780677  50                   push eax
// 00780678  e8131f0000           call 0x782590
// 0078067d  83c408               add esp, 8
// 00780680  85ff                 test edi, edi
// 00780682  7414                 je 0x780698
// 00780684  0fb65608             movzx edx, byte ptr [esi + 8]
// 00780688  6a00                 push 0
// 0078068a  6a00                 push 0
// 0078068c  52                   push edx
// 0078068d  6a23                 push 0x23
// 0078068f  53                   push ebx
// 00780690  e8cbf40000           call 0x78fb60
// 00780695  83c414               add esp, 0x14
// 00780698  53                   push ebx
// 00780699  e852f60000           call 0x78fcf0
// 0078069e  50                   push eax
// 0078069f  83c604               add esi, 4
// 007806a2  56                   push esi
// 007806a3  53                   push ebx
// 007806a4  e887ef0000           call 0x78f630
// 007806a9  83c410               add esp, 0x10
// 007806ac  5f                   pop edi
// 007806ad  5e                   pop esi
// 007806ae  5b                   pop ebx
// 007806af  c3                   ret 
// library lua-5.1.4/lparser.c (function _breakstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
