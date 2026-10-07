// roc 2007-08 006acc70  unit: CXTPRibbonBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006acc70
//
// 006acc70  8bc1                 mov eax, ecx
// 006acc72  33c9                 xor ecx, ecx
// 006acc74  894808               mov dword ptr [eax + 8], ecx
// 006acc77  c7400401000000       mov dword ptr [eax + 4], 1
// 006acc7e  89480c               mov dword ptr [eax + 0xc], ecx
// 006acc81  8908                 mov dword ptr [eax], ecx
// 006acc83  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPSoundManager.cpp (function ??0CXTPSoundManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPSoundManager.cpp
