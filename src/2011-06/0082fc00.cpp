// roc 2011-06 0082fc00  unit: CXTPReportView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fc00
//
// 0082fc00  8b442404             mov eax, dword ptr [esp + 4]
// 0082fc04  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 0082fc07  8910                 mov dword ptr [eax], edx
// 0082fc09  8b5170               mov edx, dword ptr [ecx + 0x70]
// 0082fc0c  895004               mov dword ptr [eax + 4], edx
// 0082fc0f  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0082fc12  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 0082fc15  895008               mov dword ptr [eax + 8], edx
// 0082fc18  89480c               mov dword ptr [eax + 0xc], ecx
// 0082fc1b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetRect@CXTPReportColumn@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
