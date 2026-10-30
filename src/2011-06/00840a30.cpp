// roc 2011-06 00840a30  unit: PAVCXTPReportRecordItem::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00840a30
//
// 00840a30  56                   push esi
// 00840a31  57                   push edi
// 00840a32  8bf9                 mov edi, ecx
// 00840a34  8b7728               mov esi, dword ptr [edi + 0x28]
// 00840a37  83ee01               sub esi, 1
// 00840a3a  781d                 js 0x840a59
// 00840a3c  8d642400             lea esp, [esp]
// 00840a40  85f6                 test esi, esi
// 00840a42  7c37                 jl 0x840a7b
// 00840a44  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00840a47  7d32                 jge 0x840a7b
// 00840a49  8b4724               mov eax, dword ptr [edi + 0x24]
// 00840a4c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00840a4f  e8869bfcff           call 0x80a5da
// 00840a54  83ee01               sub esi, 1
// 00840a57  79e7                 jns 0x840a40
// 00840a59  6aff                 push -1
// 00840a5b  6a00                 push 0
// 00840a5d  8d4f20               lea ecx, [edi + 0x20]
// 00840a60  e8dbe0ffff           call 0x83eb40
// 00840a65  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00840a68  85c9                 test ecx, ecx
// 00840a6a  740c                 je 0x840a78
// 00840a6c  e8699bfcff           call 0x80a5da
// 00840a71  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 00840a78  5f                   pop edi
// 00840a79  5e                   pop esi
// 00840a7a  c3                   ret 
// 00840a7b  e88a98fcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecord@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp