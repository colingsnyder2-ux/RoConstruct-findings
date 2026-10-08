// roc 2012-06 00a1eb40  unit: CXTPRibbonBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1eb40
//
// 00a1eb40  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 00a1eb46  85c0                 test eax, eax
// 00a1eb48  740c                 je 0xa1eb56
// 00a1eb4a  83784400             cmp dword ptr [eax + 0x44], 0
// 00a1eb4e  7406                 je 0xa1eb56
// 00a1eb50  b801000000           mov eax, 1
// 00a1eb55  c3                   ret 
// 00a1eb56  33c0                 xor eax, eax
// 00a1eb58  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsDwmEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
