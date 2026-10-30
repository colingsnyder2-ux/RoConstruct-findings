// roc 2012-06 009f99c0  unit: CXTPDockingPaneAutoHidePanel  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f99c0
//
// 009f99c0  8bc1                 mov eax, ecx
// 009f99c2  33c9                 xor ecx, ecx
// 009f99c4  894808               mov dword ptr [eax + 8], ecx
// 009f99c7  c7400401000000       mov dword ptr [eax + 4], 1
// 009f99ce  89480c               mov dword ptr [eax + 0xc], ecx
// 009f99d1  8908                 mov dword ptr [eax], ecx
// 009f99d3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ??0CXTPSoundManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
