// roc 2009-12 008e5730  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5730
//
// 008e5730  56                   push esi
// 008e5731  8bf1                 mov esi, ecx
// 008e5733  8b06                 mov eax, dword ptr [esi]
// 008e5735  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e573b  ffd2                 call edx
// 008e573d  85c0                 test eax, eax
// 008e573f  7411                 je 0x8e5752
// 008e5741  8bce                 mov ecx, esi
// 008e5743  e828c1ffff           call 0x8e1870
// 008e5748  8b10                 mov edx, dword ptr [eax]
// 008e574a  5e                   pop esi
// 008e574b  8bc8                 mov ecx, eax
// 008e574d  8b5234               mov edx, dword ptr [edx + 0x34]
// 008e5750  ffe2                 jmp edx
// 008e5752  5e                   pop esi
// 008e5753  c20400               ret 4
// copied from an identical function in another client (function ?SetColorHilite@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp