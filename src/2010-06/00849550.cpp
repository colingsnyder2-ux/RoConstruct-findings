// roc 2010-06 00849550  unit: CXTPRibbonBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849550
//
// 00849550  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 00849556  85c0                 test eax, eax
// 00849558  740c                 je 0x849566
// 0084955a  83784400             cmp dword ptr [eax + 0x44], 0
// 0084955e  7406                 je 0x849566
// 00849560  b801000000           mov eax, 1
// 00849565  c3                   ret 
// 00849566  33c0                 xor eax, eax
// 00849568  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsDwmEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
