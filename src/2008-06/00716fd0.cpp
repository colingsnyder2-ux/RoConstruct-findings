// from server: 100% by auto
// roc 2008-06 00716fd0  unit: CXTPPropertyGridView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716fd0
//
// 00716fd0  c7019ce08500         mov dword ptr [ecx], 0x85e09c
// 00716fd6  c741548ce08500       mov dword ptr [ecx + 0x54], 0x85e08c
// 00716fdd  e98e800700           jmp 0x78f070
// library xtp-11.2.2/Source\CommandBars\XTPControlScrollBar.cpp (function ??1CXTPControlScrollBarCtrl@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlScrollBar.cpp
