// roc 2010-06 007dee80  unit: PAVCXTPReportRecordItem::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dee80
//
// 007dee80  56                   push esi
// 007dee81  57                   push edi
// 007dee82  8bf9                 mov edi, ecx
// 007dee84  8b7728               mov esi, dword ptr [edi + 0x28]
// 007dee87  83ee01               sub esi, 1
// 007dee8a  781d                 js 0x7deea9
// 007dee8c  8d642400             lea esp, [esp]
// 007dee90  85f6                 test esi, esi
// 007dee92  7c37                 jl 0x7deecb
// 007dee94  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007dee97  7d32                 jge 0x7deecb
// 007dee99  8b4724               mov eax, dword ptr [edi + 0x24]
// 007dee9c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007dee9f  e87890fcff           call 0x7a7f1c
// 007deea4  83ee01               sub esi, 1
// 007deea7  79e7                 jns 0x7dee90
// 007deea9  6aff                 push -1
// 007deeab  6a00                 push 0
// 007deead  8d4f20               lea ecx, [edi + 0x20]
// 007deeb0  e84b240000           call 0x7e1300
// 007deeb5  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 007deeb8  85c9                 test ecx, ecx
// 007deeba  740c                 je 0x7deec8
// 007deebc  e85b90fcff           call 0x7a7f1c
// 007deec1  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 007deec8  5f                   pop edi
// 007deec9  5e                   pop esi
// 007deeca  c3                   ret 
// 007deecb  e87c8dfcff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecord@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp