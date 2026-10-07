// roc 2007-08 006567b0  unit: CXTPReportRow_Batch  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006567b0
//
// 006567b0  8b442404             mov eax, dword ptr [esp + 4]
// 006567b4  8b542408             mov edx, dword ptr [esp + 8]
// 006567b8  89413c               mov dword ptr [ecx + 0x3c], eax
// 006567bb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006567bf  895140               mov dword ptr [ecx + 0x40], edx
// 006567c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 006567c6  894144               mov dword ptr [ecx + 0x44], eax
// 006567c9  895148               mov dword ptr [ecx + 0x48], edx
// 006567cc  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?SetCollapseRect@CXTPReportRow@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
