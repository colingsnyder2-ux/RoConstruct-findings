// from server: 100% by auto
// roc 2011-06 008fb790  unit: CXTPRibbonBarMorePopupToolBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fb790
//
// 008fb790  8bc1                 mov eax, ecx
// 008fb792  33c9                 xor ecx, ecx
// 008fb794  c70098bbad00         mov dword ptr [eax], 0xadbb98
// 008fb79a  894808               mov dword ptr [eax + 8], ecx
// 008fb79d  89480c               mov dword ptr [eax + 0xc], ecx
// 008fb7a0  894810               mov dword ptr [eax + 0x10], ecx
// 008fb7a3  894814               mov dword ptr [eax + 0x14], ecx
// 008fb7a6  894804               mov dword ptr [eax + 4], ecx
// 008fb7a9  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonScrollableBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonPopups.cpp
