// roc 2011-06 008a60e0  unit: CXTPRibbonBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a60e0
//
// 008a60e0  83b94402000000       cmp dword ptr [ecx + 0x244], 0
// 008a60e7  740c                 je 0x8a60f5
// 008a60e9  e852feffff           call 0x8a5f40
// 008a60ee  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 008a60f4  c3                   ret 
// 008a60f5  b802000000           mov eax, 2
// 008a60fa  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabsHeight@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
