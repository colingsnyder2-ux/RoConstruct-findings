// roc 2012-06 009aac70  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aac70
//
// 009aac70  8b442404             mov eax, dword ptr [esp + 4]
// 009aac74  8b542408             mov edx, dword ptr [esp + 8]
// 009aac78  89413c               mov dword ptr [ecx + 0x3c], eax
// 009aac7b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009aac7f  895140               mov dword ptr [ecx + 0x40], edx
// 009aac82  8b542410             mov edx, dword ptr [esp + 0x10]
// 009aac86  894144               mov dword ptr [ecx + 0x44], eax
// 009aac89  895148               mov dword ptr [ecx + 0x48], edx
// 009aac8c  c21000               ret 0x10
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetCollapseRect@CXTPReportRow@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
