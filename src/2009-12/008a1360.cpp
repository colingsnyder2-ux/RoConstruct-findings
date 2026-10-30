// roc 2009-12 008a1360  unit: CXTPReportInplaceEdit  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1360
//
// 008a1360  56                   push esi
// 008a1361  57                   push edi
// 008a1362  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a1366  8bf1                 mov esi, ecx
// 008a1368  57                   push edi
// 008a1369  c7869000000001000000 mov dword ptr [esi + 0x90], 1
// 008a1373  e89c28f5ff           call 0x7f3c14
// 008a1378  57                   push edi
// 008a1379  8d4e7c               lea ecx, [esi + 0x7c]
// 008a137c  ff155cde9800         call dword ptr [0x98de5c]
// 008a1382  5f                   pop edi
// 008a1383  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 008a138d  5e                   pop esi
// 008a138e  c20400               ret 4
// copied from an identical function in another client (function ?SetWindowTextA@CXTPReportInplaceEdit@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp