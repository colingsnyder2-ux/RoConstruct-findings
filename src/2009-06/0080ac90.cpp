// roc 2009-06 0080ac90  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ac90
//
// 0080ac90  56                   push esi
// 0080ac91  8bf1                 mov esi, ecx
// 0080ac93  8b06                 mov eax, dword ptr [esi]
// 0080ac95  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080ac9b  ffd2                 call edx
// 0080ac9d  85c0                 test eax, eax
// 0080ac9f  7411                 je 0x80acb2
// 0080aca1  8bce                 mov ecx, esi
// 0080aca3  e8c864f8ff           call 0x791170
// 0080aca8  8b10                 mov edx, dword ptr [eax]
// 0080acaa  5e                   pop esi
// 0080acab  8bc8                 mov ecx, eax
// 0080acad  8b5234               mov edx, dword ptr [edx + 0x34]
// 0080acb0  ffe2                 jmp edx
// 0080acb2  5e                   pop esi
// 0080acb3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorHilite@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp