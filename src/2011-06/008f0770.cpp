// roc 2011-06 008f0770  unit: PAVCXTShadowWnd::?$CList  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0770
//
// 008f0770  51                   push ecx
// 008f0771  e8caffffff           call 0x8f0740
// 008f0776  8bc8                 mov ecx, eax
// 008f0778  e893feffff           call 0x8f0610
// 008f077d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
