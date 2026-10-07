// roc 2008-06 0074d3c0  unit: CXTPReportInplaceList  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d3c0
//
// 0074d3c0  56                   push esi
// 0074d3c1  6a00                 push 0
// 0074d3c3  8bf1                 mov esi, ecx
// 0074d3c5  e806cdfaff           call 0x6fa0d0
// 0074d3ca  8b4654               mov eax, dword ptr [esi + 0x54]
// 0074d3cd  8b5004               mov edx, dword ptr [eax + 4]
// 0074d3d0  8d4e54               lea ecx, [esi + 0x54]
// 0074d3d3  83c404               add esp, 4
// 0074d3d6  6a00                 push 0
// 0074d3d8  ffd2                 call edx
// 0074d3da  8bce                 mov ecx, esi
// 0074d3dc  5e                   pop esi
// 0074d3dd  e92a34f5ff           jmp 0x6a080c
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?PostNcDestroy@CXTPReportInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
