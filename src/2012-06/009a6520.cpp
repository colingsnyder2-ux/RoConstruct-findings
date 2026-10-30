// from server: 100% by auto
// roc 2012-06 009a6520  unit: CXTPReportViewPrintOptions  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6520
//
// 009a6520  56                   push esi
// 009a6521  57                   push edi
// 009a6522  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009a6526  8bf1                 mov esi, ecx
// 009a6528  85ff                 test edi, edi
// 009a652a  7412                 je 0x9a653e
// 009a652c  57                   push edi
// 009a652d  e8ceea0200           call 0x9d5000
// 009a6532  8b4740               mov eax, dword ptr [edi + 0x40]
// 009a6535  894640               mov dword ptr [esi + 0x40], eax
// 009a6538  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 009a653b  894e44               mov dword ptr [esi + 0x44], ecx
// 009a653e  5f                   pop edi
// 009a653f  5e                   pop esi
// 009a6540  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportPageSetupDialog.cpp (function ?Set@CXTPReportViewPrintOptions@@UAEXPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPageSetupDialog.cpp
