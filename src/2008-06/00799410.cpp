// roc 2008-06 00799410  unit: CXTPRibbonControlTab  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799410
//
// 00799410  56                   push esi
// 00799411  8bf1                 mov esi, ecx
// 00799413  8b867cfeffff         mov eax, dword ptr [esi - 0x184]
// 00799419  8b5074               mov edx, dword ptr [eax + 0x74]
// 0079941c  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 00799422  ffd2                 call edx
// 00799424  85c0                 test eax, eax
// 00799426  7416                 je 0x79943e
// 00799428  8b867cffffff         mov eax, dword ptr [esi - 0x84]
// 0079942e  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 00799435  7407                 je 0x79943e
// 00799437  b801000000           mov eax, 1
// 0079943c  5e                   pop esi
// 0079943d  c3                   ret 
// 0079943e  33c0                 xor eax, eax
// 00799440  5e                   pop esi
// 00799441  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?HeaderHasFocus@CXTPRibbonControlTab@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
