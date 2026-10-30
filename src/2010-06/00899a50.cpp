// roc 2010-06 00899a50  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899a50
//
// 00899a50  56                   push esi
// 00899a51  8bf1                 mov esi, ecx
// 00899a53  8b06                 mov eax, dword ptr [esi]
// 00899a55  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00899a5b  ffd2                 call edx
// 00899a5d  85c0                 test eax, eax
// 00899a5f  7411                 je 0x899a72
// 00899a61  8bce                 mov ecx, esi
// 00899a63  e8f873f8ff           call 0x820e60
// 00899a68  8b10                 mov edx, dword ptr [eax]
// 00899a6a  5e                   pop esi
// 00899a6b  8bc8                 mov ecx, eax
// 00899a6d  8b5234               mov edx, dword ptr [edx + 0x34]
// 00899a70  ffe2                 jmp edx
// 00899a72  5e                   pop esi
// 00899a73  c20400               ret 4
// copied from an identical function in another client (function ?SetColorHilite@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp