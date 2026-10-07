// roc 2008-06 0070d670  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070d670
//
// 0070d670  8bc1                 mov eax, ecx
// 0070d672  33c9                 xor ecx, ecx
// 0070d674  c70044cf8500         mov dword ptr [eax], 0x85cf44
// 0070d67a  894804               mov dword ptr [eax + 4], ecx
// 0070d67d  894808               mov dword ptr [eax + 8], ecx
// 0070d680  894810               mov dword ptr [eax + 0x10], ecx
// 0070d683  c7400ca0e88000       mov dword ptr [eax + 0xc], 0x80e8a0
// 0070d68a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManagerStyle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
