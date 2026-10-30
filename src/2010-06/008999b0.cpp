// roc 2010-06 008999b0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008999b0
//
// 008999b0  56                   push esi
// 008999b1  8bf1                 mov esi, ecx
// 008999b3  8b06                 mov eax, dword ptr [esi]
// 008999b5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008999bb  ffd2                 call edx
// 008999bd  85c0                 test eax, eax
// 008999bf  7411                 je 0x8999d2
// 008999c1  8bce                 mov ecx, esi
// 008999c3  e89874f8ff           call 0x820e60
// 008999c8  8b10                 mov edx, dword ptr [eax]
// 008999ca  5e                   pop esi
// 008999cb  8bc8                 mov ecx, eax
// 008999cd  8b5228               mov edx, dword ptr [edx + 0x28]
// 008999d0  ffe2                 jmp edx
// 008999d2  5e                   pop esi
// 008999d3  c21000               ret 0x10
// copied from an identical function in another client (function ?SetAlternateColors@CXTButton@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp