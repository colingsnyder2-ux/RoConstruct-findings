// roc 2010-06 008999e0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008999e0
//
// 008999e0  56                   push esi
// 008999e1  8bf1                 mov esi, ecx
// 008999e3  8b06                 mov eax, dword ptr [esi]
// 008999e5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008999eb  ffd2                 call edx
// 008999ed  85c0                 test eax, eax
// 008999ef  7411                 je 0x899a02
// 008999f1  8bce                 mov ecx, esi
// 008999f3  e86874f8ff           call 0x820e60
// 008999f8  8b10                 mov edx, dword ptr [eax]
// 008999fa  5e                   pop esi
// 008999fb  8bc8                 mov ecx, eax
// 008999fd  8b522c               mov edx, dword ptr [edx + 0x2c]
// 00899a00  ffe2                 jmp edx
// 00899a02  5e                   pop esi
// 00899a03  c20400               ret 4
// copied from an identical function in another client (function ?SetColorFace@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp