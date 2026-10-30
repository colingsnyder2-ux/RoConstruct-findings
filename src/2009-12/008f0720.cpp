// roc 2009-12 008f0720  unit: CXTPRibbonControlTab  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0720
//
// 008f0720  56                   push esi
// 008f0721  8bf1                 mov esi, ecx
// 008f0723  8b867cfeffff         mov eax, dword ptr [esi - 0x184]
// 008f0729  8b5074               mov edx, dword ptr [eax + 0x74]
// 008f072c  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 008f0732  ffd2                 call edx
// 008f0734  85c0                 test eax, eax
// 008f0736  7416                 je 0x8f074e
// 008f0738  8b867cffffff         mov eax, dword ptr [esi - 0x84]
// 008f073e  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 008f0745  7407                 je 0x8f074e
// 008f0747  b801000000           mov eax, 1
// 008f074c  5e                   pop esi
// 008f074d  c3                   ret 
// 008f074e  33c0                 xor eax, eax
// 008f0750  5e                   pop esi
// 008f0751  c3                   ret 
// copied from an identical function in another client (function ?HeaderHasFocus@CXTPRibbonControlTab@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp