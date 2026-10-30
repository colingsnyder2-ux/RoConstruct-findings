// roc 2012-06 00a6a8a0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a8a0
//
// 00a6a8a0  56                   push esi
// 00a6a8a1  8bf1                 mov esi, ecx
// 00a6a8a3  8b06                 mov eax, dword ptr [esi]
// 00a6a8a5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6a8ab  ffd2                 call edx
// 00a6a8ad  85c0                 test eax, eax
// 00a6a8af  7411                 je 0xa6a8c2
// 00a6a8b1  8bce                 mov ecx, esi
// 00a6a8b3  e8e8c1ffff           call 0xa66aa0
// 00a6a8b8  8b10                 mov edx, dword ptr [eax]
// 00a6a8ba  5e                   pop esi
// 00a6a8bb  8bc8                 mov ecx, eax
// 00a6a8bd  8b522c               mov edx, dword ptr [edx + 0x2c]
// 00a6a8c0  ffe2                 jmp edx
// 00a6a8c2  5e                   pop esi
// 00a6a8c3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorFace@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp