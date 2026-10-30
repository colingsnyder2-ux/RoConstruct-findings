// roc 2010-06 007dbf60  unit: CXTPReportColumn  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbf60
//
// 007dbf60  83ec08               sub esp, 8
// 007dbf63  56                   push esi
// 007dbf64  8d7124               lea esi, [ecx + 0x24]
// 007dbf67  8d442404             lea eax, [esp + 4]
// 007dbf6b  50                   push eax
// 007dbf6c  8bce                 mov ecx, esi
// 007dbf6e  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007dbf74  50                   push eax
// 007dbf75  8bce                 mov ecx, esi
// 007dbf77  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007dbf7d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007dbf81  8b5108               mov edx, dword ptr [ecx + 8]
// 007dbf84  50                   push eax
// 007dbf85  52                   push edx
// 007dbf86  ff1594a19e00         call dword ptr [0x9ea194]
// 007dbf8c  8b442404             mov eax, dword ptr [esp + 4]
// 007dbf90  5e                   pop esi
// 007dbf91  83c408               add esp, 8
// 007dbf94  c20400               ret 4
// copied from an identical function in another client (function ?GetCaptionWidth@CXTPReportColumn@@QBEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportColumn.cpp