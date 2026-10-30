// from server: 100% by auto
// roc 2007-08 006e0490  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0490
//
// 006e0490  33c0                 xor eax, eax
// 006e0492  394c2404             cmp dword ptr [esp + 4], ecx
// 006e0496  0f94c0               sete al
// 006e0499  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?ContainPane@CXTPDockingPaneBase@@UBEPAU__POSITION@@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
