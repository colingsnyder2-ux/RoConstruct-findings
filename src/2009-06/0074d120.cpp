// roc 2009-06 0074d120  unit: CXTPReportColumn  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074d120
//
// 0074d120  83ec08               sub esp, 8
// 0074d123  56                   push esi
// 0074d124  8d7124               lea esi, [ecx + 0x24]
// 0074d127  8d442404             lea eax, [esp + 4]
// 0074d12b  50                   push eax
// 0074d12c  8bce                 mov ecx, esi
// 0074d12e  ff1554fb8900         call dword ptr [0x89fb54]
// 0074d134  50                   push eax
// 0074d135  8bce                 mov ecx, esi
// 0074d137  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0074d13d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074d141  8b5108               mov edx, dword ptr [ecx + 8]
// 0074d144  50                   push eax
// 0074d145  52                   push edx
// 0074d146  ff1550e18900         call dword ptr [0x89e150]
// 0074d14c  8b442404             mov eax, dword ptr [esp + 4]
// 0074d150  5e                   pop esi
// 0074d151  83c408               add esp, 8
// 0074d154  c20400               ret 4
// copied from an identical function in another client (function ?GetCaptionWidth@CXTPReportColumn@@QBEHPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportColumn.cpp