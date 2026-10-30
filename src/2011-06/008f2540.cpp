// roc 2011-06 008f2540  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2540
//
// 008f2540  56                   push esi
// 008f2541  8bf1                 mov esi, ecx
// 008f2543  8b06                 mov eax, dword ptr [esi]
// 008f2545  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f254b  ffd2                 call edx
// 008f254d  85c0                 test eax, eax
// 008f254f  7411                 je 0x8f2562
// 008f2551  8bce                 mov ecx, esi
// 008f2553  e8b8fcffff           call 0x8f2210
// 008f2558  8b10                 mov edx, dword ptr [eax]
// 008f255a  5e                   pop esi
// 008f255b  8bc8                 mov ecx, eax
// 008f255d  8b522c               mov edx, dword ptr [edx + 0x2c]
// 008f2560  ffe2                 jmp edx
// 008f2562  5e                   pop esi
// 008f2563  c20400               ret 4
// copied from an identical function in another client (function ?SetColorFace@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp