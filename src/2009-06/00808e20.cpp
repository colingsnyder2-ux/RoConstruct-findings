// roc 2009-06 00808e20  unit: CXTShadowHook  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808e20
//
// 00808e20  51                   push ecx
// 00808e21  e8caffffff           call 0x808df0
// 00808e26  8bc8                 mov ecx, eax
// 00808e28  e893feffff           call 0x808cc0
// 00808e2d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
