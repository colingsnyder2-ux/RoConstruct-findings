// roc 2009-06 0080acc0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080acc0
//
// 0080acc0  56                   push esi
// 0080acc1  8bf1                 mov esi, ecx
// 0080acc3  8b06                 mov eax, dword ptr [esi]
// 0080acc5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080accb  ffd2                 call edx
// 0080accd  85c0                 test eax, eax
// 0080accf  7411                 je 0x80ace2
// 0080acd1  8bce                 mov ecx, esi
// 0080acd3  e89864f8ff           call 0x791170
// 0080acd8  8b10                 mov edx, dword ptr [eax]
// 0080acda  5e                   pop esi
// 0080acdb  8bc8                 mov ecx, eax
// 0080acdd  8b5238               mov edx, dword ptr [edx + 0x38]
// 0080ace0  ffe2                 jmp edx
// 0080ace2  5e                   pop esi
// 0080ace3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorShadow@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp