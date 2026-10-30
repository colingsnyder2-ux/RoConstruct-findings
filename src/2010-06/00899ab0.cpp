// roc 2010-06 00899ab0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899ab0
//
// 00899ab0  56                   push esi
// 00899ab1  8bf1                 mov esi, ecx
// 00899ab3  8b06                 mov eax, dword ptr [esi]
// 00899ab5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00899abb  ffd2                 call edx
// 00899abd  85c0                 test eax, eax
// 00899abf  7411                 je 0x899ad2
// 00899ac1  8bce                 mov ecx, esi
// 00899ac3  e89873f8ff           call 0x820e60
// 00899ac8  8b10                 mov edx, dword ptr [eax]
// 00899aca  5e                   pop esi
// 00899acb  8bc8                 mov ecx, eax
// 00899acd  8b523c               mov edx, dword ptr [edx + 0x3c]
// 00899ad0  ffe2                 jmp edx
// 00899ad2  5e                   pop esi
// 00899ad3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorText@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp