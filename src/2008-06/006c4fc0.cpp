// from server: 100% by auto
// roc 2008-06 006c4fc0  unit: CXTPReportViewPrintOptions  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4fc0
//
// 006c4fc0  56                   push esi
// 006c4fc1  57                   push edi
// 006c4fc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c4fc6  8bf1                 mov esi, ecx
// 006c4fc8  85ff                 test edi, edi
// 006c4fca  7412                 je 0x6c4fde
// 006c4fcc  57                   push edi
// 006c4fcd  e8be290300           call 0x6f7990
// 006c4fd2  8b4740               mov eax, dword ptr [edi + 0x40]
// 006c4fd5  894640               mov dword ptr [esi + 0x40], eax
// 006c4fd8  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 006c4fdb  894e44               mov dword ptr [esi + 0x44], ecx
// 006c4fde  5f                   pop edi
// 006c4fdf  5e                   pop esi
// 006c4fe0  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?Set@CXTPReportViewPrintOptions@@UAEXPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
