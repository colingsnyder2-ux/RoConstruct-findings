// roc 2008-06 006d78f0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d78f0
//
// 006d78f0  53                   push ebx
// 006d78f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006d78f5  56                   push esi
// 006d78f6  57                   push edi
// 006d78f7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006d78fb  6a01                 push 1
// 006d78fd  8bf1                 mov esi, ecx
// 006d78ff  57                   push edi
// 006d7900  53                   push ebx
// 006d7901  8d4e20               lea ecx, [esi + 0x20]
// 006d7904  e8f7420a00           call 0x77bc00
// 006d7909  897750               mov dword ptr [edi + 0x50], esi
// 006d790c  8b06                 mov eax, dword ptr [esi]
// 006d790e  8b5068               mov edx, dword ptr [eax + 0x68]
// 006d7911  53                   push ebx
// 006d7912  8bce                 mov ecx, esi
// 006d7914  ffd2                 call edx
// 006d7916  5f                   pop edi
// 006d7917  5e                   pop esi
// 006d7918  5b                   pop ebx
// 006d7919  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecords.cpp (function ?InsertAt@CXTPReportRecords@@QAEXHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecords.cpp
