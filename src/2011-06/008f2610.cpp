// roc 2011-06 008f2610  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2610
//
// 008f2610  56                   push esi
// 008f2611  8bf1                 mov esi, ecx
// 008f2613  8b06                 mov eax, dword ptr [esi]
// 008f2615  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f261b  ffd2                 call edx
// 008f261d  85c0                 test eax, eax
// 008f261f  7411                 je 0x8f2632
// 008f2621  8bce                 mov ecx, esi
// 008f2623  e8e8fbffff           call 0x8f2210
// 008f2628  8b10                 mov edx, dword ptr [eax]
// 008f262a  5e                   pop esi
// 008f262b  8bc8                 mov ecx, eax
// 008f262d  8b523c               mov edx, dword ptr [edx + 0x3c]
// 008f2630  ffe2                 jmp edx
// 008f2632  5e                   pop esi
// 008f2633  c20400               ret 4
// copied from an identical function in another client (function ?SetColorText@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp