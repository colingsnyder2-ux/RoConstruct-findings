// roc 2012-06 00a68ae0  unit: PAVCXTShadowWnd::?$CList  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68ae0
//
// 00a68ae0  51                   push ecx
// 00a68ae1  e8caffffff           call 0xa68ab0
// 00a68ae6  8bc8                 mov ecx, eax
// 00a68ae8  e893feffff           call 0xa68980
// 00a68aed  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
