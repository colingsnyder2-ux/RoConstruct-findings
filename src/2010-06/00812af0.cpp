// roc 2010-06 00812af0  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812af0
//
// 00812af0  f6810801000008       test byte ptr [ecx + 0x108], 8
// 00812af7  7408                 je 0x812b01
// 00812af9  b812000000           mov eax, 0x12
// 00812afe  c20800               ret 8
// 00812b01  e86a54f9ff           call 0x7a7f70
// 00812b06  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTSplitterWnd@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1