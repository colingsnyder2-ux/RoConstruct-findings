// roc 2009-06 0079c190  unit: CXTPNewToolbarDlg  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c190
//
// 0079c190  8bc1                 mov eax, ecx
// 0079c192  33c9                 xor ecx, ecx
// 0079c194  894808               mov dword ptr [eax + 8], ecx
// 0079c197  c7400401000000       mov dword ptr [eax + 4], 1
// 0079c19e  89480c               mov dword ptr [eax + 0xc], ecx
// 0079c1a1  8908                 mov dword ptr [eax], ecx
// 0079c1a3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ??0CXTPSoundManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
