// roc 2009-12 00827eb0  unit: CXTPReportColumn  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827eb0
//
// 00827eb0  837c240400           cmp dword ptr [esp + 4], 0
// 00827eb5  7409                 je 0x827ec0
// 00827eb7  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00827eba  894840               mov dword ptr [eax + 0x40], ecx
// 00827ebd  c20400               ret 4
// 00827ec0  e85bfcffff           call 0x827b20
// 00827ec5  85c0                 test eax, eax
// 00827ec7  740a                 je 0x827ed3
// 00827ec9  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00827ecc  c7414000000000       mov dword ptr [ecx + 0x40], 0
// 00827ed3  c20400               ret 4
// copied from an identical function in another client (function ?SetTreeColumn@CXTPReportColumn@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumn.cpp