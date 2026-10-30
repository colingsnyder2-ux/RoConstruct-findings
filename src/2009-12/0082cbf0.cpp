// roc 2009-12 0082cbf0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cbf0
//
// 0082cbf0  53                   push ebx
// 0082cbf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0082cbf5  56                   push esi
// 0082cbf6  57                   push edi
// 0082cbf7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082cbfb  6a01                 push 1
// 0082cbfd  8bf1                 mov esi, ecx
// 0082cbff  57                   push edi
// 0082cc00  53                   push ebx
// 0082cc01  8d4e20               lea ecx, [esi + 0x20]
// 0082cc04  e8370f0c00           call 0x8edb40
// 0082cc09  897750               mov dword ptr [edi + 0x50], esi
// 0082cc0c  8b06                 mov eax, dword ptr [esi]
// 0082cc0e  8b5068               mov edx, dword ptr [eax + 0x68]
// 0082cc11  53                   push ebx
// 0082cc12  8bce                 mov ecx, esi
// 0082cc14  ffd2                 call edx
// 0082cc16  5f                   pop edi
// 0082cc17  5e                   pop esi
// 0082cc18  5b                   pop ebx
// 0082cc19  c20800               ret 8
// copied from an identical function in another client (function ?InsertAt@CXTPReportRecords@@QAEXHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecords.cpp