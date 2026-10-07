// roc 2008-06 00722810  unit: CXTPRibbonBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722810
//
// 00722810  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 00722816  85c0                 test eax, eax
// 00722818  740c                 je 0x722826
// 0072281a  83784400             cmp dword ptr [eax + 0x44], 0
// 0072281e  7406                 je 0x722826
// 00722820  b801000000           mov eax, 1
// 00722825  c3                   ret 
// 00722826  33c0                 xor eax, eax
// 00722828  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsDwmEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
