// roc 2009-06 007b8170  unit: CXTPRibbonBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b8170
//
// 007b8170  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 007b8176  85c0                 test eax, eax
// 007b8178  740c                 je 0x7b8186
// 007b817a  83784400             cmp dword ptr [eax + 0x44], 0
// 007b817e  7406                 je 0x7b8186
// 007b8180  b801000000           mov eax, 1
// 007b8185  c3                   ret 
// 007b8186  33c0                 xor eax, eax
// 007b8188  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsDwmEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
