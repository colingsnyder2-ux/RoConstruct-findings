// roc 2009-12 008e5790  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5790
//
// 008e5790  56                   push esi
// 008e5791  8bf1                 mov esi, ecx
// 008e5793  8b06                 mov eax, dword ptr [esi]
// 008e5795  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e579b  ffd2                 call edx
// 008e579d  85c0                 test eax, eax
// 008e579f  7411                 je 0x8e57b2
// 008e57a1  8bce                 mov ecx, esi
// 008e57a3  e8c8c0ffff           call 0x8e1870
// 008e57a8  8b10                 mov edx, dword ptr [eax]
// 008e57aa  5e                   pop esi
// 008e57ab  8bc8                 mov ecx, eax
// 008e57ad  8b523c               mov edx, dword ptr [edx + 0x3c]
// 008e57b0  ffe2                 jmp edx
// 008e57b2  5e                   pop esi
// 008e57b3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorText@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp