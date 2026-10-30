// roc 2009-06 0080ac20  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ac20
//
// 0080ac20  56                   push esi
// 0080ac21  8bf1                 mov esi, ecx
// 0080ac23  8b06                 mov eax, dword ptr [esi]
// 0080ac25  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080ac2b  ffd2                 call edx
// 0080ac2d  85c0                 test eax, eax
// 0080ac2f  7411                 je 0x80ac42
// 0080ac31  8bce                 mov ecx, esi
// 0080ac33  e83865f8ff           call 0x791170
// 0080ac38  8b10                 mov edx, dword ptr [eax]
// 0080ac3a  5e                   pop esi
// 0080ac3b  8bc8                 mov ecx, eax
// 0080ac3d  8b522c               mov edx, dword ptr [edx + 0x2c]
// 0080ac40  ffe2                 jmp edx
// 0080ac42  5e                   pop esi
// 0080ac43  c20400               ret 4
// copied from an identical function in another client (function ?SetColorFace@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp