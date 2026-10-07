// roc 2012-06 009e65c0  unit: CSelectionCaption  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e65c0
//
// 009e65c0  8bc1                 mov eax, ecx
// 009e65c2  33c9                 xor ecx, ecx
// 009e65c4  c7004c78c100         mov dword ptr [eax], 0xc1784c
// 009e65ca  894804               mov dword ptr [eax + 4], ecx
// 009e65cd  894808               mov dword ptr [eax + 8], ecx
// 009e65d0  894810               mov dword ptr [eax + 0x10], ecx
// 009e65d3  c7400c506cb400       mov dword ptr [eax + 0xc], 0xb46c50
// 009e65da  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTThemeManager.cpp (function ??0CXTThemeManagerStyle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTThemeManager.cpp
