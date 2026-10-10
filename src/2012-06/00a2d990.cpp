// roc 2012-06 00a2d990  unit: CXTPReportInplaceEdit  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2d990
//
// 00a2d990  56                   push esi
// 00a2d991  57                   push edi
// 00a2d992  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a2d996  8bf1                 mov esi, ecx
// 00a2d998  57                   push edi
// 00a2d999  c7869000000001000000 mov dword ptr [esi + 0x90], 1
// 00a2d9a3  e8144bf5ff           call 0x9824bc
// 00a2d9a8  57                   push edi
// 00a2d9a9  8d4e7c               lea ecx, [esi + 0x7c]
// 00a2d9ac  ff157847b200         call dword ptr [0xb24778]
// 00a2d9b2  5f                   pop edi
// 00a2d9b3  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00a2d9bd  5e                   pop esi
// 00a2d9be  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\ReportControl\XTPReportInplaceEdit.cpp (function ?SetWindowTextA@CXTPReportInplaceEdit@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/ReportControl/XTPReportInplaceEdit.cpp
