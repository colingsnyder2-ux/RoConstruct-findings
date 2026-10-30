// roc 2011-06 008f25b0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f25b0
//
// 008f25b0  56                   push esi
// 008f25b1  8bf1                 mov esi, ecx
// 008f25b3  8b06                 mov eax, dword ptr [esi]
// 008f25b5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f25bb  ffd2                 call edx
// 008f25bd  85c0                 test eax, eax
// 008f25bf  7411                 je 0x8f25d2
// 008f25c1  8bce                 mov ecx, esi
// 008f25c3  e848fcffff           call 0x8f2210
// 008f25c8  8b10                 mov edx, dword ptr [eax]
// 008f25ca  5e                   pop esi
// 008f25cb  8bc8                 mov ecx, eax
// 008f25cd  8b5234               mov edx, dword ptr [edx + 0x34]
// 008f25d0  ffe2                 jmp edx
// 008f25d2  5e                   pop esi
// 008f25d3  c20400               ret 4
// copied from an identical function in another client (function ?SetColorHilite@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp