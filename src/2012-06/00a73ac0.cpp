// from server: 100% by auto
// roc 2012-06 00a73ac0  unit: CXTPRibbonBarMorePopupToolBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a73ac0
//
// 00a73ac0  8bc1                 mov eax, ecx
// 00a73ac2  33c9                 xor ecx, ecx
// 00a73ac4  c7002072c200         mov dword ptr [eax], 0xc27220
// 00a73aca  894808               mov dword ptr [eax + 8], ecx
// 00a73acd  89480c               mov dword ptr [eax + 0xc], ecx
// 00a73ad0  894810               mov dword ptr [eax + 0x10], ecx
// 00a73ad3  894814               mov dword ptr [eax + 0x14], ecx
// 00a73ad6  894804               mov dword ptr [eax + 4], ecx
// 00a73ad9  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonScrollableBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonPopups.cpp
