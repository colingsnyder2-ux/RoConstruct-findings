// roc 2009-12 00827ee0  unit: CXTPReportColumn  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827ee0
//
// 00827ee0  83ec08               sub esp, 8
// 00827ee3  56                   push esi
// 00827ee4  8d7124               lea esi, [ecx + 0x24]
// 00827ee7  8d442404             lea eax, [esp + 4]
// 00827eeb  50                   push eax
// 00827eec  8bce                 mov ecx, esi
// 00827eee  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00827ef4  50                   push eax
// 00827ef5  8bce                 mov ecx, esi
// 00827ef7  ff1580de9800         call dword ptr [0x98de80]
// 00827efd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00827f01  8b5108               mov edx, dword ptr [ecx + 8]
// 00827f04  50                   push eax
// 00827f05  52                   push edx
// 00827f06  ff156cb19800         call dword ptr [0x98b16c]
// 00827f0c  8b442404             mov eax, dword ptr [esp + 4]
// 00827f10  5e                   pop esi
// 00827f11  83c408               add esp, 8
// 00827f14  c20400               ret 4
// copied from an identical function in another client (function ?GetCaptionWidth@CXTPReportColumn@@QBEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportColumn.cpp