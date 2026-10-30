// roc 2011-06 00830030  unit: CXTPReportColumn  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830030
//
// 00830030  83ec08               sub esp, 8
// 00830033  56                   push esi
// 00830034  8d7124               lea esi, [ecx + 0x24]
// 00830037  8d442404             lea eax, [esp + 4]
// 0083003b  50                   push eax
// 0083003c  8bce                 mov ecx, esi
// 0083003e  ff15a826a400         call dword ptr [0xa426a8]
// 00830044  50                   push eax
// 00830045  8bce                 mov ecx, esi
// 00830047  ff15c82da400         call dword ptr [0xa42dc8]
// 0083004d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00830051  8b5108               mov edx, dword ptr [ecx + 8]
// 00830054  50                   push eax
// 00830055  52                   push edx
// 00830056  ff153801a400         call dword ptr [0xa40138]
// 0083005c  8b442404             mov eax, dword ptr [esp + 4]
// 00830060  5e                   pop esi
// 00830061  83c408               add esp, 8
// 00830064  c20400               ret 4
// copied from an identical function in another client (function ?GetCaptionWidth@CXTPReportColumn@@QBEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportColumn.cpp