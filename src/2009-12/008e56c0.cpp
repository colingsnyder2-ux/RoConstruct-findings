// roc 2009-12 008e56c0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e56c0
//
// 008e56c0  56                   push esi
// 008e56c1  8bf1                 mov esi, ecx
// 008e56c3  8b06                 mov eax, dword ptr [esi]
// 008e56c5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e56cb  ffd2                 call edx
// 008e56cd  85c0                 test eax, eax
// 008e56cf  7411                 je 0x8e56e2
// 008e56d1  8bce                 mov ecx, esi
// 008e56d3  e898c1ffff           call 0x8e1870
// 008e56d8  8b10                 mov edx, dword ptr [eax]
// 008e56da  5e                   pop esi
// 008e56db  8bc8                 mov ecx, eax
// 008e56dd  8b522c               mov edx, dword ptr [edx + 0x2c]
// 008e56e0  ffe2                 jmp edx
// 008e56e2  5e                   pop esi
// 008e56e3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorFace@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp