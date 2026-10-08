// from server: 100% by auto
// roc 2008-06 00722260  unit: CXTPRibbonBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722260
//
// 00722260  83b94402000000       cmp dword ptr [ecx + 0x244], 0
// 00722267  740c                 je 0x722275
// 00722269  e852feffff           call 0x7220c0
// 0072226e  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 00722274  c3                   ret 
// 00722275  b802000000           mov eax, 2
// 0072227a  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabsHeight@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
