// roc 2012-06 00a1e590  unit: CXTPRibbonBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e590
//
// 00a1e590  83b94402000000       cmp dword ptr [ecx + 0x244], 0
// 00a1e597  740c                 je 0xa1e5a5
// 00a1e599  e852feffff           call 0xa1e3f0
// 00a1e59e  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 00a1e5a4  c3                   ret 
// 00a1e5a5  b802000000           mov eax, 2
// 00a1e5aa  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabsHeight@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
