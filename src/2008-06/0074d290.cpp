// roc 2008-06 0074d290  unit: CXTPReportInplaceEdit  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d290
//
// 0074d290  56                   push esi
// 0074d291  57                   push edi
// 0074d292  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0074d296  8bf1                 mov esi, ecx
// 0074d298  57                   push edi
// 0074d299  c7869000000001000000 mov dword ptr [esi + 0x90], 1
// 0074d2a3  e87239f5ff           call 0x6a0c1a
// 0074d2a8  57                   push edi
// 0074d2a9  8d4e7c               lea ecx, [esi + 0x7c]
// 0074d2ac  ff15b83e8000         call dword ptr [0x803eb8]
// 0074d2b2  5f                   pop edi
// 0074d2b3  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 0074d2bd  5e                   pop esi
// 0074d2be  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportInplaceControls.cpp (function ?SetWindowTextA@CXTPReportInplaceEdit@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp
