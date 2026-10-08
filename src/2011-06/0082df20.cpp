// from server: 100% by auto
// roc 2011-06 0082df20  unit: CXTPReportViewPrintOptions  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082df20
//
// 0082df20  56                   push esi
// 0082df21  57                   push edi
// 0082df22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082df26  8bf1                 mov esi, ecx
// 0082df28  85ff                 test edi, edi
// 0082df2a  7412                 je 0x82df3e
// 0082df2c  57                   push edi
// 0082df2d  e8aeec0200           call 0x85cbe0
// 0082df32  8b4740               mov eax, dword ptr [edi + 0x40]
// 0082df35  894640               mov dword ptr [esi + 0x40], eax
// 0082df38  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0082df3b  894e44               mov dword ptr [esi + 0x44], ecx
// 0082df3e  5f                   pop edi
// 0082df3f  5e                   pop esi
// 0082df40  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportPageSetupDialog.cpp (function ?Set@CXTPReportViewPrintOptions@@UAEXPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPageSetupDialog.cpp
