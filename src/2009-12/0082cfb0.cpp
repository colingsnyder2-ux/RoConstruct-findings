// roc 2009-12 0082cfb0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cfb0
//
// 0082cfb0  53                   push ebx
// 0082cfb1  56                   push esi
// 0082cfb2  57                   push edi
// 0082cfb3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0082cfb7  8bf1                 mov esi, ecx
// 0082cfb9  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 0082cfbc  8d4e20               lea ecx, [esi + 0x20]
// 0082cfbf  57                   push edi
// 0082cfc0  53                   push ebx
// 0082cfc1  e8aadc0300           call 0x86ac70
// 0082cfc6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0082cfca  8bc7                 mov eax, edi
// 0082cfcc  7506                 jne 0x82cfd4
// 0082cfce  895f4c               mov dword ptr [edi + 0x4c], ebx
// 0082cfd1  897750               mov dword ptr [edi + 0x50], esi
// 0082cfd4  5f                   pop edi
// 0082cfd5  5e                   pop esi
// 0082cfd6  5b                   pop ebx
// 0082cfd7  c20400               ret 4
// copied from an identical function in another client (function ?Add@CXTPReportRecords@@QAEPAVCXTPReportRecord@@PAV2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp