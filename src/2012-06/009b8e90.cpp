// roc 2012-06 009b8e90  unit: PAVCXTPReportRecordItem::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b8e90
//
// 009b8e90  56                   push esi
// 009b8e91  57                   push edi
// 009b8e92  8bf9                 mov edi, ecx
// 009b8e94  8b7728               mov esi, dword ptr [edi + 0x28]
// 009b8e97  83ee01               sub esi, 1
// 009b8e9a  781d                 js 0x9b8eb9
// 009b8e9c  8d642400             lea esp, [esp]
// 009b8ea0  85f6                 test esi, esi
// 009b8ea2  7c37                 jl 0x9b8edb
// 009b8ea4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009b8ea7  7d32                 jge 0x9b8edb
// 009b8ea9  8b4724               mov eax, dword ptr [edi + 0x24]
// 009b8eac  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009b8eaf  e8d697fcff           call 0x98268a
// 009b8eb4  83ee01               sub esi, 1
// 009b8eb7  79e7                 jns 0x9b8ea0
// 009b8eb9  6aff                 push -1
// 009b8ebb  6a00                 push 0
// 009b8ebd  8d4f20               lea ecx, [edi + 0x20]
// 009b8ec0  e89bf3fdff           call 0x998260
// 009b8ec5  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 009b8ec8  85c9                 test ecx, ecx
// 009b8eca  740c                 je 0x9b8ed8
// 009b8ecc  e8b997fcff           call 0x98268a
// 009b8ed1  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 009b8ed8  5f                   pop edi
// 009b8ed9  5e                   pop esi
// 009b8eda  c3                   ret 
// 009b8edb  e8e094fcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecord@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp