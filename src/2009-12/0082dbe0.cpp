// roc 2009-12 0082dbe0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082dbe0
//
// 0082dbe0  53                   push ebx
// 0082dbe1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0082dbe5  56                   push esi
// 0082dbe6  57                   push edi
// 0082dbe7  8bf9                 mov edi, ecx
// 0082dbe9  8b7728               mov esi, dword ptr [edi + 0x28]
// 0082dbec  8d4f20               lea ecx, [edi + 0x20]
// 0082dbef  53                   push ebx
// 0082dbf0  56                   push esi
// 0082dbf1  e87ad00300           call 0x86ac70
// 0082dbf6  897b50               mov dword ptr [ebx + 0x50], edi
// 0082dbf9  5f                   pop edi
// 0082dbfa  89736c               mov dword ptr [ebx + 0x6c], esi
// 0082dbfd  8bc6                 mov eax, esi
// 0082dbff  5e                   pop esi
// 0082dc00  5b                   pop ebx
// 0082dc01  c20400               ret 4
// copied from an identical function in another client (function ?Add@CXTPReportRows@@UAEHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp