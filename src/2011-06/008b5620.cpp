// roc 2011-06 008b5620  unit: CXTPReportInplaceList  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b5620
//
// 008b5620  56                   push esi
// 008b5621  6a00                 push 0
// 008b5623  8bf1                 mov esi, ecx
// 008b5625  e8569cfaff           call 0x85f280
// 008b562a  8b4654               mov eax, dword ptr [esi + 0x54]
// 008b562d  8b5004               mov edx, dword ptr [eax + 4]
// 008b5630  8d4e54               lea ecx, [esi + 0x54]
// 008b5633  83c404               add esp, 4
// 008b5636  6a00                 push 0
// 008b5638  ffd2                 call edx
// 008b563a  8bce                 mov ecx, esi
// 008b563c  5e                   pop esi
// 008b563d  e9a24bf5ff           jmp 0x80a1e4
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceControls.cpp (function ?PostNcDestroy@CXTPReportInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceControls.cpp
