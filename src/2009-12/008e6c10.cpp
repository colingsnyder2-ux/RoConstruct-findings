// roc 2009-12 008e6c10  unit: CXTCaptionPopupWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6c10
//
// 008e6c10  837c240401           cmp dword ptr [esp + 4], 1
// 008e6c15  750d                 jne 0x8e6c24
// 008e6c17  8b01                 mov eax, dword ptr [ecx]
// 008e6c19  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008e6c1f  ffd2                 call edx
// 008e6c21  c20400               ret 4
// 008e6c24  e807d2f0ff           call 0x7f3e30
// 008e6c29  c20400               ret 4
// copied from an identical function in another client (function ?OnTimer@CXTCaptionPopupWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp