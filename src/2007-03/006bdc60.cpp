// roc 2007-03 006bdc60  unit: seg_006b0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bdc60
//
// 006bdc60  8b442404             mov eax, dword ptr [esp + 4]
// 006bdc64  8b542408             mov edx, dword ptr [esp + 8]
// 006bdc68  89413c               mov dword ptr [ecx + 0x3c], eax
// 006bdc6b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bdc6f  895140               mov dword ptr [ecx + 0x40], edx
// 006bdc72  8b542410             mov edx, dword ptr [esp + 0x10]
// 006bdc76  894144               mov dword ptr [ecx + 0x44], eax
// 006bdc79  895148               mov dword ptr [ecx + 0x48], edx
// 006bdc7c  c21000               ret 0x10
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetCollapseRect@CXTPReportRow@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
