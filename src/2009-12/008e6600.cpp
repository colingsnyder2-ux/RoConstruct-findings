// roc 2009-12 008e6600  unit: CXTCaptionPopupWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6600
//
// 008e6600  56                   push esi
// 008e6601  8bf1                 mov esi, ecx
// 008e6603  8b06                 mov eax, dword ptr [esi]
// 008e6605  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008e660b  ffd2                 call edx
// 008e660d  8bce                 mov ecx, esi
// 008e660f  5e                   pop esi
// 008e6610  e907ddf0ff           jmp 0x7f431c
// copied from an identical function in another client (function ?OnDestroy@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp