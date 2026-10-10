// roc 2008-06 0074d390  unit: CXTPReportInplaceList  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d390
//
// 0074d390  8b442404             mov eax, dword ptr [esp + 4]
// 0074d394  56                   push esi
// 0074d395  8bf1                 mov esi, ecx
// 0074d397  50                   push eax
// 0074d398  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 0074d39f  e83cfeffff           call 0x74d1e0
// 0074d3a4  8d4e24               lea ecx, [esi + 0x24]
// 0074d3a7  c7462800000000       mov dword ptr [esi + 0x28], 0
// 0074d3ae  ff15843e8000         call dword ptr [0x803e84]
// 0074d3b4  5e                   pop esi
// 0074d3b5  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportInplaceControls.cpp (function ?SetItemArgs@CXTPReportInplaceList@@MAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp
