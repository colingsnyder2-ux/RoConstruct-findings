// roc 2011-06 008f8130  unit: CXTPRibbonTab  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8130
//
// 008f8130  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 008f8136  56                   push esi
// 008f8137  8b7128               mov esi, dword ptr [ecx + 0x28]
// 008f813a  33c0                 xor eax, eax
// 008f813c  57                   push edi
// 008f813d  85f6                 test esi, esi
// 008f813f  7e20                 jle 0x8f8161
// 008f8141  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f8145  85c0                 test eax, eax
// 008f8147  7c0c                 jl 0x8f8155
// 008f8149  3bc6                 cmp eax, esi
// 008f814b  7d08                 jge 0x8f8155
// 008f814d  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008f8150  8b1482               mov edx, dword ptr [edx + eax*4]
// 008f8153  eb02                 jmp 0x8f8157
// 008f8155  33d2                 xor edx, edx
// 008f8157  397a60               cmp dword ptr [edx + 0x60], edi
// 008f815a  740c                 je 0x8f8168
// 008f815c  40                   inc eax
// 008f815d  3bc6                 cmp eax, esi
// 008f815f  7ce4                 jl 0x8f8145
// 008f8161  5f                   pop edi
// 008f8162  33c0                 xor eax, eax
// 008f8164  5e                   pop esi
// 008f8165  c20400               ret 4
// 008f8168  85c0                 test eax, eax
// 008f816a  7cf5                 jl 0x8f8161
// 008f816c  3bc6                 cmp eax, esi
// 008f816e  7df1                 jge 0x8f8161
// 008f8170  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008f8173  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008f8176  5f                   pop edi
// 008f8177  5e                   pop esi
// 008f8178  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTab.cpp (function ?FindGroup@CXTPRibbonTab@@QBEPAVCXTPRibbonGroup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTab.cpp
