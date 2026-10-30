// roc 2011-06 008f2510  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2510
//
// 008f2510  56                   push esi
// 008f2511  8bf1                 mov esi, ecx
// 008f2513  8b06                 mov eax, dword ptr [esi]
// 008f2515  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f251b  ffd2                 call edx
// 008f251d  85c0                 test eax, eax
// 008f251f  7411                 je 0x8f2532
// 008f2521  8bce                 mov ecx, esi
// 008f2523  e8e8fcffff           call 0x8f2210
// 008f2528  8b10                 mov edx, dword ptr [eax]
// 008f252a  5e                   pop esi
// 008f252b  8bc8                 mov ecx, eax
// 008f252d  8b5228               mov edx, dword ptr [edx + 0x28]
// 008f2530  ffe2                 jmp edx
// 008f2532  5e                   pop esi
// 008f2533  c21000               ret 0x10
// copied from an identical function in another client (function ?SetAlternateColors@CXTButton@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp