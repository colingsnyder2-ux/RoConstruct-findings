// from server: 100% by auto
// roc 2008-06 0075d3f0  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d3f0
//
// 0075d3f0  33c0                 xor eax, eax
// 0075d3f2  394c2404             cmp dword ptr [esp + 4], ecx
// 0075d3f6  0f94c0               sete al
// 0075d3f9  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?ContainPane@CXTPDockingPaneBase@@UBEPAU__POSITION@@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
