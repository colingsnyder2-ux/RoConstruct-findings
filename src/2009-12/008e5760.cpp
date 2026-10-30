// roc 2009-12 008e5760  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5760
//
// 008e5760  56                   push esi
// 008e5761  8bf1                 mov esi, ecx
// 008e5763  8b06                 mov eax, dword ptr [esi]
// 008e5765  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e576b  ffd2                 call edx
// 008e576d  85c0                 test eax, eax
// 008e576f  7411                 je 0x8e5782
// 008e5771  8bce                 mov ecx, esi
// 008e5773  e8f8c0ffff           call 0x8e1870
// 008e5778  8b10                 mov edx, dword ptr [eax]
// 008e577a  5e                   pop esi
// 008e577b  8bc8                 mov ecx, eax
// 008e577d  8b5238               mov edx, dword ptr [edx + 0x38]
// 008e5780  ffe2                 jmp edx
// 008e5782  5e                   pop esi
// 008e5783  c20400               ret 4
// copied from an identical function in another client (function ?SetColorShadow@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp