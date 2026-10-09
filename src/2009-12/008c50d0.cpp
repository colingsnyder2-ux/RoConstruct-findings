// roc 2009-12 008c50d0  unit: CXTPCustomizeToolbarsPage  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c50d0
//
// 008c50d0  53                   push ebx
// 008c50d1  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008c50d7  56                   push esi
// 008c50d8  6a00                 push 0
// 008c50da  6a00                 push 0
// 008c50dc  8bf1                 mov esi, ecx
// 008c50de  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008c50e4  6888010000           push 0x188
// 008c50e9  50                   push eax
// 008c50ea  ffd3                 call ebx
// 008c50ec  83f8ff               cmp eax, -1
// 008c50ef  7469                 je 0x8c515a
// 008c50f1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008c50f7  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008c50fd  57                   push edi
// 008c50fe  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 008c5104  6a00                 push 0
// 008c5106  50                   push eax
// 008c5107  6899010000           push 0x199
// 008c510c  52                   push edx
// 008c510d  ffd3                 call ebx
// 008c510f  85c0                 test eax, eax
// 008c5111  7c43                 jl 0x8c5156
// 008c5113  3b8784000000         cmp eax, dword ptr [edi + 0x84]
// 008c5119  7d3b                 jge 0x8c5156
// 008c511b  50                   push eax
// 008c511c  8bcf                 mov ecx, edi
// 008c511e  e8bdfbf4ff           call 0x814ce0
// 008c5123  8bb888010000         mov edi, dword ptr [eax + 0x188]
// 008c5129  57                   push edi
// 008c512a  8d8efc000000         lea ecx, [esi + 0xfc]
// 008c5130  e8a9edf2ff           call 0x7f3ede
// 008c5135  33c0                 xor eax, eax
// 008c5137  85ff                 test edi, edi
// 008c5139  0f94c0               sete al
// 008c513c  8d8e50010000         lea ecx, [esi + 0x150]
// 008c5142  8bf8                 mov edi, eax
// 008c5144  57                   push edi
// 008c5145  e894edf2ff           call 0x7f3ede
// 008c514a  57                   push edi
// 008c514b  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 008c5151  e888edf2ff           call 0x7f3ede
// 008c5156  5f                   pop edi
// 008c5157  5e                   pop esi
// 008c5158  5b                   pop ebx
// 008c5159  c3                   ret 
// 008c515a  6a00                 push 0
// 008c515c  8d8efc000000         lea ecx, [esi + 0xfc]
// 008c5162  e877edf2ff           call 0x7f3ede
// 008c5167  6a00                 push 0
// 008c5169  8d8e50010000         lea ecx, [esi + 0x150]
// 008c516f  e86aedf2ff           call 0x7f3ede
// 008c5174  6a00                 push 0
// 008c5176  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 008c517c  e85dedf2ff           call 0x7f3ede
// 008c5181  5e                   pop esi
// 008c5182  5b                   pop ebx
// 008c5183  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSelectionChanged@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
