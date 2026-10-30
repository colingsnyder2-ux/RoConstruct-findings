// roc 2012-06 009a8620  unit: CXTPReportColumn  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8620
//
// 009a8620  83ec08               sub esp, 8
// 009a8623  56                   push esi
// 009a8624  8d7124               lea esi, [ecx + 0x24]
// 009a8627  8d442404             lea eax, [esp + 4]
// 009a862b  50                   push eax
// 009a862c  8bce                 mov ecx, esi
// 009a862e  ff155846b200         call dword ptr [0xb24658]
// 009a8634  50                   push eax
// 009a8635  8bce                 mov ecx, esi
// 009a8637  ff159847b200         call dword ptr [0xb24798]
// 009a863d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a8641  8b5108               mov edx, dword ptr [ecx + 8]
// 009a8644  50                   push eax
// 009a8645  52                   push edx
// 009a8646  ff154021b200         call dword ptr [0xb22140]
// 009a864c  8b442404             mov eax, dword ptr [esp + 4]
// 009a8650  5e                   pop esi
// 009a8651  83c408               add esp, 8
// 009a8654  c20400               ret 4
// copied from an identical function in another client (function ?GetCaptionWidth@CXTPReportColumn@@QBEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportColumn.cpp