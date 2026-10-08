// from server: 100% by auto
// roc 2008-06 0079a8d0  unit: CXTPRibbonSystemPopupBarPage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a8d0
//
// 0079a8d0  56                   push esi
// 0079a8d1  8bf1                 mov esi, ecx
// 0079a8d3  e8e86df5ff           call 0x6f16c0
// 0079a8d8  c7060cd58600         mov dword ptr [esi], 0x86d50c
// 0079a8de  c74654fcd48600       mov dword ptr [esi + 0x54], 0x86d4fc
// 0079a8e5  c7465c9cd48600       mov dword ptr [esi + 0x5c], 0x86d49c
// 0079a8ec  8bc6                 mov eax, esi
// 0079a8ee  5e                   pop esi
// 0079a8ef  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBoxExt.cpp
