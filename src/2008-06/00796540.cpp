// from server: 100% by auto
// roc 2008-06 00796540  unit: CXTPRibbonBarMorePopupToolBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796540
//
// 00796540  8bc1                 mov eax, ecx
// 00796542  33c9                 xor ecx, ecx
// 00796544  c70000bb8600         mov dword ptr [eax], 0x86bb00
// 0079654a  894808               mov dword ptr [eax + 8], ecx
// 0079654d  89480c               mov dword ptr [eax + 0xc], ecx
// 00796550  894810               mov dword ptr [eax + 0x10], ecx
// 00796553  894814               mov dword ptr [eax + 0x14], ecx
// 00796556  894804               mov dword ptr [eax + 4], ecx
// 00796559  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonScrollableBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
