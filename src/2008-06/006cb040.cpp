// roc 2008-06 006cb040  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb040
//
// 006cb040  8b442404             mov eax, dword ptr [esp + 4]
// 006cb044  8b542408             mov edx, dword ptr [esp + 8]
// 006cb048  89413c               mov dword ptr [ecx + 0x3c], eax
// 006cb04b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cb04f  895140               mov dword ptr [ecx + 0x40], edx
// 006cb052  8b542410             mov edx, dword ptr [esp + 0x10]
// 006cb056  894144               mov dword ptr [ecx + 0x44], eax
// 006cb059  895148               mov dword ptr [ecx + 0x48], edx
// 006cb05c  c21000               ret 0x10
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetCollapseRect@CXTPReportRow@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
