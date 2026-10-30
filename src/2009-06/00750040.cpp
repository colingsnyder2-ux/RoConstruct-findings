// roc 2009-06 00750040  unit: PAVCXTPReportRecordItem::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750040
//
// 00750040  56                   push esi
// 00750041  57                   push edi
// 00750042  8bf9                 mov edi, ecx
// 00750044  8b7728               mov esi, dword ptr [edi + 0x28]
// 00750047  83ee01               sub esi, 1
// 0075004a  781d                 js 0x750069
// 0075004c  8d642400             lea esp, [esp]
// 00750050  85f6                 test esi, esi
// 00750052  7c37                 jl 0x75008b
// 00750054  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00750057  7d32                 jge 0x75008b
// 00750059  8b4724               mov eax, dword ptr [edi + 0x24]
// 0075005c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0075005f  e8448ffcff           call 0x718fa8
// 00750064  83ee01               sub esi, 1
// 00750067  79e7                 jns 0x750050
// 00750069  6aff                 push -1
// 0075006b  6a00                 push 0
// 0075006d  8d4f20               lea ecx, [edi + 0x20]
// 00750070  e89b240000           call 0x752510
// 00750075  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00750078  85c9                 test ecx, ecx
// 0075007a  740c                 je 0x750088
// 0075007c  e8278ffcff           call 0x718fa8
// 00750081  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 00750088  5f                   pop edi
// 00750089  5e                   pop esi
// 0075008a  c3                   ret 
// 0075008b  e8548cfcff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecord@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp