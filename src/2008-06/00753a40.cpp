// roc 2008-06 00753a40  unit: CXTPReportHeaderDropWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753a40
//
// 00753a40  56                   push esi
// 00753a41  8bf1                 mov esi, ecx
// 00753a43  8d4e58               lea ecx, [esi + 0x58]
// 00753a46  e80bd2f4ff           call 0x6a0c56
// 00753a4b  8bce                 mov ecx, esi
// 00753a4d  e8bacdf4ff           call 0x6a080c
// 00753a52  85f6                 test esi, esi
// 00753a54  740b                 je 0x753a61
// 00753a56  8b06                 mov eax, dword ptr [esi]
// 00753a58  8b5004               mov edx, dword ptr [eax + 4]
// 00753a5b  6a01                 push 1
// 00753a5d  8bce                 mov ecx, esi
// 00753a5f  ffd2                 call edx
// 00753a61  5e                   pop esi
// 00753a62  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportDragDrop.cpp (function ?PostNcDestroy@CXTPReportHeaderDropWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportDragDrop.cpp
