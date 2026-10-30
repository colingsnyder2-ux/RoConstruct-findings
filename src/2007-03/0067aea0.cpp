// roc 2007-03 0067aea0  unit: seg_00670000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067aea0
//
// 0067aea0  f6810801000008       test byte ptr [ecx + 0x108], 8
// 0067aea7  7408                 je 0x67aeb1
// 0067aea9  b812000000           mov eax, 0x12
// 0067aeae  c20800               ret 8
// 0067aeb1  e81c38faff           call 0x61e6d2
// 0067aeb6  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTSplitterWnd@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1