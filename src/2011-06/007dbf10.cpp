// roc 2011-06 007dbf10  unit: seg_007d0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dbf10
//
// 007dbf10  53                   push ebx
// 007dbf11  6a00                 push 0
// 007dbf13  57                   push edi
// 007dbf14  56                   push esi
// 007dbf15  bb01000000           mov ebx, 1
// 007dbf1a  e861080000           call 0x7dc780
// 007dbf1f  83c40c               add esp, 0xc
// 007dbf22  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 007dbf26  751f                 jne 0x7dbf47
// 007dbf28  56                   push esi
// 007dbf29  e8f23c0000           call 0x7dfc20
// 007dbf2e  8b4630               mov eax, dword ptr [esi + 0x30]
// 007dbf31  57                   push edi
// 007dbf32  50                   push eax
// 007dbf33  e8986e0100           call 0x7f2dd0
// 007dbf38  6a00                 push 0
// 007dbf3a  57                   push edi
// 007dbf3b  56                   push esi
// 007dbf3c  e83f080000           call 0x7dc780
// 007dbf41  83c418               add esp, 0x18
// 007dbf44  43                   inc ebx
// 007dbf45  ebdb                 jmp 0x7dbf22
// 007dbf47  8bc3                 mov eax, ebx
// 007dbf49  5b                   pop ebx
// 007dbf4a  c3                   ret 
// library lua-5.1.4/lparser.c (function _explist1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
