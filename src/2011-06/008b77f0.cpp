// roc 2011-06 008b77f0  unit: CXTPReportHeaderDropWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b77f0
//
// 008b77f0  56                   push esi
// 008b77f1  8bf1                 mov esi, ecx
// 008b77f3  8d4e58               lea ecx, [esi + 0x58]
// 008b77f6  e8212ef5ff           call 0x80a61c
// 008b77fb  8bce                 mov ecx, esi
// 008b77fd  e8e229f5ff           call 0x80a1e4
// 008b7802  85f6                 test esi, esi
// 008b7804  740b                 je 0x8b7811
// 008b7806  8b06                 mov eax, dword ptr [esi]
// 008b7808  8b5004               mov edx, dword ptr [eax + 4]
// 008b780b  6a01                 push 1
// 008b780d  8bce                 mov ecx, esi
// 008b780f  ffd2                 call edx
// 008b7811  5e                   pop esi
// 008b7812  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportDragDrop.cpp (function ?PostNcDestroy@CXTPReportHeaderDropWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportDragDrop.cpp
