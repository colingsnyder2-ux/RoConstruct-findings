// from server: 100% by auto
// roc 2008-06 00727820  unit: CXTPRibbonBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00727820
//
// 00727820  8bc1                 mov eax, ecx
// 00727822  33c9                 xor ecx, ecx
// 00727824  894808               mov dword ptr [eax + 8], ecx
// 00727827  c7400401000000       mov dword ptr [eax + 4], 1
// 0072782e  89480c               mov dword ptr [eax + 0xc], ecx
// 00727831  8908                 mov dword ptr [eax], ecx
// 00727833  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ??0CXTPSoundManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
