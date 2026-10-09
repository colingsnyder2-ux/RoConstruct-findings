// roc 2009-12 008e3900  unit: PAVCXTShadowWnd::?$CList  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3900
//
// 008e3900  51                   push ecx
// 008e3901  e8caffffff           call 0x8e38d0
// 008e3906  8bc8                 mov ecx, eax
// 008e3908  e893feffff           call 0x8e37a0
// 008e390d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
