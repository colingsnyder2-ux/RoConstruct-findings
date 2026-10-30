// from server: 100% by auto
// roc 2007-08 00712ef0  unit: PAVCXTShadowWnd::?$CList  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712ef0
//
// 00712ef0  51                   push ecx
// 00712ef1  e8caffffff           call 0x712ec0
// 00712ef6  8bc8                 mov ecx, eax
// 00712ef8  e893feffff           call 0x712d90
// 00712efd  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
