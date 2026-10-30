// roc 2010-06 00897c10  unit: CXTShadowHook  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897c10
//
// 00897c10  51                   push ecx
// 00897c11  e8caffffff           call 0x897be0
// 00897c16  8bc8                 mov ecx, eax
// 00897c18  e893feffff           call 0x897ab0
// 00897c1d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
