// roc 2010-06 00899a80  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899a80
//
// 00899a80  56                   push esi
// 00899a81  8bf1                 mov esi, ecx
// 00899a83  8b06                 mov eax, dword ptr [esi]
// 00899a85  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00899a8b  ffd2                 call edx
// 00899a8d  85c0                 test eax, eax
// 00899a8f  7411                 je 0x899aa2
// 00899a91  8bce                 mov ecx, esi
// 00899a93  e8c873f8ff           call 0x820e60
// 00899a98  8b10                 mov edx, dword ptr [eax]
// 00899a9a  5e                   pop esi
// 00899a9b  8bc8                 mov ecx, eax
// 00899a9d  8b5238               mov edx, dword ptr [edx + 0x38]
// 00899aa0  ffe2                 jmp edx
// 00899aa2  5e                   pop esi
// 00899aa3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorShadow@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp