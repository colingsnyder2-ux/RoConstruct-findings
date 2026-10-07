// roc 2007-08 00691950  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691950
//
// 00691950  8bc1                 mov eax, ecx
// 00691952  33c9                 xor ecx, ecx
// 00691954  c7006c087d00         mov dword ptr [eax], 0x7d086c
// 0069195a  894804               mov dword ptr [eax + 4], ecx
// 0069195d  894808               mov dword ptr [eax + 8], ecx
// 00691960  894810               mov dword ptr [eax + 0x10], ecx
// 00691963  c7400c00837800       mov dword ptr [eax + 0xc], 0x788300
// 0069196a  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManagerStyle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTThemeManager.cpp
