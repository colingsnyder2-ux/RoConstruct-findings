// roc 2010-06 007d2560  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d2560
//
// 007d2560  8b442404             mov eax, dword ptr [esp + 4]
// 007d2564  8b542408             mov edx, dword ptr [esp + 8]
// 007d2568  89413c               mov dword ptr [ecx + 0x3c], eax
// 007d256b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d256f  895140               mov dword ptr [ecx + 0x40], edx
// 007d2572  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d2576  894144               mov dword ptr [ecx + 0x44], eax
// 007d2579  895148               mov dword ptr [ecx + 0x48], edx
// 007d257c  c21000               ret 0x10
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetCollapseRect@CXTPReportRow@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
