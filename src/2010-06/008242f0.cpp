// roc 2010-06 008242f0  unit: CXTPNewToolbarDlg  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008242f0
//
// 008242f0  8bc1                 mov eax, ecx
// 008242f2  33c9                 xor ecx, ecx
// 008242f4  894808               mov dword ptr [eax + 8], ecx
// 008242f7  c7400401000000       mov dword ptr [eax + 4], 1
// 008242fe  89480c               mov dword ptr [eax + 0xc], ecx
// 00824301  8908                 mov dword ptr [eax], ecx
// 00824303  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ??0CXTPSoundManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
