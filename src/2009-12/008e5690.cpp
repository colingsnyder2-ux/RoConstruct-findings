// roc 2009-12 008e5690  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5690
//
// 008e5690  56                   push esi
// 008e5691  8bf1                 mov esi, ecx
// 008e5693  8b06                 mov eax, dword ptr [esi]
// 008e5695  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e569b  ffd2                 call edx
// 008e569d  85c0                 test eax, eax
// 008e569f  7411                 je 0x8e56b2
// 008e56a1  8bce                 mov ecx, esi
// 008e56a3  e8c8c1ffff           call 0x8e1870
// 008e56a8  8b10                 mov edx, dword ptr [eax]
// 008e56aa  5e                   pop esi
// 008e56ab  8bc8                 mov ecx, eax
// 008e56ad  8b5228               mov edx, dword ptr [edx + 0x28]
// 008e56b0  ffe2                 jmp edx
// 008e56b2  5e                   pop esi
// 008e56b3  c21000               ret 0x10
// copied from an identical function in another client (function ?SetAlternateColors@CXTButton@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp