// roc 2008-06 007907a0  unit: PAVCXTShadowWnd::?$CList  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007907a0
//
// 007907a0  51                   push ecx
// 007907a1  e8caffffff           call 0x790770
// 007907a6  8bc8                 mov ecx, eax
// 007907a8  e893feffff           call 0x790640
// 007907ad  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
