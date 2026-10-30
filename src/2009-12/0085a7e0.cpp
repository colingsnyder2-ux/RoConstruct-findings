// roc 2009-12 0085a7e0  unit: CXTPStatusBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a7e0
//
// 0085a7e0  8b89c8000000         mov ecx, dword ptr [ecx + 0xc8]
// 0085a7e6  85c9                 test ecx, ecx
// 0085a7e8  7405                 je 0x85a7ef
// 0085a7ea  e9119ffbff           jmp 0x814700
// 0085a7ef  e9bc5cfbff           jmp 0x8104b0
// copied from an identical function in another client (function ?GetImageManager@CXTPStatusBar@@QBEPAVCXTPImageManager@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp