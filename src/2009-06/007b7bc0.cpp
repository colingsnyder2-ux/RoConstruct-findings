// roc 2009-06 007b7bc0  unit: CXTPRibbonBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7bc0
//
// 007b7bc0  83b94402000000       cmp dword ptr [ecx + 0x244], 0
// 007b7bc7  740c                 je 0x7b7bd5
// 007b7bc9  e852feffff           call 0x7b7a20
// 007b7bce  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 007b7bd4  c3                   ret 
// 007b7bd5  b802000000           mov eax, 2
// 007b7bda  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabsHeight@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
