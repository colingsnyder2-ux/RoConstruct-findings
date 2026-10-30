// roc 2009-06 0080abf0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080abf0
//
// 0080abf0  56                   push esi
// 0080abf1  8bf1                 mov esi, ecx
// 0080abf3  8b06                 mov eax, dword ptr [esi]
// 0080abf5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080abfb  ffd2                 call edx
// 0080abfd  85c0                 test eax, eax
// 0080abff  7411                 je 0x80ac12
// 0080ac01  8bce                 mov ecx, esi
// 0080ac03  e86865f8ff           call 0x791170
// 0080ac08  8b10                 mov edx, dword ptr [eax]
// 0080ac0a  5e                   pop esi
// 0080ac0b  8bc8                 mov ecx, eax
// 0080ac0d  8b5228               mov edx, dword ptr [edx + 0x28]
// 0080ac10  ffe2                 jmp edx
// 0080ac12  5e                   pop esi
// 0080ac13  c21000               ret 0x10
// copied from an identical function in another client (function ?SetAlternateColors@CXTButton@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp