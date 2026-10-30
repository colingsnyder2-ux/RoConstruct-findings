// roc 2011-06 008f25e0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f25e0
//
// 008f25e0  56                   push esi
// 008f25e1  8bf1                 mov esi, ecx
// 008f25e3  8b06                 mov eax, dword ptr [esi]
// 008f25e5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f25eb  ffd2                 call edx
// 008f25ed  85c0                 test eax, eax
// 008f25ef  7411                 je 0x8f2602
// 008f25f1  8bce                 mov ecx, esi
// 008f25f3  e818fcffff           call 0x8f2210
// 008f25f8  8b10                 mov edx, dword ptr [eax]
// 008f25fa  5e                   pop esi
// 008f25fb  8bc8                 mov ecx, eax
// 008f25fd  8b5238               mov edx, dword ptr [edx + 0x38]
// 008f2600  ffe2                 jmp edx
// 008f2602  5e                   pop esi
// 008f2603  c20400               ret 4
// copied from an identical function in another client (function ?SetColorShadow@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp