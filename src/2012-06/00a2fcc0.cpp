// roc 2012-06 00a2fcc0  unit: CXTPReportHeaderDropWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2fcc0
//
// 00a2fcc0  56                   push esi
// 00a2fcc1  8bf1                 mov esi, ecx
// 00a2fcc3  8d4e58               lea ecx, [esi + 0x58]
// 00a2fcc6  e8012af5ff           call 0x9826cc
// 00a2fccb  8bce                 mov ecx, esi
// 00a2fccd  e8ce25f5ff           call 0x9822a0
// 00a2fcd2  85f6                 test esi, esi
// 00a2fcd4  740b                 je 0xa2fce1
// 00a2fcd6  8b06                 mov eax, dword ptr [esi]
// 00a2fcd8  8b5004               mov edx, dword ptr [eax + 4]
// 00a2fcdb  6a01                 push 1
// 00a2fcdd  8bce                 mov ecx, esi
// 00a2fcdf  ffd2                 call edx
// 00a2fce1  5e                   pop esi
// 00a2fce2  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportDragDrop.cpp (function ?PostNcDestroy@CXTPReportHeaderDropWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportDragDrop.cpp
