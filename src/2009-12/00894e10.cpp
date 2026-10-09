// roc 2009-12 00894e10  unit: CXTPRibbonBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894e10
//
// 00894e10  83b94402000000       cmp dword ptr [ecx + 0x244], 0
// 00894e17  740c                 je 0x894e25
// 00894e19  e852feffff           call 0x894c70
// 00894e1e  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 00894e24  c3                   ret 
// 00894e25  b802000000           mov eax, 2
// 00894e2a  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTabsHeight@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
