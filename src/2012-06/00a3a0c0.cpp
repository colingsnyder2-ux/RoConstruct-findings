// roc 2012-06 00a3a0c0  unit: CXTPDockingPane  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a0c0
//
// 00a3a0c0  33c0                 xor eax, eax
// 00a3a0c2  394c2404             cmp dword ptr [esp + 4], ecx
// 00a3a0c6  0f94c0               sete al
// 00a3a0c9  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPTaskDialogClient.cpp (function ?IsEqual@CXTPMarkupObject@@UBEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPTaskDialogClient.cpp
