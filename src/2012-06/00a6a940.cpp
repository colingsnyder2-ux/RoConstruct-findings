// roc 2012-06 00a6a940  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a940
//
// 00a6a940  56                   push esi
// 00a6a941  8bf1                 mov esi, ecx
// 00a6a943  8b06                 mov eax, dword ptr [esi]
// 00a6a945  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6a94b  ffd2                 call edx
// 00a6a94d  85c0                 test eax, eax
// 00a6a94f  7411                 je 0xa6a962
// 00a6a951  8bce                 mov ecx, esi
// 00a6a953  e848c1ffff           call 0xa66aa0
// 00a6a958  8b10                 mov edx, dword ptr [eax]
// 00a6a95a  5e                   pop esi
// 00a6a95b  8bc8                 mov ecx, eax
// 00a6a95d  8b5238               mov edx, dword ptr [edx + 0x38]
// 00a6a960  ffe2                 jmp edx
// 00a6a962  5e                   pop esi
// 00a6a963  c20400               ret 4
// copied from an identical function in another client (function ?SetColorShadow@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp