// roc 2007-03 00704c70  unit: seg_00700000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704c70
//
// 00704c70  51                   push ecx
// 00704c71  e89aecffff           call 0x703910
// 00704c76  8bc8                 mov ecx, eax
// 00704c78  e883ffffff           call 0x704c00
// 00704c7d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?OnSelfDestroy@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
