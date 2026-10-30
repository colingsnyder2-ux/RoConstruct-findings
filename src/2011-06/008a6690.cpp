// roc 2011-06 008a6690  unit: CXTPRibbonBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6690
//
// 008a6690  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 008a6696  85c0                 test eax, eax
// 008a6698  740c                 je 0x8a66a6
// 008a669a  83784400             cmp dword ptr [eax + 0x44], 0
// 008a669e  7406                 je 0x8a66a6
// 008a66a0  b801000000           mov eax, 1
// 008a66a5  c3                   ret 
// 008a66a6  33c0                 xor eax, eax
// 008a66a8  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsDwmEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
