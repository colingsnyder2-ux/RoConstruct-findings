// roc 2009-06 00783b00  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783b00
//
// 00783b00  f6810801000008       test byte ptr [ecx + 0x108], 8
// 00783b07  7408                 je 0x783b11
// 00783b09  b812000000           mov eax, 0x12
// 00783b0e  c20800               ret 8
// 00783b11  e8f254f9ff           call 0x719008
// 00783b16  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTSplitterWnd@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1