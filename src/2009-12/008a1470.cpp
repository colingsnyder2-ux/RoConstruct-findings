// roc 2009-12 008a1470  unit: CXTPReportInplaceList  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1470
//
// 008a1470  8b442404             mov eax, dword ptr [esp + 4]
// 008a1474  56                   push esi
// 008a1475  8bf1                 mov esi, ecx
// 008a1477  50                   push eax
// 008a1478  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 008a147f  e82cfeffff           call 0x8a12b0
// 008a1484  8d4e24               lea ecx, [esi + 0x24]
// 008a1487  c7462800000000       mov dword ptr [esi + 0x28], 0
// 008a148e  ff1590d69800         call dword ptr [0x98d690]
// 008a1494  5e                   pop esi
// 008a1495  c20400               ret 4
// copied from an identical function in another client (function ?SetItemArgs@CXTPReportInplaceList@@MAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp