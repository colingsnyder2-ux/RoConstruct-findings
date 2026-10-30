// from server: 100% by auto
// roc 2011-06 008fa280  unit: CXTPRibbonGroup  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fa280
//
// 008fa280  53                   push ebx
// 008fa281  55                   push ebp
// 008fa282  57                   push edi
// 008fa283  8be9                 mov ebp, ecx
// 008fa285  e826ffffff           call 0x8fa1b0
// 008fa28a  6a01                 push 1
// 008fa28c  33ff                 xor edi, edi
// 008fa28e  57                   push edi
// 008fa28f  8bcd                 mov ecx, ebp
// 008fa291  8bd8                 mov ebx, eax
// 008fa293  e878f8ffff           call 0x8f9b10
// 008fa298  83f802               cmp eax, 2
// 008fa29b  7d06                 jge 0x8fa2a3
// 008fa29d  5f                   pop edi
// 008fa29e  5d                   pop ebp
// 008fa29f  33c0                 xor eax, eax
// 008fa2a1  5b                   pop ebx
// 008fa2a2  c3                   ret 
// 008fa2a3  7447                 je 0x8fa2ec
// 008fa2a5  85db                 test ebx, ebx
// 008fa2a7  7e43                 jle 0x8fa2ec
// 008fa2a9  56                   push esi
// 008fa2aa  8d9b00000000         lea ebx, [ebx]
// 008fa2b0  8d041f               lea eax, [edi + ebx]
// 008fa2b3  99                   cdq 
// 008fa2b4  2bc2                 sub eax, edx
// 008fa2b6  8bf0                 mov esi, eax
// 008fa2b8  6a01                 push 1
// 008fa2ba  d1fe                 sar esi, 1
// 008fa2bc  56                   push esi
// 008fa2bd  8bcd                 mov ecx, ebp
// 008fa2bf  e84cf8ffff           call 0x8f9b10
// 008fa2c4  83f802               cmp eax, 2
// 008fa2c7  7f04                 jg 0x8fa2cd
// 008fa2c9  8bde                 mov ebx, esi
// 008fa2cb  eb06                 jmp 0x8fa2d3
// 008fa2cd  3bfe                 cmp edi, esi
// 008fa2cf  7410                 je 0x8fa2e1
// 008fa2d1  8bfe                 mov edi, esi
// 008fa2d3  3bfb                 cmp edi, ebx
// 008fa2d5  7cd9                 jl 0x8fa2b0
// 008fa2d7  5e                   pop esi
// 008fa2d8  5f                   pop edi
// 008fa2d9  5d                   pop ebp
// 008fa2da  b801000000           mov eax, 1
// 008fa2df  5b                   pop ebx
// 008fa2e0  c3                   ret 
// 008fa2e1  6a01                 push 1
// 008fa2e3  53                   push ebx
// 008fa2e4  8bcd                 mov ecx, ebp
// 008fa2e6  e825f8ffff           call 0x8f9b10
// 008fa2eb  5e                   pop esi
// 008fa2ec  5f                   pop edi
// 008fa2ed  5d                   pop ebp
// 008fa2ee  b801000000           mov eax, 1
// 008fa2f3  5b                   pop ebx
// 008fa2f4  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?_FindBestWrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
