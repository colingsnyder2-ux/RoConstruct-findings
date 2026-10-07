// roc 2012-06 00a725b0  unit: CXTPRibbonGroup  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a725b0
//
// 00a725b0  53                   push ebx
// 00a725b1  55                   push ebp
// 00a725b2  57                   push edi
// 00a725b3  8be9                 mov ebp, ecx
// 00a725b5  e826ffffff           call 0xa724e0
// 00a725ba  6a01                 push 1
// 00a725bc  33ff                 xor edi, edi
// 00a725be  57                   push edi
// 00a725bf  8bcd                 mov ecx, ebp
// 00a725c1  8bd8                 mov ebx, eax
// 00a725c3  e848f8ffff           call 0xa71e10
// 00a725c8  83f802               cmp eax, 2
// 00a725cb  7d06                 jge 0xa725d3
// 00a725cd  5f                   pop edi
// 00a725ce  5d                   pop ebp
// 00a725cf  33c0                 xor eax, eax
// 00a725d1  5b                   pop ebx
// 00a725d2  c3                   ret 
// 00a725d3  7447                 je 0xa7261c
// 00a725d5  85db                 test ebx, ebx
// 00a725d7  7e43                 jle 0xa7261c
// 00a725d9  56                   push esi
// 00a725da  8d9b00000000         lea ebx, [ebx]
// 00a725e0  8d041f               lea eax, [edi + ebx]
// 00a725e3  99                   cdq 
// 00a725e4  2bc2                 sub eax, edx
// 00a725e6  8bf0                 mov esi, eax
// 00a725e8  6a01                 push 1
// 00a725ea  d1fe                 sar esi, 1
// 00a725ec  56                   push esi
// 00a725ed  8bcd                 mov ecx, ebp
// 00a725ef  e81cf8ffff           call 0xa71e10
// 00a725f4  83f802               cmp eax, 2
// 00a725f7  7f04                 jg 0xa725fd
// 00a725f9  8bde                 mov ebx, esi
// 00a725fb  eb06                 jmp 0xa72603
// 00a725fd  3bfe                 cmp edi, esi
// 00a725ff  7410                 je 0xa72611
// 00a72601  8bfe                 mov edi, esi
// 00a72603  3bfb                 cmp edi, ebx
// 00a72605  7cd9                 jl 0xa725e0
// 00a72607  5e                   pop esi
// 00a72608  5f                   pop edi
// 00a72609  5d                   pop ebp
// 00a7260a  b801000000           mov eax, 1
// 00a7260f  5b                   pop ebx
// 00a72610  c3                   ret 
// 00a72611  6a01                 push 1
// 00a72613  53                   push ebx
// 00a72614  8bcd                 mov ecx, ebp
// 00a72616  e8f5f7ffff           call 0xa71e10
// 00a7261b  5e                   pop esi
// 00a7261c  5f                   pop edi
// 00a7261d  5d                   pop ebp
// 00a7261e  b801000000           mov eax, 1
// 00a72623  5b                   pop ebx
// 00a72624  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?_FindBestWrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
