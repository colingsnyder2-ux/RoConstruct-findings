// roc 2010-06 00848fa0  unit: CXTPRibbonBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848fa0
//
// 00848fa0  83b94402000000       cmp dword ptr [ecx + 0x244], 0
// 00848fa7  740c                 je 0x848fb5
// 00848fa9  e852feffff           call 0x848e00
// 00848fae  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 00848fb4  c3                   ret 
// 00848fb5  b802000000           mov eax, 2
// 00848fba  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabsHeight@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
