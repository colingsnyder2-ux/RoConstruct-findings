// roc 2009-06 0080acf0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080acf0
//
// 0080acf0  56                   push esi
// 0080acf1  8bf1                 mov esi, ecx
// 0080acf3  8b06                 mov eax, dword ptr [esi]
// 0080acf5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080acfb  ffd2                 call edx
// 0080acfd  85c0                 test eax, eax
// 0080acff  7411                 je 0x80ad12
// 0080ad01  8bce                 mov ecx, esi
// 0080ad03  e86864f8ff           call 0x791170
// 0080ad08  8b10                 mov edx, dword ptr [eax]
// 0080ad0a  5e                   pop esi
// 0080ad0b  8bc8                 mov ecx, eax
// 0080ad0d  8b523c               mov edx, dword ptr [edx + 0x3c]
// 0080ad10  ffe2                 jmp edx
// 0080ad12  5e                   pop esi
// 0080ad13  c20400               ret 4
// copied from an identical function in another client (function ?SetColorText@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp