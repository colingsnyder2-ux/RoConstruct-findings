// roc 2009-12 00827990  unit: CXTPReportControl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827990
//
// 00827990  51                   push ecx
// 00827991  56                   push esi
// 00827992  c744240400000000     mov dword ptr [esp + 4], 0
// 0082799a  e83149ffff           call 0x81c2d0
// 0082799f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008279a3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008279a7  50                   push eax
// 008279a8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008279ac  50                   push eax
// 008279ad  51                   push ecx
// 008279ae  56                   push esi
// 008279af  e84cf4ffff           call 0x826e00
// 008279b4  83c410               add esp, 0x10
// 008279b7  8bc6                 mov eax, esi
// 008279b9  5e                   pop esi
// 008279ba  59                   pop ecx
// 008279bb  c3                   ret 
// copied from an identical function in another client (function ?FormatDateTime@CXTPReportControlLocale@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@ABVCOleDateTime@3@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp