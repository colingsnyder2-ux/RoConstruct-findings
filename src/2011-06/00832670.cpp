// roc 2011-06 00832670  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832670
//
// 00832670  8b442404             mov eax, dword ptr [esp + 4]
// 00832674  8b542408             mov edx, dword ptr [esp + 8]
// 00832678  89413c               mov dword ptr [ecx + 0x3c], eax
// 0083267b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0083267f  895140               mov dword ptr [ecx + 0x40], edx
// 00832682  8b542410             mov edx, dword ptr [esp + 0x10]
// 00832686  894144               mov dword ptr [ecx + 0x44], eax
// 00832689  895148               mov dword ptr [ecx + 0x48], edx
// 0083268c  c21000               ret 0x10
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetCollapseRect@CXTPReportRow@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
