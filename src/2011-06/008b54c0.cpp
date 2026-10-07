// roc 2011-06 008b54c0  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b54c0
//
// 008b54c0  56                   push esi
// 008b54c1  8bf1                 mov esi, ecx
// 008b54c3  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b54c7  7414                 je 0x8b54dd
// 008b54c9  6a00                 push 0
// 008b54cb  e8764ef5ff           call 0x80a346
// 008b54d0  8b4654               mov eax, dword ptr [esi + 0x54]
// 008b54d3  8b5004               mov edx, dword ptr [eax + 4]
// 008b54d6  8d4e54               lea ecx, [esi + 0x54]
// 008b54d9  6a00                 push 0
// 008b54db  ffd2                 call edx
// 008b54dd  5e                   pop esi
// 008b54de  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceEdit.cpp (function ?HideWindow@CXTPReportInplaceEdit@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceEdit.cpp
