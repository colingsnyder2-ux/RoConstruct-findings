// roc 2007-03 00693b80  unit: seg_00690000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00693b80
//
// 00693b80  8bc1                 mov eax, ecx
// 00693b82  33c9                 xor ecx, ecx
// 00693b84  894808               mov dword ptr [eax + 8], ecx
// 00693b87  c7400401000000       mov dword ptr [eax + 4], 1
// 00693b8e  89480c               mov dword ptr [eax + 0xc], ecx
// 00693b91  8908                 mov dword ptr [eax], ecx
// 00693b93  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ??0CXTPSoundManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
